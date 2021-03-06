//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/BloomFilter.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonHashBloomFilter_RESTRICT
#define ComGoogleCommonHashBloomFilter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashBloomFilter_RESTRICT
#if !defined (_ComGoogleCommonHashBloomFilter_) && (ComGoogleCommonHashBloomFilter_INCLUDE_ALL || ComGoogleCommonHashBloomFilter_INCLUDE)
#define _ComGoogleCommonHashBloomFilter_

@class ComGoogleCommonHashBloomFilterStrategiesEnum_BitArray;
@protocol ComGoogleCommonHashBloomFilter_Strategy;
@protocol ComGoogleCommonHashFunnel;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@interface ComGoogleCommonHashBloomFilter : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
}

- (ComGoogleCommonHashBloomFilter *)copy__ OBJC_METHOD_FAMILY_NONE;

- (jboolean)mightContainWithId:(id)object;

- (jboolean)applyWithId:(id)input;

- (jboolean)putWithId:(id)object;

- (jdouble)expectedFpp;

- (jdouble)expectedFalsePositiveProbability;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

+ (ComGoogleCommonHashBloomFilter *)createWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                                withInt:(jint)expectedInsertions
                                                             withDouble:(jdouble)fpp;

+ (ComGoogleCommonHashBloomFilter *)createWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                                                                withInt:(jint)expectedInsertions;

+ (jint)optimalNumOfHashFunctionsWithLong:(jlong)n
                                 withLong:(jlong)m;

+ (jlong)optimalNumOfBitsWithLong:(jlong)n
                       withDouble:(jdouble)p;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashBloomFilter)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilter *ComGoogleCommonHashBloomFilter_createWithComGoogleCommonHashFunnel_withInt_withDouble_(id<ComGoogleCommonHashFunnel> funnel, jint expectedInsertions, jdouble fpp);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilter *ComGoogleCommonHashBloomFilter_createWithComGoogleCommonHashFunnel_withInt_(id<ComGoogleCommonHashFunnel> funnel, jint expectedInsertions);

FOUNDATION_EXPORT jint ComGoogleCommonHashBloomFilter_optimalNumOfHashFunctionsWithLong_withLong_(jlong n, jlong m);

FOUNDATION_EXPORT jlong ComGoogleCommonHashBloomFilter_optimalNumOfBitsWithLong_withDouble_(jlong n, jdouble p);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilter)
#if !defined (_ComGoogleCommonHashBloomFilter_Strategy_) && (ComGoogleCommonHashBloomFilter_INCLUDE_ALL || ComGoogleCommonHashBloomFilter_Strategy_INCLUDE)
#define _ComGoogleCommonHashBloomFilter_Strategy_

@class ComGoogleCommonHashBloomFilterStrategiesEnum_BitArray;
@protocol ComGoogleCommonHashFunnel;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@protocol ComGoogleCommonHashBloomFilter_Strategy < JavaIoSerializable, NSObject, JavaObject >
- (jboolean)putWithId:(id)object
withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
              withInt:(jint)numHashFunctions
withComGoogleCommonHashBloomFilterStrategiesEnum_BitArray:(ComGoogleCommonHashBloomFilterStrategiesEnum_BitArray *)bits;

- (jboolean)mightContainWithId:(id)object
 withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel
                       withInt:(jint)numHashFunctions
withComGoogleCommonHashBloomFilterStrategiesEnum_BitArray:(ComGoogleCommonHashBloomFilterStrategiesEnum_BitArray *)bits;

- (jint)ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashBloomFilter_Strategy)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilter_Strategy)
#if !defined (_ComGoogleCommonHashBloomFilter_SerialForm_) && (ComGoogleCommonHashBloomFilter_INCLUDE_ALL || ComGoogleCommonHashBloomFilter_SerialForm_INCLUDE)
#define _ComGoogleCommonHashBloomFilter_SerialForm_

@class ComGoogleCommonHashBloomFilter;
@class IOSLongArray;
@protocol ComGoogleCommonHashBloomFilter_Strategy;
@protocol ComGoogleCommonHashFunnel;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonHashBloomFilter_SerialForm_serialVersionUID 1LL

@interface ComGoogleCommonHashBloomFilter_SerialForm : NSObject < JavaIoSerializable > {
 @public
  IOSLongArray *data_;
  jint numHashFunctions_;
  id<ComGoogleCommonHashFunnel> funnel_;
  id<ComGoogleCommonHashBloomFilter_Strategy> strategy_;
}

- (instancetype)initWithComGoogleCommonHashBloomFilter:(ComGoogleCommonHashBloomFilter *)bf;

- (id)readResolve;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashBloomFilter_SerialForm)

J2OBJC_FIELD_SETTER(ComGoogleCommonHashBloomFilter_SerialForm, data_, IOSLongArray *)
J2OBJC_FIELD_SETTER(ComGoogleCommonHashBloomFilter_SerialForm, funnel_, id<ComGoogleCommonHashFunnel>)
J2OBJC_FIELD_SETTER(ComGoogleCommonHashBloomFilter_SerialForm, strategy_, id<ComGoogleCommonHashBloomFilter_Strategy>)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashBloomFilter_SerialForm, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilter_SerialForm)
