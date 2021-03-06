//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ConcurrentHashMap.java
//

#ifndef _JavaUtilConcurrentConcurrentHashMap_H_
#define _JavaUtilConcurrentConcurrentHashMap_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaUtilConcurrentConcurrentHashMap_HashEntry;
@class JavaUtilConcurrentConcurrentHashMap_Segment;
@class SunMiscUnsafe;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractCollection.h"
#include "java/util/AbstractMap.h"
#include "java/util/AbstractSet.h"
#include "java/util/Enumeration.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/ConcurrentMap.h"
#include "java/util/concurrent/locks/ReentrantLock.h"

#define JavaUtilConcurrentConcurrentHashMap_DEFAULT_CONCURRENCY_LEVEL 16
#define JavaUtilConcurrentConcurrentHashMap_DEFAULT_INITIAL_CAPACITY 16
#define JavaUtilConcurrentConcurrentHashMap_DEFAULT_LOAD_FACTOR 0.75f
#define JavaUtilConcurrentConcurrentHashMap_MAXIMUM_CAPACITY 1073741824
#define JavaUtilConcurrentConcurrentHashMap_MAX_SEGMENTS 65536
#define JavaUtilConcurrentConcurrentHashMap_MIN_SEGMENT_TABLE_CAPACITY 2
#define JavaUtilConcurrentConcurrentHashMap_RETRIES_BEFORE_LOCK 2
#define JavaUtilConcurrentConcurrentHashMap_serialVersionUID 7249069246763182397LL

@interface JavaUtilConcurrentConcurrentHashMap : JavaUtilAbstractMap < JavaUtilConcurrentConcurrentMap, JavaIoSerializable > {
 @public
  jint segmentMask_;
  jint segmentShift_;
  IOSObjectArray *segments_;
  id<JavaUtilSet> keySet_ConcurrentHashMap_;
  id<JavaUtilSet> entrySet__;
  id<JavaUtilCollection> values__;
}

+ (JavaUtilConcurrentConcurrentHashMap_HashEntry *)entryAtWithJavaUtilConcurrentConcurrentHashMap_HashEntryArray:(IOSObjectArray *)tab
                                                                                                         withInt:(jint)i;

+ (void)setEntryAtWithJavaUtilConcurrentConcurrentHashMap_HashEntryArray:(IOSObjectArray *)tab
                                                                 withInt:(jint)i
                       withJavaUtilConcurrentConcurrentHashMap_HashEntry:(JavaUtilConcurrentConcurrentHashMap_HashEntry *)e;

+ (JavaUtilConcurrentConcurrentHashMap_Segment *)segmentAtWithJavaUtilConcurrentConcurrentHashMap_SegmentArray:(IOSObjectArray *)ss
                                                                                                       withInt:(jint)j;

+ (JavaUtilConcurrentConcurrentHashMap_HashEntry *)entryForHashWithJavaUtilConcurrentConcurrentHashMap_Segment:(JavaUtilConcurrentConcurrentHashMap_Segment *)seg
                                                                                                       withInt:(jint)h;

- (instancetype)initWithInt:(jint)initialCapacity
                  withFloat:(jfloat)loadFactor
                    withInt:(jint)concurrencyLevel;

- (instancetype)initWithInt:(jint)initialCapacity
                  withFloat:(jfloat)loadFactor;

- (instancetype)initWithInt:(jint)initialCapacity;

- (instancetype)init;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)m;

- (jboolean)isEmpty;

- (jint)size;

- (id)getWithId:(id)key;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)containsWithId:(id)value;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

- (id)removeWithId:(id)key;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (void)clear;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilEnumeration>)keys;

