//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLRecoverableException.java
//

#ifndef _JavaSqlSQLRecoverableException_H_
#define _JavaSqlSQLRecoverableException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/sql/SQLException.h"

#define JavaSqlSQLRecoverableException_serialVersionUID -4144386502923131579LL

@interface JavaSqlSQLRecoverableException : JavaSqlSQLException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)reason;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLRecoverableException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSqlSQLRecoverableException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLRecoverableException)

#endif // _JavaSqlSQLRecoverableException_H_