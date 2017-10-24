//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/Categories.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _Categories_H_
//#define _Categories_H_

#import "ICategories.h"

#import "OrderConstants.h"
#import "CollectionObject.h"
@class Variant;
@protocol ICategory;
@protocol IQuestion;

@interface Categories : CollectionObject<ICategories> {
 @public
  int __CountWithoutOthers_;
  OrderConstants _order1;
    SortOrder _order2;
    Variant *_filter;
    id<IQuestion> _question;
    id<ICategory> _category;
    NSMutableArray *_filterarray;
    NSMutableArray *_internalfilter;
    id _parent;
    id _defaultproperty;
    NSString *_filterstring;
}

- (id)init;
-(id)initWithId:(id)_parent;
-(id)initWithId:(id)object withNSString:(NSString*)order;
-(id)initWithId:(id)object withNSString:(NSString*)order withNSString:(NSString*)categories;
- (id<ICategory>)get___idx:(int)index;
- (void)set___idx:(int)index withICategory:(id<ICategory>)value;
- (id)get___idxWithNSString:(NSString *)searchKey;
- (void)set___idxWithNSString:(NSString *)searchKey withICategory:(id<ICategory>)value;
-(id<ICategory>)get___idxwithid:(id)searchKey;
-(void)set___idxwithid:(id)searchKey withValue:(id<ICategory>)value;
- (id)initWithNSString:(NSString *)order;
- (int)getCountWithoutOthers;
- (void)setCountWithoutOthers:(int)value;
- (void)add:(NSString *)key withICategory:(id<ICategory>)value;
- (void)copy:(id<ICategories>)value;
- (NSString *)description;
- (BOOL)containsKey:(NSString *)key;
-(void)setOrderConstants:(OrderConstants)value;
-(OrderConstants)getOrderConstants;
-(NSArray*)getInternalFilter;
- (id)getdefaultproperty;
- (void)setdefaultproperty:(id)value;
@end