- (id<JavaUtilEnumeration>)elements;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentHashMap_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap, segments_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap, keySet_ConcurrentHashMap_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap, entrySet__, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap, values__, id<JavaUtilCollection>)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentHashMap_HashEntry *JavaUtilConcurrentConcurrentHashMap_entryAtWithJavaUtilConcurrentConcurrentHashMap_HashEntryArray_withInt_(IOSObjectArray *tab, jint i);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentHashMap_setEntryAtWithJavaUtilConcurrentConcurrentHashMap_HashEntryArray_withInt_withJavaUtilConcurrentConcurrentHashMap_HashEntry_(IOSObjectArray *tab, jint i, JavaUtilConcurrentConcurrentHashMap_HashEntry *e);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentHashMap_Segment *JavaUtilConcurrentConcurrentHashMap_segmentAtWithJavaUtilConcurrentConcurrentHashMap_SegmentArray_withInt_(IOSObjectArray *ss, jint j);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentHashMap_HashEntry *JavaUtilConcurrentConcurrentHashMap_entryForHashWithJavaUtilConcurrentConcurrentHashMap_Segment_withInt_(JavaUtilConcurrentConcurrentHashMap_Segment *seg, jint h);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, serialVersionUID, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, DEFAULT_INITIAL_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, DEFAULT_LOAD_FACTOR, jfloat)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, DEFAULT_CONCURRENCY_LEVEL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, MAXIMUM_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, MIN_SEGMENT_TABLE_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, MAX_SEGMENTS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, RETRIES_BEFORE_LOCK, jint)

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentConcurrentHashMap_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap, UNSAFE_, SunMiscUnsafe *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap)

@interface JavaUtilConcurrentConcurrentHashMap_HashEntry : NSObject {
 @public
  jint hash__;
  id key_;
  id value_;
  JavaUtilConcurrentConcurrentHashMap_HashEntry *next_;
}

- (instancetype)initWithInt:(jint)hash_
                     withId:(id)key
                     withId:(id)value
withJavaUtilConcurrentConcurrentHashMap_HashEntry:(JavaUtilConcurrentConcurrentHashMap_HashEntry *)next;

- (void)setNextWithJavaUtilConcurrentConcurrentHashMap_HashEntry:(JavaUtilConcurrentConcurrentHashMap_HashEntry *)n;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentHashMap_HashEntry_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_HashEntry)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap_HashEntry, key_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap_HashEntry, value_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap_HashEntry, next_, JavaUtilConcurrentConcurrentHashMap_HashEntry *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentConcurrentHashMap_HashEntry_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap_HashEntry, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentHashMap_HashEntry_nextOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap_HashEntry, nextOffset_, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_HashEntry)

#define JavaUtilConcurrentConcurrentHashMap_Segment_serialVersionUID 2249069246763182397LL

@interface JavaUtilConcurrentConcurrentHashMap_Segment : JavaUtilConcurrentLocksReentrantLock < JavaIoSerializable > {
 @public
  IOSObjectArray *table_;
  jint count_;
  jint modCount_;
  jint threshold_;
  jfloat loadFactor_;
}

- (instancetype)initWithFloat:(jfloat)lf
                      withInt:(jint)threshold
withJavaUtilConcurrentConcurrentHashMap_HashEntryArray:(IOSObjectArray *)tab;

- (id)putWithId:(id)key
        withInt:(jint)hash_
         withId:(id)value
    withBoolean:(jboolean)onlyIfAbsent;

- (id)removeWithId:(id)key
           withInt:(jint)hash_
            withId:(id)value;

- (jboolean)replaceWithId:(id)key
                  withInt:(jint)hash_
                   withId:(id)oldValue
                   withId:(id)newValue;

- (id)replaceWithId:(id)key
            withInt:(jint)hash_
             withId:(id)value;

- (void)clear;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentHashMap_Segment_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_Segment)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap_Segment, table_, IOSObjectArray *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap_Segment, serialVersionUID, jlong)

FOUNDATION_EXPORT jint JavaUtilConcurrentConcurrentHashMap_Segment_MAX_SCAN_RETRIES_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentHashMap_Segment, MAX_SCAN_RETRIES_, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_Segment)

