//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/ArgumentsProcessor.java
//

#ifndef _OrgMockitoInternalInvocationArgumentsProcessor_H_
#define _OrgMockitoInternalInvocationArgumentsProcessor_H_

@class IOSObjectArray;
@protocol JavaUtilList;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalInvocationArgumentsProcessor : NSObject {
}

+ (IOSObjectArray *)expandVarArgsWithBoolean:(jboolean)isVarArgs
                           withNSObjectArray:(IOSObjectArray *)args;

+ (id<JavaUtilList>)argumentsToMatchersWithNSObjectArray:(IOSObjectArray *)arguments;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationArgumentsProcessor)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoInternalInvocationArgumentsProcessor_expandVarArgsWithBoolean_withNSObjectArray_(jboolean isVarArgs, IOSObjectArray *args);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationArgumentsProcessor_argumentsToMatchersWithNSObjectArray_(IOSObjectArray *arguments);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationArgumentsProcessor)

#endif // _OrgMockitoInternalInvocationArgumentsProcessor_H_
