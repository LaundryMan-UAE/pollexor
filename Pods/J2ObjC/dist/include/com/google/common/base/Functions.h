//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/Functions.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonBaseFunctions_RESTRICT
#define ComGoogleCommonBaseFunctions_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseFunctions_RESTRICT
#if !defined (_ComGoogleCommonBaseFunctions_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_INCLUDE)
#define _ComGoogleCommonBaseFunctions_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilMap;


@interface ComGoogleCommonBaseFunctions : NSObject {
}

+ (id<ComGoogleCommonBaseFunction>)toStringFunction;

+ (id<ComGoogleCommonBaseFunction>)identity;

+ (id<ComGoogleCommonBaseFunction>)forMapWithJavaUtilMap:(id<JavaUtilMap>)map;

+ (id<ComGoogleCommonBaseFunction>)forMapWithJavaUtilMap:(id<JavaUtilMap>)map
                                                  withId:(id)defaultValue;

+ (id<ComGoogleCommonBaseFunction>)composeWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)g
                                          withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)f;

+ (id<ComGoogleCommonBaseFunction>)forPredicateWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<ComGoogleCommonBaseFunction>)constantWithId:(id)value;

+ (id<ComGoogleCommonBaseFunction>)forSupplierWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctions)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_toStringFunction();

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_identity();

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_forMapWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_forMapWithJavaUtilMap_withId_(id<JavaUtilMap> map, id defaultValue);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_composeWithComGoogleCommonBaseFunction_withComGoogleCommonBaseFunction_(id<ComGoogleCommonBaseFunction> g, id<ComGoogleCommonBaseFunction> f);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_forPredicateWithComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_constantWithId_(id value);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_forSupplierWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> supplier);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions)
#if !defined (_ComGoogleCommonBaseFunctions_ToStringFunctionEnum_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_ToStringFunctionEnum_INCLUDE)
#define _ComGoogleCommonBaseFunctions_ToStringFunctionEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonBaseFunctions_ToStringFunction) {
  ComGoogleCommonBaseFunctions_ToStringFunction_INSTANCE = 0,
};

@interface ComGoogleCommonBaseFunctions_ToStringFunctionEnum : JavaLangEnum < NSCopying, ComGoogleCommonBaseFunction > {
}

- (NSString *)applyWithId:(id)o;

- (NSString *)description;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBaseFunctions_ToStringFunctionEnum_values();

+ (ComGoogleCommonBaseFunctions_ToStringFunctionEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonBaseFunctions_ToStringFunctionEnum *ComGoogleCommonBaseFunctions_ToStringFunctionEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonBaseFunctions_ToStringFunctionEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonBaseFunctions_ToStringFunctionEnum)

FOUNDATION_EXPORT ComGoogleCommonBaseFunctions_ToStringFunctionEnum *ComGoogleCommonBaseFunctions_ToStringFunctionEnum_values_[];

#define ComGoogleCommonBaseFunctions_ToStringFunctionEnum_INSTANCE ComGoogleCommonBaseFunctions_ToStringFunctionEnum_values_[ComGoogleCommonBaseFunctions_ToStringFunction_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBaseFunctions_ToStringFunctionEnum, INSTANCE)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions_ToStringFunctionEnum)
#if !defined (_ComGoogleCommonBaseFunctions_IdentityFunctionEnum_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_IdentityFunctionEnum_INCLUDE)
#define _ComGoogleCommonBaseFunctions_IdentityFunctionEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonBaseFunctions_IdentityFunction) {
  ComGoogleCommonBaseFunctions_IdentityFunction_INSTANCE = 0,
};

@interface ComGoogleCommonBaseFunctions_IdentityFunctionEnum : JavaLangEnum < NSCopying, ComGoogleCommonBaseFunction > {
}

- (id)applyWithId:(id)o;

- (NSString *)description;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBaseFunctions_IdentityFunctionEnum_values();

+ (ComGoogleCommonBaseFunctions_IdentityFunctionEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonBaseFunctions_IdentityFunctionEnum *ComGoogleCommonBaseFunctions_IdentityFunctionEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonBaseFunctions_IdentityFunctionEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonBaseFunctions_IdentityFunctionEnum)

FOUNDATION_EXPORT ComGoogleCommonBaseFunctions_IdentityFunctionEnum *ComGoogleCommonBaseFunctions_IdentityFunctionEnum_values_[];

