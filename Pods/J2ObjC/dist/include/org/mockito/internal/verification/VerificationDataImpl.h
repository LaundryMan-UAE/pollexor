//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/VerificationDataImpl.java
//

#ifndef _OrgMockitoInternalVerificationVerificationDataImpl_H_
#define _OrgMockitoInternalVerificationVerificationDataImpl_H_

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalStubbingInvocationContainer;

#include "J2ObjC_header.h"
#include "org/mockito/internal/verification/api/VerificationData.h"

@interface OrgMockitoInternalVerificationVerificationDataImpl : NSObject < OrgMockitoInternalVerificationApiVerificationData > {
}

- (instancetype)initWithOrgMockitoInternalStubbingInvocationContainer:(id<OrgMockitoInternalStubbingInvocationContainer>)invocations
                    withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<JavaUtilList>)getAllInvocations;

- (OrgMockitoInternalInvocationInvocationMatcher *)getWanted;

- (void)assertWantedIsVerifiable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationVerificationDataImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationVerificationDataImpl)

#endif // _OrgMockitoInternalVerificationVerificationDataImpl_H_
