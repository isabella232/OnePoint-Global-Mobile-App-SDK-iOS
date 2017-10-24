//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/Interview.java
//
//  Created by ashchauhan on 6/20/14.
//



#import "Questions.h"
#import "IDefaultStyles.h"
#import "IInterviewInfo.h"
#import "IInterviewSampleField.h"
#import "ILabel.h"
#import "ILabels.h"
#import "INavigations.h"
#import "INextPage.h"
#import "IProperties.h"
#import "IQuestion.h"
#import "IQuestions.h"
#import "ISavePoints.h"
#import "IStandardTexts.h"
#import "InterviewAction.h"
#import "TerminateStatus.h"
#import "IInterview.h"
#import "InterviewStatus.h"
@class SavePointTracker;
@class Handler;

@interface  Interview : NSObject<IInterview> {
  BOOL _autoselectother;
  NSString *_bannertemplate;
  id<ILabels> _banners;
  Handler *_handler;
  NSString *_context;
  id<IDefaultStyles> _defaultstyles;
  Questions *_define;
  NSString *_errortemplate;
  id<ILabels> _errors;
  GlobalQuestionPositions _globalquestionposition;
  id<IQuestions> _globalquestions;
  NSString *_gridtemplate;
  id<IInterviewInfo> _info;
  InterviewStatus _interviewstatus;
  NSString *_labeltype;
  NSString *_language;
  NSString *_layouttemplate;
  long long int _locale;
  id _mdm;
  id _messagesdocument;
  BOOL _mustanswer;
  NSString *_navbartemplate;
  id<INavigations> _navigations;
  id<INextPage> _nextpage;
  id<IObjects> _objects;
  OffPathDataModes _offpathdatamode;
  id<IQuestions> _pages;
  NSString *_projectname;
  id<IProperties> _properties;
  NSString *_questiontemplate;
  id<IQuestions> _questions;
  id _quotaengine;
  NSString *_routingcontext;
  id<IInterviewSampleRecord> _samplerecord;
  id<ISavePoints> _savepoints;
  NSString *_sessiontoken;
  id<IStandardTexts> _texts;
  id<ILabel> _title;
  NSString *_version;
    InterviewAction _interviewaction;
    id<IProperties> _systemvariables;
    SavePointTracker *_tracker;
    long long signal;
}

- (id)init;
-(id)initWithSerializationInfo:(id)info withStreamingContext:(id)context;
- (id)initWithNSString:(NSString *)sessionId withIInterviewInfo:(id<IInterviewInfo>)info;
- (id)initWithIDefaultStyles:(id<IDefaultStyles>)defaultStyles withILabels:(id<ILabels>)errors withIQuestions:(id<IQuestions>)globalQuestions withIInterviewInfo:(id<IInterviewInfo>)info withId:(InterviewStatus)interviewStatus
    withId:(id)mdm withId:(id)messagesDocument withINavigations:(id<INavigations>)navigations
    withINextPage:(id<INextPage>)nextPage withIObjects:(id<IObjects>)objects withIQuestions:(id<IQuestions>)pages
    withNSString:(NSString *)projectName withIProperties:(id<IProperties>)properties withIQuestions:(id<IQuestions>)questions withId:(id)quotaEngine withNSString:(NSString *)routingContext withIInterviewSampleRecord:(id<IInterviewSampleRecord>)sampleRecord withISavePoints:(id<ISavePoints>)savePoints withNSString:(NSString *)sessionToken withIStandardTexts:(id<IStandardTexts>)texts
        withILabel:(id<ILabel>)title withNSString:(NSString *)version_;
