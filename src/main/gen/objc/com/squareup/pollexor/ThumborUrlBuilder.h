//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/Laundryman/Libraries/pollexor/src/main/java/com/squareup/pollexor/ThumborUrlBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder")
#ifdef RESTRICT_ComSquareupPollexorThumborUrlBuilder
#define INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder 0
#else
#define INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder 1
#endif
#undef RESTRICT_ComSquareupPollexorThumborUrlBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PXRThumborUrlBuilder_) && (INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder || defined(INCLUDE_PXRThumborUrlBuilder))
#define PXRThumborUrlBuilder_

@class IOSObjectArray;
@class JavaLangStringBuilder;
@class PXRThumborUrlBuilder_HorizontalAlign;
@class PXRThumborUrlBuilder_ImageFormat;
@class PXRThumborUrlBuilder_TrimPixelColor;
@class PXRThumborUrlBuilder_VerticalAlign;
@protocol JavaUtilList;

/*!
 @brief Fluent interface to build a Thumbor URL.
 - seealso: Thumbor#buildImage(String)
 */
@interface PXRThumborUrlBuilder : NSObject {
 @public
  NSString *image_;
  NSString *host_;
  NSString *key_;
  jboolean hasCrop_;
  jboolean hasResize_;
  jboolean isSmart_;
  jboolean isTrim_;
  jboolean flipHorizontally_;
  jboolean flipVertically_;
  jboolean fitIn_;
  jint resizeWidth_;
  jint resizeHeight_;
  jint cropTop_;
  jint cropLeft_;
  jint cropBottom_;
  jint cropRight_;
  jint trimColorTolerance_;
  PXRThumborUrlBuilder_HorizontalAlign *cropHorizontalAlign_;
  PXRThumborUrlBuilder_VerticalAlign *cropVerticalAlign_;
  PXRThumborUrlBuilder_TrimPixelColor *trimPixelColor_;
  id<JavaUtilList> filters_;
}

#pragma mark Public

/*!
 @brief Set the horizontal alignment for the image when image gets cropped by resizing.
 @param align Horizontal alignment.
 @throw IllegalStateExceptionif image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)alignWithPXRThumborUrlBuilder_HorizontalAlign:(PXRThumborUrlBuilder_HorizontalAlign *)align;

/*!
 @brief Set the vertical alignment for the image when image gets cropped by resizing.
 @param align Vertical alignment.
 @throw IllegalStateExceptionif image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)alignWithPXRThumborUrlBuilder_VerticalAlign:(PXRThumborUrlBuilder_VerticalAlign *)align;

/*!
 @brief Set the horizontal and vertical alignment for the image when image gets cropped by resizing.
 @param valign Vertical alignment.
 @param halign Horizontal alignment.
 @throw IllegalStateExceptionif image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)alignWithPXRThumborUrlBuilder_VerticalAlign:(PXRThumborUrlBuilder_VerticalAlign *)valign
                             withPXRThumborUrlBuilder_HorizontalAlign:(PXRThumborUrlBuilder_HorizontalAlign *)halign;

/*!
 @brief This filter adds a blur effect to the image using the specified radius and a default
  sigma (equal to the radius).
 @param radius Radius used in the gaussian function to generate a matrix, maximum value is 150.                The bigger the radius more blurred will be the image.
 */
+ (NSString *)blurWithInt:(jint)radius;

/*!
 @brief This filter adds a blur effect to the image using the specified radius and sigma.
 @param radius Radius used in the gaussian function to generate a matrix, maximum value is 150.                The bigger the radius more blurred will be the image.
 @param sigma Sigma used in the gaussian function.
 */
+ (NSString *)blurWithInt:(jint)radius
                  withInt:(jint)sigma;

/*!
 @brief This filter increases or decreases the image brightness.
 @param amount -100 to 100 - The amount (in %) to change the image brightness. Positive numbers  make the image brighter and negative numbers make the image darker.
 @throw IllegalArgumentExceptionif <code>amount</code> outside bounds.
 */
