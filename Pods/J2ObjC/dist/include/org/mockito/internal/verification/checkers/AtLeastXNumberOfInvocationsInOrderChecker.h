//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/AtLeastXNumberOfInvocationsInOrderChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker_H_
#define _OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker_H_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMarker;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker : NSObject {
}

- (instancetype)initWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker)

#endif // _OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker_H_