- (BOOL)getAutoSelectOther;
- (void)setAutoSelectOther:(BOOL)value;
- (NSString *)getBannerTemplate;
- (void)setBannerTemplate:(NSString *)value;
- (id<ILabels>)getBanners;
- (void)setBanners:(id<ILabels>)value;
- (Handler*)getHandler;
- (void)setHandler:(Handler*)value;
- (NSString *)getContext;
- (void)setContext:(NSString *)value;
- (id<IDefaultStyles>)getDefaultStyles;
- (void)setDefaultStyles:(id<IDefaultStyles>)value;
- (Questions *)getDefine;
- (void)setDefine:(Questions *)value;
- (NSString *)getErrorTemplate;
- (void)setErrorTemplate:(NSString *)value;
- (id<ILabels>)getErrors;
- (void)setErrors:(id<ILabels>)value;
- (GlobalQuestionPositions)getGlobalQuestionPosition;
- (void)setGlobalQuestionPosition:(GlobalQuestionPositions)value;
- (id<IQuestions>)getGlobalQuestions;
- (void)setGlobalQuestions:(id<IQuestions>)value;
- (NSString *)getGridTemplate;
- (void)setGridTemplate:(NSString *)value;
- (id<IInterviewInfo>)getInfo;
- (void)setInfo:(id<IInterviewInfo>)value;
- (InterviewStatus)getInterviewStatus;
- (void)setInterviewStatus:(InterviewStatus)value;
- (NSString *)getLabelType;
- (void)setLabelType:(NSString *)value;
- (NSString *)getlanguage;
- (void)setlanguage:(NSString *)value;
- (NSString *)getLayoutTemplate;
- (void)setLayoutTemplate:(NSString *)value;
- (long long int)getLocale;
- (void)setLocale:(long long int)value;
- (id)getMDM;
- (void)setMDM:(id)value;
- (id)getMessagesDocument;
- (void)setMessagesDocument:(id)value;
- (BOOL)getMustAnswer;
- (void)setMustAnswer:(BOOL)value;
- (NSString *)getNavBarTemplate;
- (void)setNavBarTemplate:(NSString *)value;
- (id<INavigations>)getNavigations;
- (void)setNavigations:(id<INavigations>)value;
- (id<INextPage>)getNextPage;
- (void)setNextPage:(id<INextPage>)value;
- (id<IObjects>)getObjects;
- (void)setObjects:(id<IObjects>)value;
- (OffPathDataModes)getOffPathDataMode;
- (void)setOffPathDataMode:(OffPathDataModes)value;
- (id<IQuestions>)getPages;
- (void)setPages:(id<IQuestions>)value;
- (NSString *)getProjectName;
- (void)setProjectName:(NSString *)value;
- (id<IProperties>)getProperties;
- (void)setProperties:(id<IProperties>)value;
- (NSString *)getQuestionTemplate;
- (void)setQuestionTemplate:(NSString *)value;
- (id<IQuestions>)getQuestions;
- (void)setQuestions:(id<IQuestions>)value;
- (id)getQuotaEngine;
- (void)setQuotaEngine:(id)value;
- (NSString *)getRoutingContext;
- (void)setRoutingContext:(NSString *)value;
- (id<IInterviewSampleRecord>)getSampleRecord;
- (void)setSampleRecord:(id<IInterviewSampleRecord>)value;
- (id<ISavePoints>)getSavePoints;
- (void)setSavePoints:(id<ISavePoints>)value;
- (NSString *)getSessionToken;
- (void)setSessionToken:(NSString *)value;
- (id<IStandardTexts>)getTexts;
- (void)setTexts:(id<IStandardTexts>)value;
- (id<ILabel>)getTitle;
- (void)setTitle:(id<ILabel>)value;
- (NSString *)getVersion;
- (void)setVersion:(NSString *)value;
+ (Interview *)deserialize:(NSMutableArray *)byteStream;
- (void) setstatus:(InterviewStatus) status;
- (void)terminate:(NSNumber *)signal_ :(BOOL)writeData :(TerminateStatusEnm)status;
- (void)initialize__WithId:(id)json;
- (void)complete;
- (void)suspend;
- (void)log:(NSString *)message withId:(id)level;
- (void)snapForward;
- (void)initialize__WithNSString:(NSString *)json;
- (NSMutableArray *)serialize;
- (void)standardMessages:(id<IQuestion>)standard;
-(InterviewAction) getAction ;
-(void) setAction:(InterviewAction) value ;
-(void)createSystemVariables;
-(SavePointTracker*) getTracker ;
-(void) setTracker:(SavePointTracker*) value ;
- (id<IProperties>)getSystemVariables;
- (void)setSystemVariables:(id<IProperties>)value ;
@end
