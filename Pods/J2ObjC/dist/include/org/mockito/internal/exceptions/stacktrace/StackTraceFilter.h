//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/StackTraceFilter.java
//

#ifndef _OrgMockitoInternalExceptionsStacktraceStackTraceFilter_H_
#define _OrgMockitoInternalExceptionsStacktraceStackTraceFilter_H_

@class IOSObjectArray;
@protocol OrgMockitoExceptionsStacktraceStackTraceCleaner;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

#define OrgMockitoInternalExceptionsStacktraceStackTraceFilter_serialVersionUID -5499819791513105700LL

@interface OrgMockitoInternalExceptionsStacktraceStackTraceFilter : NSObject < JavaIoSerializable > {
}

- (IOSObjectArray *)filterWithJavaLangStackTraceElementArray:(IOSObjectArray *)target
                                                 withBoolean:(jboolean)keepTop;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL OrgMockitoInternalExceptionsStacktraceStackTraceFilter_initialized;
J2OBJC_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceStackTraceFilter)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalExceptionsStacktraceStackTraceFilter, serialVersionUID, jlong)

FOUNDATION_EXPORT id<OrgMockitoExceptionsStacktraceStackTraceCleaner> OrgMockitoInternalExceptionsStacktraceStackTraceFilter_cleaner_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalExceptionsStacktraceStackTraceFilter, cleaner_, id<OrgMockitoExceptionsStacktraceStackTraceCleaner>)
J2OBJC_STATIC_FIELD_SETTER(OrgMockitoInternalExceptionsStacktraceStackTraceFilter, cleaner_, id<OrgMockitoExceptionsStacktraceStackTraceCleaner>)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceStackTraceFilter)

#endif // _OrgMockitoInternalExceptionsStacktraceStackTraceFilter_H_
