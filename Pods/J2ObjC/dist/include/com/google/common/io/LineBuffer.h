//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/LineBuffer.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonIoLineBuffer_RESTRICT
#define ComGoogleCommonIoLineBuffer_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoLineBuffer_RESTRICT
#if !defined (_ComGoogleCommonIoLineBuffer_) && (ComGoogleCommonIoLineBuffer_INCLUDE_ALL || ComGoogleCommonIoLineBuffer_INCLUDE)
#define _ComGoogleCommonIoLineBuffer_

@class IOSCharArray;
@class JavaLangStringBuilder;


@interface ComGoogleCommonIoLineBuffer : NSObject {
}

- (void)addWithCharArray:(IOSCharArray *)cbuf
                 withInt:(jint)off
                 withInt:(jint)len;

- (void)finish;

- (void)handleLineWithNSString:(NSString *)line
                  withNSString:(NSString *)end;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoLineBuffer)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoLineBuffer)