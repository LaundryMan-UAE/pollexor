//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runner/notification/Failure.java
//

#ifndef _OrgJunitRunnerNotificationFailure_H_
#define _OrgJunitRunnerNotificationFailure_H_

@class JavaLangThrowable;
@class OrgJunitRunnerDescription;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

#define OrgJunitRunnerNotificationFailure_serialVersionUID 1LL

@interface OrgJunitRunnerNotificationFailure : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
                            withJavaLangThrowable:(JavaLangThrowable *)thrownException;

- (NSString *)getTestHeader;

- (OrgJunitRunnerDescription *)getDescription;

- (JavaLangThrowable *)getException;

- (NSString *)description;

- (NSString *)getTrace;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerNotificationFailure)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnerNotificationFailure, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerNotificationFailure)

#endif // _OrgJunitRunnerNotificationFailure_H_
