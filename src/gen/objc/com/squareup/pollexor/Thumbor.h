//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/andrefonseca/Documents/PodsFolders/pollexor/src/main/java/com/squareup/pollexor/Thumbor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComSquareupPollexorThumbor")
#ifdef RESTRICT_ComSquareupPollexorThumbor
#define INCLUDE_ALL_ComSquareupPollexorThumbor 0
#else
#define INCLUDE_ALL_ComSquareupPollexorThumbor 1
#endif
#undef RESTRICT_ComSquareupPollexorThumbor

#if !defined (PXRThumbor_) && (INCLUDE_ALL_ComSquareupPollexorThumbor || defined(INCLUDE_PXRThumbor))
#define PXRThumbor_

@class PXRThumborUrlBuilder;

/*!
 @brief Representation of a remote <a href="https://github.com/globocom/thumbor">thumbor</a>
 installation.
 */
@interface PXRThumbor : NSObject

#pragma mark Public

/*!
 @brief Begin building a url for this host with the specified image.
 */
- (PXRThumborUrlBuilder *)buildImageWithNSString:(NSString *)image;

/*!
 @brief Create a new instance for the specified host.
 - seealso: #create(String,String)
 */
+ (PXRThumbor *)createWithNSString:(NSString *)host;

/*!
 @brief Create a new instance for the specified host and encryption key.
 - seealso: #create(String)
 */
+ (PXRThumbor *)createWithNSString:(NSString *)host
                      withNSString:(NSString *)key;

- (NSString *)getHost;

- (NSString *)getKey;

@end

J2OBJC_EMPTY_STATIC_INIT(PXRThumbor)

FOUNDATION_EXPORT PXRThumbor *PXRThumbor_createWithNSString_(NSString *host);

FOUNDATION_EXPORT PXRThumbor *PXRThumbor_createWithNSString_withNSString_(NSString *host, NSString *key);

J2OBJC_TYPE_LITERAL_HEADER(PXRThumbor)

@compatibility_alias ComSquareupPollexorThumbor PXRThumbor;

#endif

#pragma pop_macro("INCLUDE_ALL_ComSquareupPollexorThumbor")
