//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsEmptyValues.java
//

#ifndef _OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_H_
#define _OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_H_

@class IOSClass;
@class OrgMockitoInternalUtilObjectMethodsGuru;
@protocol OrgMockitoInvocationInvocationOnMock;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_serialVersionUID 1998191268711234347LL

@interface OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
 @public
  OrgMockitoInternalUtilObjectMethodsGuru *methodsGuru_;
}

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (id)returnValueForWithIOSClass:(IOSClass *)type;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues)

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues, methodsGuru_, OrgMockitoInternalUtilObjectMethodsGuru *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues)

#endif // _OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_H_
