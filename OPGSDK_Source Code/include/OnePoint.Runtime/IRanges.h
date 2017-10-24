//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nitin/Framework/Logger/ConvertCode/OnePoint/Runtime/Common/MDM/IRanges.java
//
//  Created by nitin on 1/15/14.
//


@protocol IRange;

@protocol IRanges < NSObject >
- (void)addWithLong:(long long int)lowerBound
           withLong:(long long int)upperBound
             withId:(id)index;
- (void)removeWithId:(id)index;
- (long long int)getCount;
- (NSString *)getRangeExpression;
- (void)setRangeExpressionWithNSString:(NSString *)value;
- (id<IRange>)itemWithId:(id)index;
- (long long int)lowerboundWithId:(id)index;
- (long long int)upperboundWithId:(id)index;
@end

// _OnePointRuntimeCommonMDMIRanges_H_