+ (NSString *)brightnessWithInt:(jint)amount;

/*!
 @brief The filter increases or decreases the image contrast.
 @param amount -100 to 100 - The amount (in %) to change the image contrast. Positive numbers  increase contrast and negative numbers decrease contrast.
 @throw IllegalArgumentExceptionif <code>amount</code> outside bounds.
 */
+ (NSString *)contrastWithInt:(jint)amount;

/*!
 @brief Crop the image between two points.
 @param top Top bound.
 @param left Left bound.
 @param bottom Bottom bound.
 @param right Right bound.
 @throw IllegalArgumentExceptionif <code>top</code> or <code>left</code> are less than zero or <code>bottom</code>
  or <code>right</code> are less than one or less than <code>top</code> or <code>left</code>,
  respectively.
 */
- (PXRThumborUrlBuilder *)cropWithInt:(jint)top
                              withInt:(jint)left
                              withInt:(jint)bottom
                              withInt:(jint)right;

/*!
 @brief This filter equalizes the color distribution in the image.
 */
+ (NSString *)equalize;

/*!
 @brief This filter permit to return an image sized exactly as requested wherever is its ratio by
  filling with chosen color the missing parts.Usually used with "fit-in" or "adaptive-fit-in"
 @param color integer representation of color.
 */
+ (NSString *)fillWithInt:(jint)color;

/*!
 @brief Add one or more filters to the image.
 <p>
  If you have custom filters you can supply them as a string. (e.g. 
 <code>"my_filter(1,2,3)</code>").
 @param filters Filter strings.
 @throw IllegalArgumentExceptionif no arguments supplied or an argument is <code>null</code>.
 - seealso: #brightness(int)
 - seealso: #contrast(int)
 - seealso: #fill(int)
 - seealso: #frame(String)
 - seealso: #noise(int)
 - seealso: #quality(int)
 - seealso: #rgb(int, int, int)
 - seealso: #roundCorner(int)
 - seealso: #roundCorner(int, int)
 - seealso: #roundCorner(int, int, int)
 - seealso: #sharpen(float, float, boolean)
 - seealso: #watermark(String)
 - seealso: #watermark(ThumborUrlBuilder)
 - seealso: #watermark(String, int, int)
 - seealso: #watermark(ThumborUrlBuilder, int, int)
 - seealso: #watermark(String, int, int, int)
 - seealso: #watermark(ThumborUrlBuilder, int, int, int)
 */
- (PXRThumborUrlBuilder *)filterWithNSStringArray:(IOSObjectArray *)filters;

/*!
 @brief Contrain the image size inside the resized box, scaling as needed.
 @throw IllegalStateExceptionif image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)fitIn;

/*!
 @brief Flip the image horizontally.
 @throw IllegalStateExceptionif image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)flipHorizontally;

/*!
 @brief Flip the image vertically.
 @throw IllegalStateExceptionif image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)flipVertically;

/*!
 @brief Specify the output format of the image.
 - seealso: ImageFormat
 */
+ (NSString *)formatWithPXRThumborUrlBuilder_ImageFormat:(PXRThumborUrlBuilder_ImageFormat *)format;

/*!
 @brief This filter uses a 9-patch to overlay the image.
 @param imageUrl Watermark image URL. It is very important to understand that the same image  loader that Thumbor uses will be used here.
 */
+ (NSString *)frameWithNSString:(NSString *)imageUrl;

/*!
 @brief This filter changes the image to grayscale.
 */
+ (NSString *)grayscale;

/*!
 @brief This filter adds noise to the image.
 @param amount 0 to 100 - The amount (in %) of noise to add to the image.
 @throw IllegalArgumentExceptionif <code>amount</code> outside bounds.
 */
+ (NSString *)noiseWithInt:(jint)amount;

/*!
 @brief This filter tells thumbor not to upscale your images.
 */
+ (NSString *)noUpscale;

