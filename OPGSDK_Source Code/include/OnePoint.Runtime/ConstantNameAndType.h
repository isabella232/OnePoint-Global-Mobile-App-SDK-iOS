//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/VirtualMachine/Core/ConstantNameAndType.java
//
//  Created by chinthan on 12/2/13.
//


#import "Constant.h"

@interface ConstantNameAndType : Constant {
 @public
  NSMutableArray *__Constants_;
  short int __DescriptorIndex_;
  short int __NameIndex_;
}

- (NSMutableArray *)getConstants;
- (void)setConstantsWithConstantArray:(NSMutableArray *)value;
- (id)initWithShort:(short int)name
          withShort:(short int)descriptor;
- (id)initWithShort:(short int)name
          withShort:(short int)descriptor
withConstantArray:(NSMutableArray *)consts;
- (short int)getDescriptorIndex;
- (void)setDescriptorIndexWithShort:(short int)value;
- (NSString *)getName;
- (short int)getNameIndex;
- (void)setNameIndexWithShort:(short int)value;
- (NSString *)description;
@end


