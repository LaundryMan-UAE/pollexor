//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/ConditionalStackTraceFilter.java
//

#ifndef _OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_H_
#define _OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_H_

@class JavaLangThrowable;
@class OrgMockitoInternalExceptionsStacktraceStackTraceFilter;
@protocol OrgMockitoConfigurationIMockitoConfiguration;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

#define OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_serialVersionUID -8085849703510292641LL

@interface OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter : NSObject < JavaIoSerializable > {
}

- (void)filterWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter)

#endif // _OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_H_