/*!
 @brief This filter changes the overall quality of the JPEG image (does nothing for PNGs or GIFs).
 @param amount 0 to 100 - The quality level (in %) that the end image will feature.
 @throw IllegalArgumentExceptionif <code>amount</code> outside bounds.
 */
+ (NSString *)qualityWithInt:(jint)amount;

/*!
 @brief Resize picture to desired size.
 @param width Desired width.
 @param height Desired height.
 @throw IllegalArgumentExceptionif <code>width</code> or <code>height</code> is less than 0 or both are
  0.
 */
- (PXRThumborUrlBuilder *)resizeWithInt:(jint)width
                                withInt:(jint)height;

/*!
 @brief This filter changes the amount of color in each of the three channels.
 @param r The amount of redness in the picture. Can range from -100 to 100 in percentage.
 @param g The amount of greenness in the picture. Can range from -100 to 100 in percentage.
 @param b The amount of blueness in the picture. Can range from -100 to 100 in percentage.
 @throw IllegalArgumentExceptionif <code>r</code>, <code>g</code>, or <code>b</code> are outside of bounds.
 */
+ (NSString *)rgbWithInt:(jint)r
                 withInt:(jint)g
                 withInt:(jint)b;

/*!
 @brief This filter rotates the given image according to the angle passed.
 @param angle The angle of rotation. Values can be either 0°, 90°, 180° or 270° – multiples of               90°. Angles equal to or greater than 360° will be replaced by their coterminal
                angle of rotation.
 */
+ (NSString *)rotateWithInt:(jint)angle;

/*!
 @brief This filter adds rounded corners to the image using the white as the background.
 @param radius amount of pixels to use as radius.
 */
+ (NSString *)roundCornerWithInt:(jint)radius;

/*!
 @brief This filter adds rounded corners to the image using the specified color as the background.
 @param radius amount of pixels to use as radius.
 @param color fill color for clipped region.
 */
+ (NSString *)roundCornerWithInt:(jint)radius
                         withInt:(jint)color;

/*!
 @brief This filter adds rounded corners to the image using the specified color as the background.
 @param radiusInner amount of pixels to use as radius.
 @param radiusOuter specifies the second value for the ellipse used for the radius. Use 0 for  no value.
 @param color fill color for clipped region.
 */
+ (NSString *)roundCornerWithInt:(jint)radiusInner
                         withInt:(jint)radiusOuter
                         withInt:(jint)color;

/*!
 @brief This filter enhances apparent sharpness of the image.It's heavily based on Marco Rossini's
  excellent Wavelet sharpen GIMP plugin.
 Check http://registry.gimp.org/node/9836 for details
  about how it work.
 @param amount Sharpen amount. Typical values are between 0.0 and 10.0.
 @param radius Sharpen radius. Typical values are between 0.0 and 2.0.
 @param luminanceOnly Sharpen only luminance channel.
 */
+ (NSString *)sharpenWithFloat:(jfloat)amount
                     withFloat:(jfloat)radius
                   withBoolean:(jboolean)luminanceOnly;

/*!
 @brief Use smart cropping for determining the important portion of an image.
 @throw IllegalStateExceptionif image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)smart;

/*!
 @brief This filter strips the ICC profile from the image.
 */
+ (NSString *)stripicc;

/*!
 @brief Build the metadata URL.This will either call <code>toMetaSafe()</code> or <code>toMetaUnsafe()</code>
  depending on whether a key was set.
 */
- (NSString *)toMeta;

/*!
 @brief Build a safe version of the metadata URL.Requires a non-<code>null</code> key.
 */
- (NSString *)toMetaSafe;

/*!
 @brief Build an unsafe version of the metadata URL.
 */
- (NSString *)toMetaUnsafe;

- (NSString *)description;

/*!
 @brief Build the URL.This will either call <code>toUrlSafe()</code> or <code>toUrlUnsafe()</code> depending
  on whether a key was set.
 */
- (NSString *)toUrl;

/*!
 @brief Build a safe version of the URL.Requires a non-<code>null</code> key.
 */
- (NSString *)toUrlSafe;