#define ComGoogleCommonBaseFunctions_IdentityFunctionEnum_INSTANCE ComGoogleCommonBaseFunctions_IdentityFunctionEnum_values_[ComGoogleCommonBaseFunctions_IdentityFunction_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBaseFunctions_IdentityFunctionEnum, INSTANCE)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions_IdentityFunctionEnum)
#if !defined (_ComGoogleCommonBaseFunctions_FunctionForMapNoDefault_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_FunctionForMapNoDefault_INCLUDE)
#define _ComGoogleCommonBaseFunctions_FunctionForMapNoDefault_

@protocol JavaUtilMap;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBaseFunctions_FunctionForMapNoDefault_serialVersionUID 0LL

@interface ComGoogleCommonBaseFunctions_FunctionForMapNoDefault : NSObject < ComGoogleCommonBaseFunction, JavaIoSerializable > {
 @public
  id<JavaUtilMap> map_;
}

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)applyWithId:(id)key;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctions_FunctionForMapNoDefault)

J2OBJC_FIELD_SETTER(ComGoogleCommonBaseFunctions_FunctionForMapNoDefault, map_, id<JavaUtilMap>)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseFunctions_FunctionForMapNoDefault, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions_FunctionForMapNoDefault)
#if !defined (_ComGoogleCommonBaseFunctions_ForMapWithDefault_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_ForMapWithDefault_INCLUDE)
#define _ComGoogleCommonBaseFunctions_ForMapWithDefault_

@protocol JavaUtilMap;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBaseFunctions_ForMapWithDefault_serialVersionUID 0LL

@interface ComGoogleCommonBaseFunctions_ForMapWithDefault : NSObject < ComGoogleCommonBaseFunction, JavaIoSerializable > {
 @public
  id<JavaUtilMap> map_;
  id defaultValue_;
}

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map
                             withId:(id)defaultValue;

- (id)applyWithId:(id)key;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctions_ForMapWithDefault)

J2OBJC_FIELD_SETTER(ComGoogleCommonBaseFunctions_ForMapWithDefault, map_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonBaseFunctions_ForMapWithDefault, defaultValue_, id)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseFunctions_ForMapWithDefault, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions_ForMapWithDefault)
#if !defined (_ComGoogleCommonBaseFunctions_FunctionComposition_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_FunctionComposition_INCLUDE)
#define _ComGoogleCommonBaseFunctions_FunctionComposition_

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBaseFunctions_FunctionComposition_serialVersionUID 0LL

@interface ComGoogleCommonBaseFunctions_FunctionComposition : NSObject < ComGoogleCommonBaseFunction, JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)g
                    withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)f;

- (id)applyWithId:(id)a;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctions_FunctionComposition)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseFunctions_FunctionComposition, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions_FunctionComposition)
#if !defined (_ComGoogleCommonBaseFunctions_PredicateFunction_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_PredicateFunction_INCLUDE)
#define _ComGoogleCommonBaseFunctions_PredicateFunction_

@class JavaLangBoolean;
@protocol ComGoogleCommonBasePredicate;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBaseFunctions_PredicateFunction_serialVersionUID 0LL

@interface ComGoogleCommonBaseFunctions_PredicateFunction : NSObject < ComGoogleCommonBaseFunction, JavaIoSerializable > {
}

- (JavaLangBoolean *)applyWithId:(id)t;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctions_PredicateFunction)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseFunctions_PredicateFunction, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions_PredicateFunction)
#if !defined (_ComGoogleCommonBaseFunctions_ConstantFunction_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_ConstantFunction_INCLUDE)
#define _ComGoogleCommonBaseFunctions_ConstantFunction_

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBaseFunctions_ConstantFunction_serialVersionUID 0LL

@interface ComGoogleCommonBaseFunctions_ConstantFunction : NSObject < ComGoogleCommonBaseFunction, JavaIoSerializable > {
}

- (instancetype)initWithId:(id)value;

- (id)applyWithId:(id)from;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctions_ConstantFunction)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseFunctions_ConstantFunction, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions_ConstantFunction)
#if !defined (_ComGoogleCommonBaseFunctions_SupplierFunction_) && (ComGoogleCommonBaseFunctions_INCLUDE_ALL || ComGoogleCommonBaseFunctions_SupplierFunction_INCLUDE)
#define _ComGoogleCommonBaseFunctions_SupplierFunction_

@protocol ComGoogleCommonBaseSupplier;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBaseFunctions_SupplierFunction_serialVersionUID 0LL

@interface ComGoogleCommonBaseFunctions_SupplierFunction : NSObject < ComGoogleCommonBaseFunction, JavaIoSerializable > {
}

- (id)applyWithId:(id)input;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctions_SupplierFunction)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseFunctions_SupplierFunction, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions_SupplierFunction)
