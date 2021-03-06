//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ByteArrayOutputStream.java
//

#ifndef _JavaIoByteArrayOutputStream_H_
#define _JavaIoByteArrayOutputStream_H_

@class IOSByteArray;

#include "J2ObjC_header.h"
#include "java/io/OutputStream.h"

@interface JavaIoByteArrayOutputStream : JavaIoOutputStream {
 @public
  IOSByteArray *buf_;
  jint count_;
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)size;

- (void)close;

- (void)reset;

- (jint)size;

- (IOSByteArray *)toByteArray;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)hibyte;

- (NSString *)toStringWithNSString:(NSString *)charsetName;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)len;

- (void)writeWithInt:(jint)oneByte;

- (void)writeToWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoByteArrayOutputStream)

J2OBJC_FIELD_SETTER(JavaIoByteArrayOutputStream, buf_, IOSByteArray *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoByteArrayOutputStream)

#endif // _JavaIoByteArrayOutputStream_H_