/*!
 @brief Build an unsafe version of the URL.
 */
- (NSString *)toUrlUnsafe;

/*!
 @brief Removing surrounding space in image.
 */
- (PXRThumborUrlBuilder *)trim;

/*!
 @brief Removing surrounding space in image.Get trim color from specified pixel.
 @param value orientation from where to get the pixel color.
 */
- (PXRThumborUrlBuilder *)trimWithPXRThumborUrlBuilder_TrimPixelColor:(PXRThumborUrlBuilder_TrimPixelColor *)value;

/*!
 @brief Removing surrounding space in image.Get trim color from specified pixel.
 @param value orientation from where to get the pixel color.
 @param colorTolerance 0 - 442. This is the euclidian distance  between the colors of the reference pixel and the surrounding pixels is used.
   If the distance is within the tolerance they'll get trimmed.
 */
- (PXRThumborUrlBuilder *)trimWithPXRThumborUrlBuilder_TrimPixelColor:(PXRThumborUrlBuilder_TrimPixelColor *)value
                                                              withInt:(jint)colorTolerance;

/*!
 @brief This filter adds a watermark to the image at (0, 0).
 @param imageUrl Watermark image URL. It is very important to understand that the same image  loader that Thumbor uses will be used here.
 @throw IllegalArgumentExceptionif <code>image</code> is blank.
 */
+ (NSString *)watermarkWithNSString:(NSString *)imageUrl;

/*!
 @brief This filter adds a watermark to the image.
 @param imageUrl Watermark image URL. It is very important to understand that the same image  loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position  from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position  from the top and negative numbers indicate position from the bottom.
 @throw IllegalArgumentExceptionif <code>image</code> is blank.
 */
+ (NSString *)watermarkWithNSString:(NSString *)imageUrl
                            withInt:(jint)x
                            withInt:(jint)y;

/*!
 @brief This filter adds a watermark to the image.
 @param imageUrl Watermark image URL. It is very important to understand that the same image  loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position  from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position  from the top and negative numbers indicate position from the bottom.
 @param transparency Watermark image transparency. Should be a number between 0 (fully opaque)  and 100 (fully transparent).
 @throw IllegalArgumentExceptionif <code>image</code> is blank or <code>transparency</code> is outside
  bounds.
 */
+ (NSString *)watermarkWithNSString:(NSString *)imageUrl
                            withInt:(jint)x
                            withInt:(jint)y
                            withInt:(jint)transparency;

/*!
 @brief This filter adds a watermark to the image at (0, 0).
 @param image Watermark image URL. It is very important to understand that the same image  loader that Thumbor uses will be used here.
 @throw IllegalArgumentExceptionif <code>image</code> is null.
 */
+ (NSString *)watermarkWithPXRThumborUrlBuilder:(PXRThumborUrlBuilder *)image;

/*!
 @brief This filter adds a watermark to the image.
 @param image Watermark image URL. It is very important to understand that the same image  loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position  from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position  from the top and negative numbers indicate position from the bottom.
 @throw IllegalArgumentExceptionif <code>image</code> is null.
 */
+ (NSString *)watermarkWithPXRThumborUrlBuilder:(PXRThumborUrlBuilder *)image
                                        withInt:(jint)x
                                        withInt:(jint)y;

/*!
 @brief This filter adds a watermark to the image.
 @param image Watermark image URL. It is very important to understand that the same image  loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position  from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position  from the top and negative numbers indicate position from the bottom.
 @param transparency Watermark image transparency. Should be a number between 0 (fully opaque)  and 100 (fully transparent).
 @throw IllegalArgumentExceptionif <code>image</code> is null.
 */
+ (NSString *)watermarkWithPXRThumborUrlBuilder:(PXRThumborUrlBuilder *)image
                                        withInt:(jint)x
                                        withInt:(jint)y
                                        withInt:(jint)transparency;

#pragma mark Package-Private

- (instancetype __nonnull)initWithNSString:(NSString *)host
                              withNSString:(NSString *)key
                              withNSString:(NSString *)image;

