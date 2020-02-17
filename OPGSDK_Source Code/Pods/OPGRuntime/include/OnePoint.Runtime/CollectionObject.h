//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nitin/Framework/Logger/ConvertCode/OnePoint/Runtime/Common/Helpers/CollectionObject.java
//
//  Created by nitin on 1/15/14.
//


#import "ReadOnlyCollectionObject.h"
#import "OrderConstants.h"
#import "SortOrder.h"
#import "ICollectionObject.h"
@interface CollectionObject :NSObject<ICollectionObject> {
    NSMutableArray *_list;
    NSMutableDictionary *_collection;
    NSMutableArray *_collectionlist;
     NSMutableDictionary *sortedcollection;
    SortOrder _order;
    int _pointer;
    BOOL _modified;
    NSUserDefaults *_userdefaults;
}
@property(nonatomic,strong) NSMutableArray *list;
@property(nonatomic,strong) NSMutableDictionary *collection;
@property(nonatomic,strong) NSMutableDictionary *sortedCollection;

- (void)addWithId:(id)key
           withId:(id)value;
- (void)addWithId:(id)key
           withId:(id)value
          withInt:(int)index;
- (id)itemWithId:(id)index;
- (void)removeWithInt:(int)index;
- (void)removeWithId:(id)key;
-(void)setOrder:(SortOrder)value;
-(SortOrder)getOrder;
- (id)init;
-(void)set___idx:(id)key withId:(id)value;
-(void) set___idxWithId:(id)key value:(id)value;
-(id)get___idxxx:(id) key;
-(id)get___idxWithId:(id)key ;
-(id)get___idxwithint:(NSNumber *)key ;
-(void) set___idxWithInt:(int)key value:(id)value;
-(BOOL) getModified;

-(void) setModified:(BOOL) value;
-(void)getObjectData;
-(NSArray*)getList;
-(void)sortList;
-(void) setList:(NSMutableArray*)value;
-(int)getCount;

//public int getCount() throws Exception {
//    return this.list.size();
//}
@end

// _CollectionObject_H_

