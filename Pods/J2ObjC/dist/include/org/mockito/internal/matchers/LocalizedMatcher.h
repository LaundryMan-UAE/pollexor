//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/LocalizedMatcher.java
//

#ifndef _OrgMockitoInternalMatchersLocalizedMatcher_H_
#define _OrgMockitoInternalMatchersLocalizedMatcher_H_

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestSelfDescribing;
@protocol OrgMockitoInvocationLocation;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/hamcrest/Matcher.h"
#include "org/mockito/internal/matchers/CapturesArguments.h"
#include "org/mockito/internal/matchers/ContainsExtraTypeInformation.h"
#include "org/mockito/internal/matchers/MatcherDecorator.h"

#define OrgMockitoInternalMatchersLocalizedMatcher_serialVersionUID 6748641229659825725LL

@interface OrgMockitoInternalMatchersLocalizedMatcher : NSObject < OrgHamcrestMatcher, OrgMockitoInternalMatchersContainsExtraTypeInformation, OrgMockitoInternalMatchersCapturesArguments, OrgMockitoInternalMatchersMatcherDecorator, JavaIoSerializable > {
}

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)actualMatcher;

- (void)_dont_implement_Matcher___instead_extend_BaseMatcher_;

- (jboolean)matchesWithId:(id)item;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (NSString *)description;

- (id<OrgHamcrestSelfDescribing>)withExtraTypeInfo;

- (jboolean)typeMatchesWithId:(id)object;

- (void)captureFromWithId:(id)argument;

- (id<OrgHamcrestMatcher>)getActualMatcher;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersLocalizedMatcher)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersLocalizedMatcher, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersLocalizedMatcher)

#endif // _OrgMockitoInternalMatchersLocalizedMatcher_H_