/*!
 @brief Assemble the configuration section of the URL.
 */
- (JavaLangStringBuilder *)assembleConfigWithBoolean:(jboolean)meta;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PXRThumborUrlBuilder)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, image_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, host_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, key_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, cropHorizontalAlign_, PXRThumborUrlBuilder_HorizontalAlign *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, cropVerticalAlign_, PXRThumborUrlBuilder_VerticalAlign *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, trimPixelColor_, PXRThumborUrlBuilder_TrimPixelColor *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, filters_, id<JavaUtilList>)

/*!
 @brief Original size for image width or height.
 */
inline jint PXRThumborUrlBuilder_get_ORIGINAL_SIZE(void);
#define PXRThumborUrlBuilder_ORIGINAL_SIZE ((jint) 0x80000000)
J2OBJC_STATIC_FIELD_CONSTANT(PXRThumborUrlBuilder, ORIGINAL_SIZE, jint)

FOUNDATION_EXPORT void PXRThumborUrlBuilder_initWithNSString_withNSString_withNSString_(PXRThumborUrlBuilder *self, NSString *host, NSString *key, NSString *image);

FOUNDATION_EXPORT PXRThumborUrlBuilder *new_PXRThumborUrlBuilder_initWithNSString_withNSString_withNSString_(NSString *host, NSString *key, NSString *image) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PXRThumborUrlBuilder *create_PXRThumborUrlBuilder_initWithNSString_withNSString_withNSString_(NSString *host, NSString *key, NSString *image);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_brightnessWithInt_(jint amount);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_contrastWithInt_(jint amount);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_noiseWithInt_(jint amount);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_qualityWithInt_(jint amount);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_rgbWithInt_withInt_withInt_(jint r, jint g, jint b);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_roundCornerWithInt_(jint radius);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_roundCornerWithInt_withInt_(jint radius, jint color);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_roundCornerWithInt_withInt_withInt_(jint radiusInner, jint radiusOuter, jint color);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithNSString_(NSString *imageUrl);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithPXRThumborUrlBuilder_(PXRThumborUrlBuilder *image);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithNSString_withInt_withInt_(NSString *imageUrl, jint x, jint y);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithPXRThumborUrlBuilder_withInt_withInt_(PXRThumborUrlBuilder *image, jint x, jint y);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithNSString_withInt_withInt_withInt_(NSString *imageUrl, jint x, jint y, jint transparency);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithPXRThumborUrlBuilder_withInt_withInt_withInt_(PXRThumborUrlBuilder *image, jint x, jint y, jint transparency);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_sharpenWithFloat_withFloat_withBoolean_(jfloat amount, jfloat radius, jboolean luminanceOnly);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_fillWithInt_(jint color);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_formatWithPXRThumborUrlBuilder_ImageFormat_(PXRThumborUrlBuilder_ImageFormat *format);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_frameWithNSString_(NSString *imageUrl);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_stripicc(void);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_grayscale(void);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_equalize(void);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_blurWithInt_(jint radius);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_blurWithInt_withInt_(jint radius, jint sigma);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_noUpscale(void);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_rotateWithInt_(jint angle);

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder)

@compatibility_alias ComSquareupPollexorThumborUrlBuilder PXRThumborUrlBuilder;

#endif

#if !defined (PXRThumborUrlBuilder_HorizontalAlign_) && (INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder || defined(INCLUDE_PXRThumborUrlBuilder_HorizontalAlign))
#define PXRThumborUrlBuilder_HorizontalAlign_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, PXRThumborUrlBuilder_HorizontalAlign_Enum) {
  PXRThumborUrlBuilder_HorizontalAlign_Enum_LEFT = 0,
  PXRThumborUrlBuilder_HorizontalAlign_Enum_CENTER = 1,
  PXRThumborUrlBuilder_HorizontalAlign_Enum_RIGHT = 2,
};

/*!
 @brief Horizontal alignment for crop positioning.
 */
@interface PXRThumborUrlBuilder_HorizontalAlign : JavaLangEnum {
 @public
  NSString *value_;
}

#pragma mark Public

+ (PXRThumborUrlBuilder_HorizontalAlign *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PXRThumborUrlBuilder_HorizontalAlign_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PXRThumborUrlBuilder_HorizontalAlign)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PXRThumborUrlBuilder_HorizontalAlign *PXRThumborUrlBuilder_HorizontalAlign_values_[];

inline PXRThumborUrlBuilder_HorizontalAlign *PXRThumborUrlBuilder_HorizontalAlign_get_LEFT(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_HorizontalAlign, LEFT)

inline PXRThumborUrlBuilder_HorizontalAlign *PXRThumborUrlBuilder_HorizontalAlign_get_CENTER(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_HorizontalAlign, CENTER)

inline PXRThumborUrlBuilder_HorizontalAlign *PXRThumborUrlBuilder_HorizontalAlign_get_RIGHT(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_HorizontalAlign, RIGHT)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder_HorizontalAlign, value_, NSString *)

FOUNDATION_EXPORT IOSObjectArray *PXRThumborUrlBuilder_HorizontalAlign_values(void);

FOUNDATION_EXPORT PXRThumborUrlBuilder_HorizontalAlign *PXRThumborUrlBuilder_HorizontalAlign_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PXRThumborUrlBuilder_HorizontalAlign *PXRThumborUrlBuilder_HorizontalAlign_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder_HorizontalAlign)

#endif

#if !defined (PXRThumborUrlBuilder_VerticalAlign_) && (INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder || defined(INCLUDE_PXRThumborUrlBuilder_VerticalAlign))
#define PXRThumborUrlBuilder_VerticalAlign_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, PXRThumborUrlBuilder_VerticalAlign_Enum) {
  PXRThumborUrlBuilder_VerticalAlign_Enum_TOP = 0,
  PXRThumborUrlBuilder_VerticalAlign_Enum_MIDDLE = 1,
  PXRThumborUrlBuilder_VerticalAlign_Enum_BOTTOM = 2,
};

/*!
 @brief Vertical alignment for crop positioning.
 */
@interface PXRThumborUrlBuilder_VerticalAlign : JavaLangEnum {
 @public
  NSString *value_;
}

#pragma mark Public

+ (PXRThumborUrlBuilder_VerticalAlign *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PXRThumborUrlBuilder_VerticalAlign_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PXRThumborUrlBuilder_VerticalAlign)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PXRThumborUrlBuilder_VerticalAlign *PXRThumborUrlBuilder_VerticalAlign_values_[];

inline PXRThumborUrlBuilder_VerticalAlign *PXRThumborUrlBuilder_VerticalAlign_get_TOP(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_VerticalAlign, TOP)

inline PXRThumborUrlBuilder_VerticalAlign *PXRThumborUrlBuilder_VerticalAlign_get_MIDDLE(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_VerticalAlign, MIDDLE)

inline PXRThumborUrlBuilder_VerticalAlign *PXRThumborUrlBuilder_VerticalAlign_get_BOTTOM(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_VerticalAlign, BOTTOM)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder_VerticalAlign, value_, NSString *)

FOUNDATION_EXPORT IOSObjectArray *PXRThumborUrlBuilder_VerticalAlign_values(void);

FOUNDATION_EXPORT PXRThumborUrlBuilder_VerticalAlign *PXRThumborUrlBuilder_VerticalAlign_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PXRThumborUrlBuilder_VerticalAlign *PXRThumborUrlBuilder_VerticalAlign_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder_VerticalAlign)

#endif

#if !defined (PXRThumborUrlBuilder_TrimPixelColor_) && (INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder || defined(INCLUDE_PXRThumborUrlBuilder_TrimPixelColor))
#define PXRThumborUrlBuilder_TrimPixelColor_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, PXRThumborUrlBuilder_TrimPixelColor_Enum) {
  PXRThumborUrlBuilder_TrimPixelColor_Enum_TOP_LEFT = 0,
  PXRThumborUrlBuilder_TrimPixelColor_Enum_BOTTOM_RIGHT = 1,
};

