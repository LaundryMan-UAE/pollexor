//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/Returns.java
//

#ifndef _OrgMockitoInternalStubbingAnswersReturns_H_
#define _OrgMockitoInternalStubbingAnswersReturns_H_

@class IOSClass;
@protocol OrgMockitoInvocationInvocationOnMock;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingAnswersReturns_serialVersionUID -6245608253574215396LL

@interface OrgMockitoInternalStubbingAnswersReturns : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
}

- (instancetype)initWithId:(id)value;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (NSString *)printReturnType;

- (IOSClass *)getReturnType;

- (jboolean)returnsNull;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersReturns)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingAnswersReturns, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersReturns)

#endif // _OrgMockitoInternalStubbingAnswersReturns_H_
