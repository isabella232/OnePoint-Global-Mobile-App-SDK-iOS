//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Player/Xml/Intermediate/XmlIntermediate.java
//
//  Created by ashchauhan on 3/21/14.
//


@protocol NavButtonType;
@class XmlIntermediateLabel;
@class XmlIntermediateNavigation;
@class XmlInterPage;

@class XmlPage;
@protocol IApplication;
#import "GDataXMLNode.h"
#import "NavButtonType.h"
#import "XmlInterPage.h"
#import "Container.h"
@interface XmlIntermediate : NSObject {
 @public
  XmlIntermediateLabel *__Label_;
  XmlIntermediateNavigation *__Navigation_;
  XmlInterPage *__Page_;
  GDataXMLNode *__Question_;
  XmlPage *__XmlPage_;
  XmlIntermediateLabel *__Error;
    NSString *xslBanner;
    NSString *xslQuestion;
    NSString *xslForm;
    NSString *xslFormV2;
    NSString *xslLabel;
    NSString *xslProgressBar;
    NSString *xslHiddenFields;
    NSString *xslNavigation;
    NSDictionary *htmlDictionary;
    id<IApplication> _application;
}

-(id)initWithContainerResources:(Container *) resources;
- (id)initWithIApplication:(id<IApplication>)application
                                  withQuestion:(id<IQuestion>)question;
- (void)setXmlIntermediateLabel:(XmlIntermediateLabel *)value;
-(XmlIntermediateLabel*)getXmlIntermediateLabel;
- (void)setNavigation:(XmlIntermediateNavigation *)value;
- (XmlIntermediateNavigation *)getNavigation;
- (XmlInterPage *)getPage;
- (void)setPage:(XmlInterPage *)value;
//- (void)setQuestion:(XmlIntermediateQuestion *)value;
-(GDataXMLNode*)getQuestions;
- (XmlPage*)getXmlPage;
- (void)setXmlPage:(XmlPage *)value;
- (NSString *)getHiddenFields;
- (GDataXMLNode*)getForm;
-(NSString*)GetNavigationString;
-(XmlIntermediateLabel*)getLabel;
-(NSString*)GetErrorString;
-(NSString*)GetLabelString;
- (NSString *)GetQuestionString;
- (void)setError:(XmlIntermediateLabel *)value;
-(XmlIntermediateLabel*)getError;
- (NSString *)GetNavigationString:(NavButtonType)navType withEnabled:(NSString*)enabled withDisabled:(NSString*)disabled;
//- (NSString *)GetNavigationString:(NavButtonType)navType;

-(GDataXMLNode*)getBanners;
- (NSMutableArray*)getBannersStrings;
- (GDataXMLNode*)translateToXml:(NSString *)intermediate
                    withTemplate:(NSString *)template_
                    withElementId:(NSString *)elementId
                    withClassId:(NSString *)classId;
- (NSString *)translateXml:(NSString *)intermediate
                          withTemplate:(NSString *)template_
                          withElementId:(NSString *)elementId
                          withClassId:(NSString *)classId;
- (NSString *)translateXml:(NSString *)intermediate
              withTemplate:(NSString *)template_;
- (GDataXMLNode*)translateToXml:(NSString *)intermediate
                   withTemplate:(NSString *)template_;
-(void)setUpQuestion:(id<IApplication>)application withIQuestion:(id<IQuestion>)question withInt:(int)tableLayout withBool:(BOOL)useLabel;
-(NSString*)getProgressBar:(BOOL)showBar withCount:(BOOL)showCount withBgColor:(NSString*)backgroundColor withPercentage:(NSString*)percentage withLabel:(NSString*)label withAction:(NSString*)action;
//-(NSString*)getProgressBar:(NSString*)backgroundColor withPercentage:(NSString*)percentage withLabel:(NSString*)label withAction:(NSString*)action;
//-(NSString*)getProgressBar:(NSString*)backgroundColor withPercentage:(NSString*)percentage withLabel:(NSString*)label;
-(NSString*) getBanner:(NSString*)name;
-(NSString*)getBannerWithIndex:(int)index;
-(NSMutableDictionary*)getBannersReturnDictionary;
-(NSString*)getBanner:(GDataXMLNode*)node withNSString:(NSString*)name;
-(NSMutableArray*)getQuestionBanners:(int)index withNSString:(NSString*)name;
-(NSMutableArray*)getQuestionBanners;
-(NSString*)getQuestion:(NSArray*)questionArray;
-(NSString*)getQuestionControl:(NSArray*)questionArray;
-(NSString*)getError:(int)index;
-(NSString*)getLabel:(int)index;
//-(void)setUpQuestion:(id<IApplication>)application withIQuestion:(id<IQuestion>)question;
-(NSString*)getFormString;
-(NSString*)getFormString:(NSString*)name;
- (NSString *)getNavigation:(NSString*)name;
-(NSString*)getQuestionBanner:(NSString*)name;
-(NSString*)GetErrorString:(NSString*)name;
-(NSString*)GetLabelString:(NSString*)name;
-(NSString*)GetQuestionString:(NSString*)name;

@end
