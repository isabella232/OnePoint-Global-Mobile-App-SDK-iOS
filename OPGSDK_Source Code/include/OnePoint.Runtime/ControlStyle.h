//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/ControlStyle.java
//
//  Created by ashchauhan on 6/20/14.
//


#import "ControlTypes.h"
#import "IControlStyle.h"

@interface ControlStyle : NSObject<IControlStyle> {
 @public
  NSString *accelerator_;
  BOOL readOnly_;
  ControlTypes type_;
  BOOL __IsEmpty_;
  NSString *_typename;

}

- (id)init;
- (id)initWithControlTypes:(ControlTypes)controlType;
- (NSString *)getAccelerator;
- (void)setAccelerator:(NSString *)value;
- (BOOL)getIsEmpty;
- (void)setIsEmpty:(BOOL)value;
- (BOOL)getReadOnly;
- (void)setReadOnly:(BOOL)value;
- (ControlTypes)getType;
- (void)setType:(ControlTypes)value;

@end
