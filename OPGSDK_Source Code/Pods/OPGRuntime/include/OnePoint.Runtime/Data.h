//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Player/Web/WebControls/Data.java
//
//  Created by ashchauhan on 3/11/14.
//

//#ifndef _OnePointPlayerWebWebControlsData_H_
//#define _OnePointPlayerWebWebControlsData_H_

#import "QueryManager.h"
#import "IResponse.h"
#import "IControl.h"
#import "Literal.h"
#import "QuestionError.h"
#import "Control.h"
#import "QuestionLabel.h"
#import "QuestionControl.h"
#import "QuestionElementType.h"
@interface Data :Control<NSObject> {
    id<IQuestion> __Question;
      QuestionElementType QuestionElement;
    int __Index;
}
@property (nonatomic, assign) int myInt;
- (id)initWithIControl:(id<IControl>)parent
      withQueryManager:(QueryManager *)arguments;
-(id)initWithIControl:(id<IControl>)parent
     withQueryManager:(QueryManager *)arguments withIControl:(id<IControl>)insertControl;
-(void)analyzeQuestion:(QueryManager*)arguments withIControl:(id<IControl>)insertControl;
- (void)render:(id<IResponse>)response;
-(id)initWithIControl:(id<IControl>)parent
     withQueryManager:(QueryManager *)arguments withIQuestion:(id<IQuestion>)question withIndex:(int)index;
- (void)buildControls:(id<IControl>)parent withQueryManager:(QueryManager*)arguments withIndex:(int)index;
- (void)addLiteralWithIControl:(id<IControl>)parent
                                     withNSString:(NSString *)literal;
- (void)buildControls;
-(int) getIndex;
-(void) setIndex:(int)value;
-(id<IQuestion>) getQuestion;
-(void) setQuestion:(id<IQuestion>)value;
-(QuestionElementType) getQuestionElement;
-(void) setQuestionElement:(QuestionElementType)questionElement;
@end

//#endif // _OnePointPlayerWebWebControlsData_H_

