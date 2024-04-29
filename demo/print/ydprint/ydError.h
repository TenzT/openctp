#ifndef YD_ERROR_H
#define YD_ERROR_H

/// error numbers generated by ydServer or ydAPI
const int YD_ERROR_NoError=0;
const int YD_ERROR_NoPositionToClose=1;
const int YD_ERROR_NoMoneyToOpen=2;
const int YD_ERROR_SystemNotReady=3;
const int YD_ERROR_InvalidInstrument=4;
const int YD_ERROR_InvalidAccount=5;
const int YD_ERROR_OrderFieldError=6;
const int YD_ERROR_MemoryExceed=7;
const int YD_ERROR_NoTradingCodeInExchange=8;
const int YD_ERROR_CanNotSendToExchange=9;
const int YD_ERROR_NoTradingRight=10;
const int YD_ERROR_InvalidOrderVolume=11;
const int YD_ERROR_InvalidClientAPP=12;
const int YD_ERROR_PositionLimitExceed=13;
const int YD_ERROR_TradeVolumeExceed=14;
const int YD_ERROR_OrderCancelLimitExceed=15;
const int YD_ERROR_OrderOpenLimitExceed=16;
const int YD_ERROR_InvalidConnectionID=17;
const int YD_ERROR_AlreadyLogined=18;
const int YD_ERROR_PasswordError=19;
const int YD_ERROR_TooManyRequests=20;
const int YD_ERROR_InvalidUsername=21;
const int YD_ERROR_UsernameMismatch=22;
const int YD_ERROR_OldPasswordMismatch=23;
const int YD_ERROR_AccountRequestTooFast=24;
const int YD_ERROR_PossibleSelfTrade=25;
const int YD_ERROR_NoAdminRight=26;
const int YD_ERROR_InvalidAddress=27;
const int YD_ERROR_OrderTypeNotSupported=28;
const int YD_ERROR_CancelOrderFieldError=29;
const int YD_ERROR_InvalidExchange=30;
const int YD_ERROR_OrderNotFound=31;
const int YD_ERROR_OrderNotBelongToAccount=32;
const int YD_ERROR_OrderFinished=33;
const int YD_ERROR_OnlyLimitOrderCanBeCanceled=34;
const int YD_ERROR_ClientReportError=35;
const int YD_ERROR_TooManyOrders=36;
const int YD_ERROR_InstrumentCanNotTrade=37;
const int YD_ERROR_YDOrderFlagNotSupported=38;
const int YD_ERROR_NotOptionInstrument=39;
const int YD_ERROR_PriceOutOfLimit=40;
const int YD_ERROR_CrossPriceInQuote=41;
const int YD_ERROR_QuoteFieldError=42;
const int YD_ERROR_QuoteVolumeError=43;
const int YD_ERROR_QuoteNotFound=44;
const int YD_ERROR_CancelQuoteFieldError=45;
const int YD_ERROR_QuoteNotBelongToAccount=46;
const int YD_ERROR_QuoteFinished=47;
const int YD_ERROR_QuoteNotSupported=48;
const int YD_ERROR_CannotCancelQuoteDerivedOrder=49;
const int YD_ERROR_TooManyLogines=50;
const int YD_ERROR_NoEnoughPositiontoMakeCombPosition=51;
const int YD_ERROR_NoEnoughCombPosition=52;
const int YD_ERROR_NoMoneyForSplitCombPosition=53;
const int YD_ERROR_InvalidCombPosition=54;
const int YD_ERROR_CannotSelectConnection=55;
const int YD_ERROR_SelectConnectionTooFrequently=56;
const int YD_ERROR_InvalidSelectConnection=57;
const int YD_ERROR_TooLowApiVersion=58;
const int YD_ERROR_InvalidTradingRight=59;
const int YD_ERROR_InvalidProduct=60;
const int YD_ERROR_InvalidAlterMoneyField=61;
const int YD_ERROR_TooHighApiVersion=62;
const int YD_ERROR_MoneyUsageTooLow=63;
const int YD_ERROR_InvalidInstrumentPairToExecuteTogether=64;
const int YD_ERROR_NotOnExpireDay=65;
const int YD_ERROR_NotProperTime=66;
const int YD_ERROR_OptonLongPositionCostLimitExceed=67;
const int YD_ERROR_PriceToTriggerFuse=68;
const int YD_ERROR_ExchangeDoesNotSupport=69;
const int YD_ERROR_NotCashInstrument=70;
const int YD_ERROR_NoEnoughPositiontoFreeze=71;
const int YD_ERROR_NoEnoughPositiontoUnfreeze=72;
const int YD_ERROR_CannotCoverLongPosition=73;
const int YD_ERROR_NotEnoughSpotPositionForCover=74;
const int YD_ERROR_NotEnoughPositionForCoverOrder=75;
const int YD_ERROR_NotEnoughMoneyForCoverOrder=76;
const int YD_ERROR_NotEnoughSpotPositionForExec=77;
const int YD_ERROR_InvalidOrderRef=78;
const int YD_ERROR_CanNotSendToExchangeForFlowControl=79;
const int YD_ERROR_ExchangeConnectionSendError=80;
const int YD_ERROR_InternalRejected=81;
const int YD_ERROR_CannotSetTradingRight=82;
const int YD_ERROR_InvalidGroupOrderRef=83;
const int YD_ERROR_InvalidOrderGroupID=84;
const int YD_ERROR_NoLogin=85;
const int YD_ERROR_InvalidAccountMarginModelInfoField=86;
const int YD_ERROR_AccountNotUsingThisMarginModel=87;
const int YD_ERROR_CannotUseCombPositionInThisMarginModel=88;
const int YD_ERROR_TooManyCancels=89;
const int YD_ERROR_MessageCountExceed=90;
const int YD_ERROR_DirectionOffsetFlagMismatchInOrder=91;
const int YD_ERROR_PriceTickError=92;
const int YD_ERROR_InstrumentTradingPaused=93;
const int YD_ERROR_NotQualifiedInvestor=94;
const int YD_ERROR_NotTradableProduct=95;
const int YD_ERROR_HoldingLimitExceed=96;
const int YD_ERROR_CashBuyVolumeLimitExceed=97;
const int YD_ERROR_CannotUpdateHoldingExternalFrozen=98;
const int YD_ERROR_PasswordNotSet=99;

const int YD_ERROR_NeedIgnore=499;

/// error numbers generated by ydAPI
const int YD_ERROR_CannotSend=500;
const int YD_ERROR_TooManyInMultiOrders=501;

/// error numbers generated by exchanges
const int YD_ERROR_ExchangeReportError=1000;

#endif
