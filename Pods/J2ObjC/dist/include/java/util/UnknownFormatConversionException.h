//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/UnknownFormatConversionException.java
//

#ifndef _JavaUtilUnknownFormatConversionException_H_
#define _JavaUtilUnknownFormatConversionException_H_

#include "J2ObjC_header.h"
#include "java/util/IllegalFormatException.h"

#define JavaUtilUnknownFormatConversionException_serialVersionUID 19060418LL

@interface JavaUtilUnknownFormatConversionException : JavaUtilIllegalFormatException {
}

- (instancetype)initWithNSString:(NSString *)s;

- (NSString *)getConversion;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilUnknownFormatConversionException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilUnknownFormatConversionException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilUnknownFormatConversionException)

#endif // _JavaUtilUnknownFormatConversionException_H_
