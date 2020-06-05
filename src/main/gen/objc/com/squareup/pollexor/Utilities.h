//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/Laundryman/Libraries/pollexor/src/main/java/com/squareup/pollexor/Utilities.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComSquareupPollexorUtilities")
#ifdef RESTRICT_ComSquareupPollexorUtilities
#define INCLUDE_ALL_ComSquareupPollexorUtilities 0
#else
#define INCLUDE_ALL_ComSquareupPollexorUtilities 1
#endif
#undef RESTRICT_ComSquareupPollexorUtilities

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComSquareupPollexorUtilities_) && (INCLUDE_ALL_ComSquareupPollexorUtilities || defined(INCLUDE_ComSquareupPollexorUtilities))
#define ComSquareupPollexorUtilities_

@class IOSByteArray;
@class JavaLangStringBuilder;

/*!
 @brief Utility methods for <code>ThumborUrlBuilder</code>.
 */
@interface ComSquareupPollexorUtilities : NSObject

#pragma mark Public

/*!
 @brief Base64 encodes a byte array.
 @param bytes Bytes to encode.
 @return Encoded string.
 @throw IllegalArgumentExceptionif <code>bytes</code> is null or exceeds 3/4ths of <code>Integer.MAX_VALUE</code>
 .
 */
+ (NSString *)base64EncodeWithByteArray:(IOSByteArray *)bytes;

#pragma mark Package-Private

/*!
 @brief Encrypt a string with HMAC-SHA1 using the specified key.
 @param message Input string.
 @param key Encryption key.
 @return Encrypted output.
 */
+ (IOSByteArray *)hmacSha1WithJavaLangStringBuilder:(JavaLangStringBuilder *)message
                                       withNSString:(NSString *)key;

/*!
 @brief Create an MD5 hash of a string.
 @param input Input string.
 @return Hash of input.
 @throw IllegalArgumentExceptionif <code>input</code> is blank.
 */
+ (NSString *)md5WithNSString:(NSString *)input;

/*!
 @brief Normalize a string to a desired length by repeatedly appending itself and/or truncating.
 @param string Input string.
 @param desiredLength Desired length of string.
 @return Output string which is guaranteed to have a length equal to the desired length
          argument.
 @throw IllegalArgumentExceptionif <code>string</code> is blank or <code>desiredLength</code> is not
  greater than 0.
 */
+ (NSString *)normalizeStringWithNSString:(NSString *)string
                                  withInt:(jint)desiredLength;

/*!
 @brief Pad a <code>StringBuilder</code> to a desired multiple on the right using a specified character.
 @param builder Builder to pad.
 @param padding Padding character.
 @param multipleOf Number which the length must be a multiple of.
 @throw IllegalArgumentExceptionif <code>builder</code> is null or <code>multipleOf</code> is less than
  2.
 */
+ (void)rightPadStringWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                       withChar:(jchar)padding
                                        withInt:(jint)multipleOf;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComSquareupPollexorUtilities)

FOUNDATION_EXPORT NSString *ComSquareupPollexorUtilities_base64EncodeWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT void ComSquareupPollexorUtilities_rightPadStringWithJavaLangStringBuilder_withChar_withInt_(JavaLangStringBuilder *builder, jchar padding, jint multipleOf);

FOUNDATION_EXPORT NSString *ComSquareupPollexorUtilities_normalizeStringWithNSString_withInt_(NSString *string, jint desiredLength);

FOUNDATION_EXPORT NSString *ComSquareupPollexorUtilities_md5WithNSString_(NSString *input);

FOUNDATION_EXPORT IOSByteArray *ComSquareupPollexorUtilities_hmacSha1WithJavaLangStringBuilder_withNSString_(JavaLangStringBuilder *message, NSString *key);

J2OBJC_TYPE_LITERAL_HEADER(ComSquareupPollexorUtilities)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComSquareupPollexorUtilities")
