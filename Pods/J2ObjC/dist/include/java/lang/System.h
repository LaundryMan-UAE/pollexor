//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/System.java
//

#ifndef _JavaLangSystem_H_
#define _JavaLangSystem_H_

@class JavaIoInputStream;
@class JavaIoPrintStream;
@class JavaLangSecurityManager;
@class JavaLangThrowable;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogger;
@class JavaUtilProperties;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"

@interface JavaLangSystem : NSObject {
}


+ (void)setInWithJavaIoInputStream:(JavaIoInputStream *)newIn;

+ (void)setOutWithJavaIoPrintStream:(JavaIoPrintStream *)newOut;

+ (void)setErrWithJavaIoPrintStream:(JavaIoPrintStream *)newErr;

+ (jlong)currentTimeMillis;

+ (jint)identityHashCodeWithId:(id)anObject;

+ (void)arraycopyWithId:(id)src
                withInt:(jint)srcPos
                 withId:(id)dest
                withInt:(jint)destPos
                withInt:(jint)length;

+ (jlong)nanoTime;

+ (void)exitWithInt:(jint)status;

+ (JavaUtilProperties *)getProperties;

+ (NSString *)getPropertyWithNSString:(NSString *)key;

+ (NSString *)getPropertyWithNSString:(NSString *)key
                         withNSString:(NSString *)defaultValue;

+ (void)setPropertyWithNSString:(NSString *)key
                   withNSString:(NSString *)value;

+ (void)setPropertiesWithJavaUtilProperties:(JavaUtilProperties *)properties;

+ (NSString *)clearPropertyWithNSString:(NSString *)key;

+ (NSString *)getenvWithNSString:(NSString *)name;

+ (id<JavaUtilMap>)getenv;

+ (JavaLangSecurityManager *)getSecurityManager;

+ (NSString *)lineSeparator;

+ (void)logEWithNSString:(NSString *)message;

+ (void)logEWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;

+ (void)logIWithNSString:(NSString *)message;

+ (void)logIWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;

+ (void)logWWithNSString:(NSString *)message;

+ (void)logWWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL JavaLangSystem_initialized;
J2OBJC_STATIC_INIT(JavaLangSystem)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT void JavaLangSystem_setInWithJavaIoInputStream_(JavaIoInputStream *newIn);

FOUNDATION_EXPORT void JavaLangSystem_setOutWithJavaIoPrintStream_(JavaIoPrintStream *newOut);

FOUNDATION_EXPORT void JavaLangSystem_setErrWithJavaIoPrintStream_(JavaIoPrintStream *newErr);

FOUNDATION_EXPORT jlong JavaLangSystem_currentTimeMillis();

FOUNDATION_EXPORT jint JavaLangSystem_identityHashCodeWithId_(id anObject);

FOUNDATION_EXPORT void JavaLangSystem_arraycopyWithId_withInt_withId_withInt_withInt_(id src, jint srcPos, id dest, jint destPos, jint length);

FOUNDATION_EXPORT jlong JavaLangSystem_nanoTime();

FOUNDATION_EXPORT void JavaLangSystem_exitWithInt_(jint status);

FOUNDATION_EXPORT JavaUtilProperties *JavaLangSystem_getProperties();

FOUNDATION_EXPORT NSString *JavaLangSystem_getPropertyWithNSString_(NSString *key);

FOUNDATION_EXPORT NSString *JavaLangSystem_getPropertyWithNSString_withNSString_(NSString *key, NSString *defaultValue);

FOUNDATION_EXPORT void JavaLangSystem_setPropertyWithNSString_withNSString_(NSString *key, NSString *value);

FOUNDATION_EXPORT void JavaLangSystem_setPropertiesWithJavaUtilProperties_(JavaUtilProperties *properties);

FOUNDATION_EXPORT NSString *JavaLangSystem_clearPropertyWithNSString_(NSString *key);

FOUNDATION_EXPORT NSString *JavaLangSystem_getenvWithNSString_(NSString *name);

FOUNDATION_EXPORT id<JavaUtilMap> JavaLangSystem_getenv();

FOUNDATION_EXPORT JavaLangSecurityManager *JavaLangSystem_getSecurityManager();

FOUNDATION_EXPORT NSString *JavaLangSystem_lineSeparator();

FOUNDATION_EXPORT void JavaLangSystem_logEWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangSystem_logEWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *th);

FOUNDATION_EXPORT void JavaLangSystem_logIWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangSystem_logIWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *th);

FOUNDATION_EXPORT void JavaLangSystem_logWWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangSystem_logWWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *th);

FOUNDATION_EXPORT JavaUtilProperties *JavaLangSystem_props_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangSystem, props_, JavaUtilProperties *)
J2OBJC_STATIC_FIELD_SETTER(JavaLangSystem, props_, JavaUtilProperties *)

FOUNDATION_EXPORT JavaIoInputStream *JavaLangSystem_in_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangSystem, in_, JavaIoInputStream *)

FOUNDATION_EXPORT JavaIoPrintStream *JavaLangSystem_out_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangSystem, out_, JavaIoPrintStream *)

FOUNDATION_EXPORT JavaIoPrintStream *JavaLangSystem_err_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangSystem, err_, JavaIoPrintStream *)

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaLangSystem_systemLogger_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangSystem, systemLogger_, JavaUtilLoggingLogger *)
J2OBJC_STATIC_FIELD_SETTER(JavaLangSystem, systemLogger_, JavaUtilLoggingLogger *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSystem)

#endif // _JavaLangSystem_H_
