//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/RegularImmutableList.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectRegularImmutableList_RESTRICT
#define ComGoogleCommonCollectRegularImmutableList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableList_RESTRICT
#if !defined (_ComGoogleCommonCollectRegularImmutableList_) && (ComGoogleCommonCollectRegularImmutableList_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableList_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableList_

@class ComGoogleCommonCollectUnmodifiableListIterator;
@class IOSObjectArray;

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"


@interface ComGoogleCommonCollectRegularImmutableList : ComGoogleCommonCollectImmutableList {
}

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)array
                              withInt:(jint)offset
                              withInt:(jint)size;

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)array;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)isPartialView;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)other;

- (id)getWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableList *)subListUncheckedWithInt:(jint)fromIndex
                                                         withInt:(jint)toIndex;

- (ComGoogleCommonCollectUnmodifiableListIterator *)listIteratorWithInt:(jint)index;

- (jboolean)isEqual:(id)object;

- (NSString *)description;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableList)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableList)