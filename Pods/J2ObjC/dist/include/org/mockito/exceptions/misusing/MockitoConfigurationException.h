//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/misusing/MockitoConfigurationException.java
//

#ifndef _OrgMockitoExceptionsMisusingMockitoConfigurationException_H_
#define _OrgMockitoExceptionsMisusingMockitoConfigurationException_H_

@class JavaLangException;

#include "J2ObjC_header.h"
#include "org/mockito/exceptions/base/MockitoException.h"

#define OrgMockitoExceptionsMisusingMockitoConfigurationException_serialVersionUID 1LL

@interface OrgMockitoExceptionsMisusingMockitoConfigurationException : OrgMockitoExceptionsBaseMockitoException {
}

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangException:(JavaLangException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingMockitoConfigurationException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoExceptionsMisusingMockitoConfigurationException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingMockitoConfigurationException)

#endif // _OrgMockitoExceptionsMisusingMockitoConfigurationException_H_