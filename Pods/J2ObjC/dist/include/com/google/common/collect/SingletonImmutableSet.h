//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/SingletonImmutableSet.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectSingletonImmutableSet_RESTRICT
#define ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSingletonImmutableSet_RESTRICT
#if !defined (_ComGoogleCommonCollectSingletonImmutableSet_) && (ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL || ComGoogleCommonCollectSingletonImmutableSet_INCLUDE)
#define _ComGoogleCommonCollectSingletonImmutableSet_

@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"


@interface ComGoogleCommonCollectSingletonImmutableSet : ComGoogleCommonCollectImmutableSet {
 @public
  id element_;
}

- (instancetype)initWithId:(id)element;

- (instancetype)initWithId:(id)element
                   withInt:(jint)hashCode;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)target;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jboolean)isPartialView;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isHashCodeFast;

- (NSString *)description;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableSet, element_, id)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableSet)