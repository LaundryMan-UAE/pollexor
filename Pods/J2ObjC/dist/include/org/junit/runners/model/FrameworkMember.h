//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runners/model/FrameworkMember.java
//

#ifndef _OrgJunitRunnersModelFrameworkMember_H_
#define _OrgJunitRunnersModelFrameworkMember_H_

@class IOSObjectArray;
@protocol JavaUtilList;

#include "J2ObjC_header.h"

@interface OrgJunitRunnersModelFrameworkMember : NSObject {
}

- (IOSObjectArray *)getAnnotations;

- (jboolean)isShadowedByWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkMember *)otherMember;

- (jboolean)isShadowedByWithJavaUtilList:(id<JavaUtilList>)members;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelFrameworkMember)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelFrameworkMember)

#endif // _OrgJunitRunnersModelFrameworkMember_H_
