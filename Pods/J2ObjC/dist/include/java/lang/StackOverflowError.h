//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/StackOverflowError.java
//

#ifndef _JavaLangStackOverflowError_H_
#define _JavaLangStackOverflowError_H_

#include "J2ObjC_header.h"
#include "java/lang/VirtualMachineError.h"

#define JavaLangStackOverflowError_serialVersionUID 8609175038441759607LL

@interface JavaLangStackOverflowError : JavaLangVirtualMachineError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStackOverflowError)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangStackOverflowError, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStackOverflowError)

#endif // _JavaLangStackOverflowError_H_