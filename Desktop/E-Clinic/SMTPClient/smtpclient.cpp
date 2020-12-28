#include "smtpclient.h"

SMTPClient::SMTPClient(QString host, int port, int conTimeout, int timeout)
{
    // Set host and port
    host_ = host;
    port_ = port;

    // Set the timeout variables
    conTimeout_ = conTimeout;
    timeout_ = timeout;

    textStream_ = NULL;

    // Create the socket object and connect it to the readyRead slot
    socket_ = new QSslSocket(this);

    connect(socket_, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

SMTPClient::~SMTPClient()
{
    delete textStream_;

    socket_->abort();
    socket_->deleteLater();
}


void SMTPClient::sendEmail(Email email)
{
    email_ = email;

    QString newContent = "";

    // Create a header used by the email server
    newContent.append("To: "   + email_.to().address()   + "\n"); // To
    newContent.append("From: " + email_.from().address() + "\n"); // From
    newContent.append("Subject: " + email_.subject() + "\n\n");   // Subject
    newContent.append(email_.content());                          // Content/Body

    newContent.replace(QString::fromLatin1("\n"), QString::fromLatin1("\r\n"));
    newContent.replace(QString::fromLatin1("\r\n.\r\n"), QString::fromLatin1("\r\n..\r\n"));

    email_.setContent(newContent);

    state_ = Init;

    // Connect to host
    socket_->connectToHostEncrypted(host_, port_);

    // Wait for the connection
    if ( !socket_->waitForConnected(conTimeout_) )
    {
        emit status(Status::Failed, socket_->errorString());
        return;
    }

    // Create the text stream object
    textStream_ = new QTextStream(socket_);

    // Call the abort function when reach the timeout
    QTimer::singleShot(timeout_, this, SLOT(abort()));
}


void SMTPClient::abort()
{
    if( socket_->isOpen() )
    {
        // Aborts the current connection and resets the socket
        socket_->abort();

        state_ = Close;

        emit status(Status::Failed, "Timeout reached, the procedure was canceled!");
    }
}


void SMTPClient::readyRead()
{
    QString responseLine;

    do
    {
        responseLine = socket_->readLine();
        response_ += responseLine;
    } while ( socket_->canReadLine() && responseLine[3] != ' ' );

    responseLine.truncate(3);

    if ( state_ == Init && responseLine == "220" )
    {
        *textStream_ << "EHLO localhost" <<"\r\n";
        textStream_->flush();

        state_ = HandShake;
    }
    else if (state_ == HandShake && responseLine == "250")
    {
        socket_->startClientEncryption();
        socket_->waitForEncrypted(conTimeout_);

        *textStream_ << "EHLO localhost" << "\r\n";
        textStream_->flush();

        state_ = Auth;
    }
    else if (state_ == Auth && responseLine == "250")
    {
        *textStream_ << "AUTH LOGIN" << "\r\n";
        textStream_->flush();

        state_ = User;
    }
    else if (state_ == User && responseLine == "334")
    {
        // Use XOAUTH2 protocol, which means that password and username has to be sent in base64 coding
        *textStream_ << QByteArray().append(email_.credentials().address()).toBase64()  << "\r\n";
        textStream_->flush();

        state_ = Pass;
    }
    else if (state_ == Pass && responseLine == "334")
    {
        *textStream_ << QByteArray().append(email_.credentials().password()).toBase64() << "\r\n";
        textStream_->flush();

        state_ = Mail;
    }
    else if ( state_ == Mail && responseLine == "235" )
    {
        *textStream_ << "MAIL FROM:<" << email_.from().address() << ">\r\n";
        textStream_->flush();

        state_ = Rcpt;
    }
    else if ( state_ == Rcpt && responseLine == "250" )
    {
        *textStream_ << "RCPT TO:<" << email_.to().address() << ">\r\n";
        textStream_->flush();

        state_ = Data;
    }
    else if ( state_ == Data && responseLine == "250" )
    {
        *textStream_ << "DATA\r\n";
        textStream_->flush();

        state_ = Body;
    }
    else if ( state_ == Body && responseLine == "354" )
    {
        *textStream_ << email_.content() << "\r\n.\r\n";
        textStream_->flush();

        state_ = Quit;
    }
    else if ( state_ == Quit && responseLine == "250" )
    {
        *textStream_ << "QUIT\r\n";
        textStream_->flush();

        state_ = Close;

        emit status(Status::Success);
    }
    else if ( state_ == Close )
    {
        return;
    }
    else
    {
        state_ = Close;

        emit status(Status::Failed, response_);
    }
}