/*!
 @brief Orientation from where to get the pixel color for trim.
 */
@interface PXRThumborUrlBuilder_TrimPixelColor : JavaLangEnum {
 @public
  NSString *value_;
}

#pragma mark Public

+ (PXRThumborUrlBuilder_TrimPixelColor *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PXRThumborUrlBuilder_TrimPixelColor_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PXRThumborUrlBuilder_TrimPixelColor)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PXRThumborUrlBuilder_TrimPixelColor *PXRThumborUrlBuilder_TrimPixelColor_values_[];

inline PXRThumborUrlBuilder_TrimPixelColor *PXRThumborUrlBuilder_TrimPixelColor_get_TOP_LEFT(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_TrimPixelColor, TOP_LEFT)

inline PXRThumborUrlBuilder_TrimPixelColor *PXRThumborUrlBuilder_TrimPixelColor_get_BOTTOM_RIGHT(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_TrimPixelColor, BOTTOM_RIGHT)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder_TrimPixelColor, value_, NSString *)

FOUNDATION_EXPORT IOSObjectArray *PXRThumborUrlBuilder_TrimPixelColor_values(void);

FOUNDATION_EXPORT PXRThumborUrlBuilder_TrimPixelColor *PXRThumborUrlBuilder_TrimPixelColor_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PXRThumborUrlBuilder_TrimPixelColor *PXRThumborUrlBuilder_TrimPixelColor_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder_TrimPixelColor)

#endif

#if !defined (PXRThumborUrlBuilder_ImageFormat_) && (INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder || defined(INCLUDE_PXRThumborUrlBuilder_ImageFormat))
#define PXRThumborUrlBuilder_ImageFormat_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, PXRThumborUrlBuilder_ImageFormat_Enum) {
  PXRThumborUrlBuilder_ImageFormat_Enum_GIF = 0,
  PXRThumborUrlBuilder_ImageFormat_Enum_JPEG = 1,
  PXRThumborUrlBuilder_ImageFormat_Enum_PNG = 2,
  PXRThumborUrlBuilder_ImageFormat_Enum_WEBP = 3,
};

/*!
 @brief Image formats supported by Thumbor.
 */
@interface PXRThumborUrlBuilder_ImageFormat : JavaLangEnum {
 @public
  NSString *value_;
}

#pragma mark Public

+ (PXRThumborUrlBuilder_ImageFormat *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PXRThumborUrlBuilder_ImageFormat_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PXRThumborUrlBuilder_ImageFormat)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PXRThumborUrlBuilder_ImageFormat *PXRThumborUrlBuilder_ImageFormat_values_[];

inline PXRThumborUrlBuilder_ImageFormat *PXRThumborUrlBuilder_ImageFormat_get_GIF(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_ImageFormat, GIF)

inline PXRThumborUrlBuilder_ImageFormat *PXRThumborUrlBuilder_ImageFormat_get_JPEG(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_ImageFormat, JPEG)

inline PXRThumborUrlBuilder_ImageFormat *PXRThumborUrlBuilder_ImageFormat_get_PNG(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_ImageFormat, PNG)

inline PXRThumborUrlBuilder_ImageFormat *PXRThumborUrlBuilder_ImageFormat_get_WEBP(void);
J2OBJC_ENUM_CONSTANT(PXRThumborUrlBuilder_ImageFormat, WEBP)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder_ImageFormat, value_, NSString *)

FOUNDATION_EXPORT IOSObjectArray *PXRThumborUrlBuilder_ImageFormat_values(void);

FOUNDATION_EXPORT PXRThumborUrlBuilder_ImageFormat *PXRThumborUrlBuilder_ImageFormat_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PXRThumborUrlBuilder_ImageFormat *PXRThumborUrlBuilder_ImageFormat_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder_ImageFormat)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComSquareupPollexorThumborUrlBuilder")