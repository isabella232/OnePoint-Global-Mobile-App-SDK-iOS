//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/VirtualMachine/Core/Constant.java
//
//  Created by chinthan on 12/2/13.
//

#ifndef _Constant_H_
#define _Constant_H_



#define Constant_ConstantClass 7
#define Constant_ConstantDouble 6
#define Constant_ConstantFieldref 9
#define Constant_ConstantFloat 4
#define Constant_ConstantInteger 3
#define Constant_ConstantInterfaceMethodref 11
#define Constant_ConstantLong 5
#define Constant_ConstantMethodref 10
#define Constant_ConstantNameAndType 12
#define Constant_ConstantString 8
#define Constant_ConstantUtf8 1

@interface Constant : NSObject {
 @public
  Byte __Tag_;
}

+ (char)ConstantClass;
+ (char)ConstantDouble;
+ (char)ConstantFieldref;
+ (char)ConstantFloat;
+ (char)ConstantInteger;
+ (char)ConstantInterfaceMethodref;
+ (char)ConstantLong;
+ (char)ConstantMethodref;
+ (char)ConstantNameAndType;
+ (char)ConstantString;
+ (char)ConstantUtf8;
- (id)initWithByte:(char)tag;
- (char)getTag;
- (void)setTagWithByte:(char)value;
@end

#endif // _Constant_H_
