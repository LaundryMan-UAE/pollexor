//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/AbstractByteHasher.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonHashAbstractByteHasher_RESTRICT
#define ComGoogleCommonHashAbstractByteHasher_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashAbstractByteHasher_RESTRICT
#if !defined (_ComGoogleCommonHashAbstractByteHasher_) && (ComGoogleCommonHashAbstractByteHasher_INCLUDE_ALL || ComGoogleCommonHashAbstractByteHasher_INCLUDE)
#define _ComGoogleCommonHashAbstractByteHasher_

@class IOSByteArray;
@class JavaNioByteBuffer;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashHasher;

#define ComGoogleCommonHashAbstractHasher_RESTRICT 1
#define ComGoogleCommonHashAbstractHasher_INCLUDE 1
#include "com/google/common/hash/AbstractHasher.h"


@interface ComGoogleCommonHashAbstractByteHasher : ComGoogleCommonHashAbstractHasher {
}

- (void)updateWithByte:(jbyte)b;

- (void)updateWithByteArray:(IOSByteArray *)b;

- (void)updateWithByteArray:(IOSByteArray *)b
                    withInt:(jint)off
                    withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashHasher>)putObjectWithId:(id)instance
                   withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractByteHasher)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractByteHasher)