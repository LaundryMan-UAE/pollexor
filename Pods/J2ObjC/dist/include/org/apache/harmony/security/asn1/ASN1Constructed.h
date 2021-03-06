//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Constructed.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Constructed_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Constructed_H_

@class OrgApacheHarmonySecurityAsn1BerOutputStream;

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Type.h"

@interface OrgApacheHarmonySecurityAsn1ASN1Constructed : OrgApacheHarmonySecurityAsn1ASN1Type {
}

- (instancetype)initWithInt:(jint)tagNumber;

- (instancetype)initWithInt:(jint)tagClass
                    withInt:(jint)tagNumber;

- (jboolean)checkTagWithInt:(jint)identifier;

- (void)encodeASNWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1Constructed)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1Constructed)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Constructed_H_
