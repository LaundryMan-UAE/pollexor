//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/fortress/SecurityAccess.java
//

#ifndef _OrgApacheHarmonySecurityFortressSecurityAccess_H_
#define _OrgApacheHarmonySecurityFortressSecurityAccess_H_

@class JavaSecurityProvider;
@class JavaSecurityProvider_Service;
@protocol JavaUtilList;

#include "J2ObjC_header.h"

@protocol OrgApacheHarmonySecurityFortressSecurityAccess < NSObject, JavaObject >

- (void)renumProviders;

- (id<JavaUtilList>)getAliasesWithJavaSecurityProvider_Service:(JavaSecurityProvider_Service *)s;

- (JavaSecurityProvider_Service *)getServiceWithJavaSecurityProvider:(JavaSecurityProvider *)p
                                                        withNSString:(NSString *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityFortressSecurityAccess)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityFortressSecurityAccess)

#endif // _OrgApacheHarmonySecurityFortressSecurityAccess_H_