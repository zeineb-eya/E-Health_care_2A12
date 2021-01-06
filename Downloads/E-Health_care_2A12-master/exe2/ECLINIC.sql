--------------------------------------------------------
--  File created - Wednesday-December-30-2020   
--------------------------------------------------------
DROP TABLE "EYA"."FCTCMN" cascade constraints;
DROP TABLE "EYA"."RDV" cascade constraints;
DROP TABLE "EYA"."MENU" cascade constraints;
DROP TABLE "EYA"."APPAREILS" cascade constraints;
DROP TABLE "EYA"."PATIENTS" cascade constraints;
DROP TABLE "EYA"."CATEGORIES" cascade constraints;
DROP TABLE "EYA"."MEDECIN" cascade constraints;
DROP TABLE "EYA"."CHAMBRES" cascade constraints;
DROP TABLE "EYA"."ELEMENT" cascade constraints;
DROP TABLE "EYA"."SERVICE" cascade constraints;
--------------------------------------------------------
--  DDL for Table FCTCMN
--------------------------------------------------------

  CREATE TABLE "EYA"."FCTCMN" 
   (	"IDFC" NUMBER, 
	"ART" VARCHAR2(100 BYTE), 
	"QTE" NUMBER, 
	"PU" NUMBER, 
	"PT" NUMBER, 
	"TP" VARCHAR2(100 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table RDV
--------------------------------------------------------

  CREATE TABLE "EYA"."RDV" 
   (	"CODERDV" NUMBER, 
	"DOCTOR" VARCHAR2(20 BYTE), 
	"DATERDV" VARCHAR2(20 BYTE), 
	"TIMERDV" VARCHAR2(20 BYTE), 
	"SERVICE" VARCHAR2(20 BYTE), 
	"ID" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table MENU
--------------------------------------------------------

  CREATE TABLE "EYA"."MENU" 
   (	"ID_MENU" NUMBER, 
	"PETIT_DEJ" VARCHAR2(50 BYTE), 
	"DEJ" VARCHAR2(50 BYTE), 
	"DINNER" VARCHAR2(50 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table APPAREILS
--------------------------------------------------------

  CREATE TABLE "EYA"."APPAREILS" 
   (	"NUMSERIE" NUMBER, 
	"NOMAPP" VARCHAR2(20 BYTE), 
	"TYPEAPP" VARCHAR2(20 BYTE), 
	"ETATAPP" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table PATIENTS
--------------------------------------------------------

  CREATE TABLE "EYA"."PATIENTS" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"SEXE" VARCHAR2(20 BYTE), 
	"DATE_NAISSANCE" VARCHAR2(20 BYTE), 
	"SITUATION_FAMILLIALE" VARCHAR2(20 BYTE), 
	"ASSURANCE_MEDICAL" VARCHAR2(20 BYTE), 
	"CODE_ASSURANCE" VARCHAR2(20 BYTE), 
	"NOMP_A_PREVENIR" VARCHAR2(20 BYTE), 
	"PRENOMP_A_PREVENIR" VARCHAR2(20 BYTE), 
	"TELP_A_PREVENIR" NUMBER, 
	"TEL" NUMBER, 
	"TYPEPATIENT" VARCHAR2(20 BYTE), 
	"ADRESSE" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table CATEGORIES
--------------------------------------------------------

  CREATE TABLE "EYA"."CATEGORIES" 
   (	"ID" NUMBER, 
	"ENCAISSEMENTS" VARCHAR2(20 BYTE), 
	"CHIFFRES" VARCHAR2(20 BYTE), 
	"GAINS" VARCHAR2(20 BYTE), 
	"DEPENSES" VARCHAR2(20 BYTE), 
	"SALAIRES" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table MEDECIN
--------------------------------------------------------

  CREATE TABLE "EYA"."MEDECIN" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"SPECIALITE" VARCHAR2(20 BYTE), 
	"TEL" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table CHAMBRES
--------------------------------------------------------

  CREATE TABLE "EYA"."CHAMBRES" 
   (	"NOMDEPARTEMENT" VARCHAR2(50 BYTE) DEFAULT (null), 
	"TYPEC" VARCHAR2(50 BYTE) DEFAULT (null), 
	"ETATC" VARCHAR2(50 BYTE) DEFAULT (null), 
	"ELEMENTSMANQUANTS" VARCHAR2(50 BYTE) DEFAULT (null), 
	"NUMCHAMBRE" NUMBER(*,0) DEFAULT (null), 
	"NUMETAGE" NUMBER(*,0) DEFAULT (null), 
	"NBLITS" NUMBER(*,0) DEFAULT (null)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table ELEMENT
--------------------------------------------------------

  CREATE TABLE "EYA"."ELEMENT" 
   (	"ID_ELEMENT" NUMBER, 
	"NOM_ELEMENT" VARCHAR2(50 BYTE), 
	"QT_ELEMENT" VARCHAR2(50 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table SERVICE
--------------------------------------------------------

  CREATE TABLE "EYA"."SERVICE" 
   (	"IDS" NUMBER, 
	"TYPE" VARCHAR2(20 BYTE), 
	"DATES" DATE, 
	"HEURE" VARCHAR2(20 BYTE), 
	"NOM_MED" VARCHAR2(20 BYTE), 
	"NOM_PAT" VARCHAR2(20 BYTE), 
	"PRIX" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into EYA.FCTCMN
SET DEFINE OFF;
REM INSERTING into EYA.RDV
SET DEFINE OFF;
Insert into EYA.RDV (CODERDV,DOCTOR,DATERDV,TIMERDV,SERVICE,ID) values (1,'Jenny','01/10/2020','08:52','blood test',77);
Insert into EYA.RDV (CODERDV,DOCTOR,DATERDV,TIMERDV,SERVICE,ID) values (2,'roman','30/11/2020','17:30','consultation',15016);
Insert into EYA.RDV (CODERDV,DOCTOR,DATERDV,TIMERDV,SERVICE,ID) values (3,'jake','10/12/2020','15:13','exam',30032);
Insert into EYA.RDV (CODERDV,DOCTOR,DATERDV,TIMERDV,SERVICE,ID) values (11,'al','11/11/2020','15:12','traitr',123456);
Insert into EYA.RDV (CODERDV,DOCTOR,DATERDV,TIMERDV,SERVICE,ID) values (4,'Liv','25/12/2020','10:00','service',665);
REM INSERTING into EYA.MENU
SET DEFINE OFF;
REM INSERTING into EYA.APPAREILS
SET DEFINE OFF;
REM INSERTING into EYA.PATIENTS
SET DEFINE OFF;
Insert into EYA.PATIENTS (ID,NOM,PRENOM,SEXE,DATE_NAISSANCE,SITUATION_FAMILLIALE,ASSURANCE_MEDICAL,CODE_ASSURANCE,NOMP_A_PREVENIR,PRENOMP_A_PREVENIR,TELP_A_PREVENIR,TEL,TYPEPATIENT,ADRESSE) values (30032,'jace','he','M','26/12/1998','kk','assu','codedeux','james','fairchild',6547,9845,'safe','vel');
Insert into EYA.PATIENTS (ID,NOM,PRENOM,SEXE,DATE_NAISSANCE,SITUATION_FAMILLIALE,ASSURANCE_MEDICAL,CODE_ASSURANCE,NOMP_A_PREVENIR,PRENOMP_A_PREVENIR,TELP_A_PREVENIR,TEL,TYPEPATIENT,ADRESSE) values (77,'peter','hale','m','03/12/2000','kay','assur','codeee','derek','hale',784,654,'safe','jkl');
Insert into EYA.PATIENTS (ID,NOM,PRENOM,SEXE,DATE_NAISSANCE,SITUATION_FAMILLIALE,ASSURANCE_MEDICAL,CODE_ASSURANCE,NOMP_A_PREVENIR,PRENOMP_A_PREVENIR,TELP_A_PREVENIR,TEL,TYPEPATIENT,ADRESSE) values (15016,'lucy','morgan','F','14/02/2000','M','assuuu','code1','lola','liv',7510,4568,'controle','vvvv');
Insert into EYA.PATIENTS (ID,NOM,PRENOM,SEXE,DATE_NAISSANCE,SITUATION_FAMILLIALE,ASSURANCE_MEDICAL,CODE_ASSURANCE,NOMP_A_PREVENIR,PRENOMP_A_PREVENIR,TELP_A_PREVENIR,TEL,TYPEPATIENT,ADRESSE) values (161217,'lexi','luther','f','25/10/1995','cc','aaaa','codeAsuu',null,null,0,65478,'cc',null);
Insert into EYA.PATIENTS (ID,NOM,PRENOM,SEXE,DATE_NAISSANCE,SITUATION_FAMILLIALE,ASSURANCE_MEDICAL,CODE_ASSURANCE,NOMP_A_PREVENIR,PRENOMP_A_PREVENIR,TELP_A_PREVENIR,TEL,TYPEPATIENT,ADRESSE) values (665,'kate','gbwsd',null,null,null,null,null,null,null,0,0,null,null);
Insert into EYA.PATIENTS (ID,NOM,PRENOM,SEXE,DATE_NAISSANCE,SITUATION_FAMILLIALE,ASSURANCE_MEDICAL,CODE_ASSURANCE,NOMP_A_PREVENIR,PRENOMP_A_PREVENIR,TELP_A_PREVENIR,TEL,TYPEPATIENT,ADRESSE) values (664,'kate',null,null,null,null,null,null,null,null,0,0,null,null);
REM INSERTING into EYA.CATEGORIES
SET DEFINE OFF;
REM INSERTING into EYA.MEDECIN
SET DEFINE OFF;
REM INSERTING into EYA.CHAMBRES
SET DEFINE OFF;
REM INSERTING into EYA.ELEMENT
SET DEFINE OFF;
REM INSERTING into EYA.SERVICE
SET DEFINE OFF;
--------------------------------------------------------
--  DDL for Index FACTURES_COMMANDES_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."FACTURES_COMMANDES_PK" ON "EYA"."FCTCMN" ("IDFC") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index RENDEZVOUS_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."RENDEZVOUS_PK" ON "EYA"."RDV" ("CODERDV") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index MENUU_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."MENUU_PK" ON "EYA"."MENU" ("ID_MENU") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index APPAREILS_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."APPAREILS_PK" ON "EYA"."APPAREILS" ("NUMSERIE") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index PATIENT_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."PATIENT_PK" ON "EYA"."PATIENTS" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index CATEGORIES_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."CATEGORIES_PK" ON "EYA"."CATEGORIES" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index MEDECIN_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."MEDECIN_PK" ON "EYA"."MEDECIN" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index CHAMBRES_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."CHAMBRES_PK" ON "EYA"."CHAMBRES" ("NUMCHAMBRE") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index MENU_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."MENU_PK" ON "EYA"."ELEMENT" ("ID_ELEMENT") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index SERVICE_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "EYA"."SERVICE_PK" ON "EYA"."SERVICE" ("IDS") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Constraints for Table FCTCMN
--------------------------------------------------------

  ALTER TABLE "EYA"."FCTCMN" ADD CONSTRAINT "FACTURES_COMMANDES_PK" PRIMARY KEY ("IDFC")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "EYA"."FCTCMN" MODIFY ("IDFC" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table RDV
--------------------------------------------------------

  ALTER TABLE "EYA"."RDV" ADD CONSTRAINT "RDV_PK" PRIMARY KEY ("CODERDV")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "EYA"."RDV" MODIFY ("CODERDV" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table MENU
--------------------------------------------------------

  ALTER TABLE "EYA"."MENU" ADD CONSTRAINT "MENUU_PK" PRIMARY KEY ("ID_MENU")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "EYA"."MENU" MODIFY ("ID_MENU" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table APPAREILS
--------------------------------------------------------

  ALTER TABLE "EYA"."APPAREILS" ADD CONSTRAINT "APPAREILS_PK" PRIMARY KEY ("NUMSERIE")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "EYA"."APPAREILS" MODIFY ("NUMSERIE" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table PATIENTS
--------------------------------------------------------

  ALTER TABLE "EYA"."PATIENTS" ADD CONSTRAINT "PATIENT_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "EYA"."PATIENTS" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table CATEGORIES
--------------------------------------------------------

  ALTER TABLE "EYA"."CATEGORIES" ADD CONSTRAINT "CATEGORIES_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "EYA"."CATEGORIES" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table MEDECIN
--------------------------------------------------------

  ALTER TABLE "EYA"."MEDECIN" ADD CONSTRAINT "MEDECIN_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
--------------------------------------------------------
--  Constraints for Table CHAMBRES
--------------------------------------------------------

  ALTER TABLE "EYA"."CHAMBRES" ADD CONSTRAINT "CHAMBRES_PK" PRIMARY KEY ("NUMCHAMBRE")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "EYA"."CHAMBRES" MODIFY ("NBLITS" NOT NULL ENABLE);
  ALTER TABLE "EYA"."CHAMBRES" MODIFY ("NUMETAGE" NOT NULL ENABLE);
  ALTER TABLE "EYA"."CHAMBRES" MODIFY ("NUMCHAMBRE" NOT NULL ENABLE);
  ALTER TABLE "EYA"."CHAMBRES" MODIFY ("ELEMENTSMANQUANTS" NOT NULL ENABLE);
  ALTER TABLE "EYA"."CHAMBRES" MODIFY ("ETATC" NOT NULL ENABLE);
  ALTER TABLE "EYA"."CHAMBRES" MODIFY ("TYPEC" NOT NULL ENABLE);
  ALTER TABLE "EYA"."CHAMBRES" MODIFY ("NOMDEPARTEMENT" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table ELEMENT
--------------------------------------------------------

  ALTER TABLE "EYA"."ELEMENT" ADD CONSTRAINT "MENU_PK" PRIMARY KEY ("ID_ELEMENT")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "EYA"."ELEMENT" MODIFY ("ID_ELEMENT" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table SERVICE
--------------------------------------------------------

  ALTER TABLE "EYA"."SERVICE" ADD CONSTRAINT "SERVICE_PK" PRIMARY KEY ("IDS")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;