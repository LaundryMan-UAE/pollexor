//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ArrayTable.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectArrayTable_RESTRICT
#define ComGoogleCommonCollectArrayTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectArrayTable_RESTRICT
#if ComGoogleCommonCollectArrayTable_RowMap_INCLUDE
#define ComGoogleCommonCollectArrayTable_ArrayMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectArrayTable_Row_INCLUDE
#define ComGoogleCommonCollectArrayTable_ArrayMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectArrayTable_ColumnMap_INCLUDE
#define ComGoogleCommonCollectArrayTable_ArrayMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectArrayTable_Column_INCLUDE
#define ComGoogleCommonCollectArrayTable_ArrayMap_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectArrayTable_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_

@class ComGoogleCommonCollectArrayTable_CellSet;
@class ComGoogleCommonCollectArrayTable_ColumnMap;
@class ComGoogleCommonCollectArrayTable_RowMap;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectArrayTable_serialVersionUID 0LL

@interface ComGoogleCommonCollectArrayTable : NSObject < ComGoogleCommonCollectTable, JavaIoSerializable > {
}

+ (ComGoogleCommonCollectArrayTable *)createWithJavaLangIterable:(id<JavaLangIterable>)rowKeys
                                            withJavaLangIterable:(id<JavaLangIterable>)columnKeys;

+ (ComGoogleCommonCollectArrayTable *)createWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

+ (ComGoogleCommonCollectArrayTable *)createWithComGoogleCommonCollectArrayTable:(ComGoogleCommonCollectArrayTable *)table;

- (ComGoogleCommonCollectImmutableList *)rowKeyList;

- (ComGoogleCommonCollectImmutableList *)columnKeyList;

- (id)atWithInt:(jint)rowIndex
        withInt:(jint)columnIndex;

- (id)setWithInt:(jint)rowIndex
         withInt:(jint)columnIndex
          withId:(id)value;

- (IOSObjectArray *)toArrayWithIOSClass:(IOSClass *)valueClass;

- (void)clear;

- (void)eraseAll;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id)eraseWithId:(id)rowKey
           withId:(id)columnKey;

- (jint)size;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

- (id<JavaUtilSet>)cellSet;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (id<JavaUtilCollection>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> rowKeys, id<JavaLangIterable> columnKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithComGoogleCommonCollectArrayTable_(ComGoogleCommonCollectArrayTable *table);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectArrayTable, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable)
#if !defined (_ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_

@class ComGoogleCommonCollectArrayTable_ArrayMap;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_EntrySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet : ComGoogleCommonCollectMaps_EntrySet {
}

- (id<JavaUtilMap>)map;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectArrayTable_ArrayMap:(ComGoogleCommonCollectArrayTable_ArrayMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet)
#if !defined (_ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_

@class ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIndexedListIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIndexedListIterator.h"


@interface ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1 : ComGoogleCommonCollectAbstractIndexedListIterator {
}

- (id<JavaUtilMap_Entry>)getWithInt:(jint)index;

- (instancetype)initWithComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet:(ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet *)outer$
                                                                                          withInt:(jint)arg$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1)
#if !defined (_ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_$1_

@class ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1;

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"


@interface ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_$1 : ComGoogleCommonCollectAbstractMapEntry {
}

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

- (instancetype)initWithComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1:(ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1 *)outer$
                                                                                             withInt:(jint)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_ArrayMap_createEntrySet_ArrayMapEntrySet_$1_$1)
#if !defined (_ComGoogleCommonCollectArrayTable_CellSet_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_CellSet_

@class ComGoogleCommonCollectArrayTable;
@protocol JavaUtilIterator;

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "java/util/AbstractSet.h"


@interface ComGoogleCommonCollectArrayTable_CellSet : JavaUtilAbstractSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)containsWithId:(id)obj;

- (instancetype)initWithComGoogleCommonCollectArrayTable:(ComGoogleCommonCollectArrayTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_CellSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_CellSet)
#if !defined (_ComGoogleCommonCollectArrayTable_CellSet_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_CellSet_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_CellSet_$1_

@class ComGoogleCommonCollectArrayTable_CellSet;
@protocol ComGoogleCommonCollectTable_Cell;

#define ComGoogleCommonCollectAbstractIndexedListIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIndexedListIterator.h"


@interface ComGoogleCommonCollectArrayTable_CellSet_$1 : ComGoogleCommonCollectAbstractIndexedListIterator {
}

- (id<ComGoogleCommonCollectTable_Cell>)getWithInt:(jint)index;

- (instancetype)initWithComGoogleCommonCollectArrayTable_CellSet:(ComGoogleCommonCollectArrayTable_CellSet *)outer$
                                                         withInt:(jint)arg$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_CellSet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_CellSet_$1)
#if !defined (_ComGoogleCommonCollectArrayTable_CellSet_$1_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_CellSet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_CellSet_$1_$1_

@class ComGoogleCommonCollectArrayTable_CellSet_$1;

#define ComGoogleCommonCollectTables_RESTRICT 1
#define ComGoogleCommonCollectTables_AbstractCell_INCLUDE 1
#include "com/google/common/collect/Tables.h"


