//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/ICellStyle.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _ICellStyle_H_
//#define _ICellStyle_H_

#import <Foundation/Foundation.h>
#import "BorderStyles.h"

@protocol ICellStyle < NSObject>
- (NSString *)getBgColor;
- (void)setBgColor:(NSString *)value;
- (NSString *)getBorderBottomColor;
- (void)setBorderBottomColor:(NSString *)value;
- (BorderStylesEnum)getBorderBottomStyle;
- (void)setBorderBottomStyle:(BorderStylesEnum)value;
- (long)getBorderBottomWidth;
- (void)setBorderBottomWidth:(long)value;
- (NSString *)getbordercolor;
- (void)setbordercolor:(NSString *)value;
- (NSString *)getBorderLeftColor;
- (void)setBorderLeftColor:(NSString *)value;
- (BorderStylesEnum)getBorderLeftStyle;
- (void)setBorderLeftStyle:(BorderStylesEnum)value;
- (long)getBorderLeftWidth;
- (void)setBorderLeftWidth:(long)value;
- (NSString *)getBorderRightColor;
- (void)setBorderRightColor:(NSString *)value;
- (BorderStylesEnum)getBorderRightStyle;
- (void)setBorderRightStyle:(BorderStylesEnum)value;
- (long)getBorderRightWidth;
- (void)setBorderRightWidth:(long)value;
- (BorderStylesEnum)getBorderStyle;
- (void)setBorderStyle:(BorderStylesEnum)value;
- (NSString *)getBorderTopColor;
- (void)setBorderTopColor:(NSString *)value;
- (BorderStylesEnum)getBorderTopStyle;
- (void)setBorderTopStyle:(BorderStylesEnum)value;
- (long)getBorderTopWidth;
- (void)setBorderTopWidth:(long)value;
- (long)getBorderWidth;
- (void)setBorderWidth:(long)value;
- (long)getColspan;
- (void)setColspan:(long)value;
- (NSString *)getHeight;
- (void)setHeight:(NSString *)value;
- (long)getPadding;
- (void)setPadding:(long)value;
- (long)getPaddingBottom;
- (void)setPaddingBottom:(long)value;
- (long)getPaddingLeft;
- (void)setPaddingLeft:(long)value;
- (long)getPaddingRight;
- (void)setPaddingRight:(long)value;
- (long)getPaddingtop;
- (void)setPaddingtop:(long)value;
- (long)getRepeatHeader;
- (void)setRepeatHeader:(long)value;
- (long)getRepeatSideHeader;
- (void)setRepeatSideHeader:(long)value;
- (long)getRowspan;
- (void)setRowspan:(long)value;
- (NSString *)getWidth;
- (void)setWidth:(NSString *)value;
- (BOOL)getWrap;
- (void)setWrap:(BOOL)value;
- (BOOL)getIsEmpty;
@end