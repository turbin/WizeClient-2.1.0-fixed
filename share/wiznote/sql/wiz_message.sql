CREATE TABLE [WIZ_MESSAGE] (
  [MESSAGE_ID] INT64 NOT NULL, 
  [BIZ_GUID] CHAR(36), 
  [KB_GUID] CHAR(36), 
  [DOCUMENT_GUID] CHAR(36), 
  [SENDER] varchar(32), 
  [SENDER_ID] varchar(128), 
  [SENDER_GUID] CHAR(36), 
  [RECEIVER] varchar(32), 
  [RECEIVER_ID] varchar(128), 
  [RECEIVER_GUID] CHAR(36), 
  [MESSAGE_TYPE] INT, 
  [READ_STATUS] INT, 
  [DT_CREATED] CHAR(19), 
  [MESSAGE_TITLE] varchar(768), 
  [MESSAGE_TEXT] varchar(1024), 
  [WIZ_VERSION] INT64,
   primary key (MESSAGE_ID)
);

