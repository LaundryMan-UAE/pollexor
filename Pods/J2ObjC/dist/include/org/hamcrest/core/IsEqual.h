//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/IsEqual.java
//

#ifndef _OrgHamcrestCoreIsEqual_H_
#define _OrgHamcrestCoreIsEqual_H_

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@interface OrgHamcrestCoreIsEqual : OrgHamcrestBaseMatcher {
}

- (instancetype)initWithId:(id)equalArg;

- (jboolean)matchesWithId:(id)arg;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)equalToWithId:(id)operand;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsEqual)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsEqual_equalToWithId_(id operand);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsEqual)

#endif // _OrgHamcrestCoreIsEqual_H_