@interface JavaUtilConcurrentConcurrentHashMap_HashIterator : NSObject {
 @public
  jint nextSegmentIndex_;
  jint nextTableIndex_;
  IOSObjectArray *currentTable_;
  JavaUtilConcurrentConcurrentHashMap_HashEntry *nextEntry__;
  JavaUtilConcurrentConcurrentHashMap_HashEntry *lastReturned_;
}

- (instancetype)initWithJavaUtilConcurrentConcurrentHashMap:(JavaUtilConcurrentConcurrentHashMap *)outer$;

- (void)advance;

- (JavaUtilConcurrentConcurrentHashMap_HashEntry *)nextEntry;

- (jboolean)hasNext;

- (jboolean)hasMoreElements;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_HashIterator)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap_HashIterator, currentTable_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap_HashIterator, nextEntry__, JavaUtilConcurrentConcurrentHashMap_HashEntry *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentHashMap_HashIterator, lastReturned_, JavaUtilConcurrentConcurrentHashMap_HashEntry *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_HashIterator)

@interface JavaUtilConcurrentConcurrentHashMap_KeyIterator : JavaUtilConcurrentConcurrentHashMap_HashIterator < JavaUtilIterator, JavaUtilEnumeration > {
}

- (id)next;

- (id)nextElement;

- (instancetype)initWithJavaUtilConcurrentConcurrentHashMap:(JavaUtilConcurrentConcurrentHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_KeyIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_KeyIterator)

@interface JavaUtilConcurrentConcurrentHashMap_ValueIterator : JavaUtilConcurrentConcurrentHashMap_HashIterator < JavaUtilIterator, JavaUtilEnumeration > {
}

- (id)next;

- (id)nextElement;

- (instancetype)initWithJavaUtilConcurrentConcurrentHashMap:(JavaUtilConcurrentConcurrentHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_ValueIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_ValueIterator)

@interface JavaUtilConcurrentConcurrentHashMap_WriteThroughEntry : JavaUtilAbstractMap_SimpleEntry {
}

- (instancetype)initWithJavaUtilConcurrentConcurrentHashMap:(JavaUtilConcurrentConcurrentHashMap *)outer$
                                                     withId:(id)k
                                                     withId:(id)v;

- (id)setValueWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_WriteThroughEntry)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_WriteThroughEntry)

@interface JavaUtilConcurrentConcurrentHashMap_EntryIterator : JavaUtilConcurrentConcurrentHashMap_HashIterator < JavaUtilIterator > {
}

- (id<JavaUtilMap_Entry>)next;

- (instancetype)initWithJavaUtilConcurrentConcurrentHashMap:(JavaUtilConcurrentConcurrentHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_EntryIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_EntryIterator)

@interface JavaUtilConcurrentConcurrentHashMap_KeySet : JavaUtilAbstractSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

- (void)clear;

- (instancetype)initWithJavaUtilConcurrentConcurrentHashMap:(JavaUtilConcurrentConcurrentHashMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_KeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_KeySet)

@interface JavaUtilConcurrentConcurrentHashMap_Values : JavaUtilAbstractCollection {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)o;

- (void)clear;

- (instancetype)initWithJavaUtilConcurrentConcurrentHashMap:(JavaUtilConcurrentConcurrentHashMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_Values)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_Values)

@interface JavaUtilConcurrentConcurrentHashMap_EntrySet : JavaUtilAbstractSet {
}

- (id<JavaUtilIterator>)iterator;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

- (jint)size;

- (jboolean)isEmpty;

- (void)clear;

- (instancetype)initWithJavaUtilConcurrentConcurrentHashMap:(JavaUtilConcurrentConcurrentHashMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentHashMap_EntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentHashMap_EntrySet)

#endif // _JavaUtilConcurrentConcurrentHashMap_H_