@interface ComGoogleCommonCollectArrayTable_CellSet_$1_$1 : ComGoogleCommonCollectTables_AbstractCell {
 @public
  jint rowIndex_;
  jint columnIndex_;
}

- (id)getRowKey;

- (id)getColumnKey;

- (id)getValue;

- (instancetype)initWithComGoogleCommonCollectArrayTable_CellSet_$1:(ComGoogleCommonCollectArrayTable_CellSet_$1 *)outer$
                                                            withInt:(jint)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_CellSet_$1_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_CellSet_$1_$1)
#if !defined (_ComGoogleCommonCollectArrayTable_ArrayMap_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ArrayMap_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ArrayMap_

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_ImprovedAbstractMap_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectArrayTable_ArrayMap : ComGoogleCommonCollectMaps_ImprovedAbstractMap {
}

- (id<JavaUtilSet>)keySet;

- (id)getKeyWithInt:(jint)index;

- (NSString *)getKeyRole;

- (id)getValueWithInt:(jint)index;

- (id)setValueWithInt:(jint)index
               withId:(id)newValue;

- (jint)size;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)createEntrySet;

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (void)clear;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_ArrayMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_ArrayMap)
#if !defined (_ComGoogleCommonCollectArrayTable_Column_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_Column_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_Column_

@class ComGoogleCommonCollectArrayTable;


@interface ComGoogleCommonCollectArrayTable_Column : ComGoogleCommonCollectArrayTable_ArrayMap {
 @public
  jint columnIndex_;
}

- (instancetype)initWithComGoogleCommonCollectArrayTable:(ComGoogleCommonCollectArrayTable *)outer$
                                                 withInt:(jint)columnIndex;

- (NSString *)getKeyRole;

- (id)getValueWithInt:(jint)index;

- (id)setValueWithInt:(jint)index
               withId:(id)newValue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_Column)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_Column)
#if !defined (_ComGoogleCommonCollectArrayTable_ColumnMap_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ColumnMap_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ColumnMap_

@class ComGoogleCommonCollectArrayTable;
@protocol JavaUtilMap;


@interface ComGoogleCommonCollectArrayTable_ColumnMap : ComGoogleCommonCollectArrayTable_ArrayMap {
}

- (NSString *)getKeyRole;

- (id<JavaUtilMap>)getValueWithInt:(jint)index;

- (id<JavaUtilMap>)setValueWithInt:(jint)index
                            withId:(id<JavaUtilMap>)newValue;

- (id<JavaUtilMap>)putWithId:(id)key
                      withId:(id<JavaUtilMap>)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_ColumnMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_ColumnMap)
#if !defined (_ComGoogleCommonCollectArrayTable_Row_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_Row_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_Row_

@class ComGoogleCommonCollectArrayTable;


@interface ComGoogleCommonCollectArrayTable_Row : ComGoogleCommonCollectArrayTable_ArrayMap {
 @public
  jint rowIndex_;
}

- (instancetype)initWithComGoogleCommonCollectArrayTable:(ComGoogleCommonCollectArrayTable *)outer$
                                                 withInt:(jint)rowIndex;

- (NSString *)getKeyRole;

- (id)getValueWithInt:(jint)index;

- (id)setValueWithInt:(jint)index
               withId:(id)newValue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_Row)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_Row)
#if !defined (_ComGoogleCommonCollectArrayTable_RowMap_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_RowMap_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_RowMap_

@class ComGoogleCommonCollectArrayTable;
@protocol JavaUtilMap;


@interface ComGoogleCommonCollectArrayTable_RowMap : ComGoogleCommonCollectArrayTable_ArrayMap {
}

- (NSString *)getKeyRole;

- (id<JavaUtilMap>)getValueWithInt:(jint)index;

- (id<JavaUtilMap>)setValueWithInt:(jint)index
                            withId:(id<JavaUtilMap>)newValue;

- (id<JavaUtilMap>)putWithId:(id)key
                      withId:(id<JavaUtilMap>)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_RowMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_RowMap)
#if !defined (_ComGoogleCommonCollectArrayTable_Values_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_Values_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_Values_

@class ComGoogleCommonCollectArrayTable;
@protocol JavaUtilIterator;

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include "java/util/AbstractCollection.h"


@interface ComGoogleCommonCollectArrayTable_Values : JavaUtilAbstractCollection {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (instancetype)initWithComGoogleCommonCollectArrayTable:(ComGoogleCommonCollectArrayTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_Values)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_Values)
#if !defined (_ComGoogleCommonCollectArrayTable_Values_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_Values_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_Values_$1_

@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectTransformedIterator_RESTRICT 1
#define ComGoogleCommonCollectTransformedIterator_INCLUDE 1
#include "com/google/common/collect/TransformedIterator.h"


@interface ComGoogleCommonCollectArrayTable_Values_$1 : ComGoogleCommonCollectTransformedIterator {
}

- (id)transformWithId:(id<ComGoogleCommonCollectTable_Cell>)cell;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)arg$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable_Values_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable_Values_$1)
