//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/WriteAbortedException.java
//

#ifndef _JavaIoWriteAbortedException_H_
#define _JavaIoWriteAbortedException_H_

@class JavaLangException;
@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/io/ObjectStreamException.h"

#define JavaIoWriteAbortedException_serialVersionUID -3326426625597282442LL

@interface JavaIoWriteAbortedException : JavaIoObjectStreamException {
 @public
  JavaLangException *detail_;
}

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangException:(JavaLangException *)rootCause;

- (NSString *)getMessage;

- (JavaLangThrowable *)getCause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoWriteAbortedException)

J2OBJC_FIELD_SETTER(JavaIoWriteAbortedException, detail_, JavaLangException *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaIoWriteAbortedException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoWriteAbortedException)

#endif // _JavaIoWriteAbortedException_H_