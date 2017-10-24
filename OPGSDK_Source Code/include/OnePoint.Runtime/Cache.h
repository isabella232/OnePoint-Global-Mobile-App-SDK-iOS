//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/Cache.java
//
//  Created by ashchauhan on 6/20/14.
//

#import <Foundation/Foundation.h>



#import "Handler.h"
#import "ISavePoint.h"
#import "ZipWriteStream.h"

@interface Cache : NSObject {
   id<ISavePoint> __SavePoint_;
    NSMutableData *__SerializedHandler,*__SerializedExecutor_,*__SerializedInterview;
    Handler *handler;
}

- (id)initWithISavePoint:(id<ISavePoint>)savePoint withHandler:(Handler*)handler;
- (NSMutableData *)getSerializedHandler;
- (void)setSerializedHandler:(NSMutableData *)value;
- (NSMutableData *)getSerializedExecutor;
- (void)setSerializedExecutor:(NSMutableData *)value;
-(NSMutableData *)getSerializedInterview;
-(void)setSerializedInterview:(NSMutableData*)value;
- (id<ISavePoint>)getSavePoint;
- (void)setSavePoint:(id<ISavePoint>)value;
- (void)restore:(id)handler;
-(void)save:(BOOL)summary;
- (void)dispose;
-(void)load;
+(NSString *)getCacheName:(Interview *)interview;
+(NSString *)showContents:(Interview *)interview;
+(BOOL)terminateSurvey:(Interview *)interview;
+(NSString *)checkForCache:(long)surveyId withPanel:(long)panelId withPanelist:(long)panellistId;
+(BOOL)restoreFromCache:(Interview *)interview;
+(void)restoreQuestionDetails:(ScriptReader *)reader withIQuestion:(id<IQuestion>)question;
@end

