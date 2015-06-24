//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/ThumborTrimPixelColor.java
//

#include "J2ObjC_source.h"
#include "com/squareup/pollexor/ThumborTrimPixelColor.h"

@interface PXRThumborTrimPixelColor () {
 @public
  NSString *top_left_;
  NSString *bottom_right_;
}

@end

J2OBJC_FIELD_SETTER(PXRThumborTrimPixelColor, top_left_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborTrimPixelColor, bottom_right_, NSString *)

@implementation PXRThumborTrimPixelColor

- (instancetype)initWithNSString:(NSString *)top_left
                    withNSString:(NSString *)bottom_right {
  PXRThumborTrimPixelColor_initWithNSString_withNSString_(self, top_left, bottom_right);
  return self;
}

- (NSString *)getTop_left {
  return top_left_;
}

- (NSString *)getBottom_right {
  return bottom_right_;
}

- (void)dealloc {
  RELEASE_(top_left_);
  RELEASE_(bottom_right_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithNSString:withNSString:", "ThumborTrimPixelColor", NULL, 0x1, NULL, NULL },
    { "getTop_left", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "getBottom_right", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "top_left_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL,  },
    { "bottom_right_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL,  },
  };
  static const J2ObjcClassInfo _PXRThumborTrimPixelColor = { 2, "ThumborTrimPixelColor", "com.squareup.pollexor", NULL, 0x1, 3, methods, 2, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_PXRThumborTrimPixelColor;
}

@end

void PXRThumborTrimPixelColor_initWithNSString_withNSString_(PXRThumborTrimPixelColor *self, NSString *top_left, NSString *bottom_right) {
  NSObject_init(self);
  PXRThumborTrimPixelColor_set_top_left_(self, top_left);
  PXRThumborTrimPixelColor_set_bottom_right_(self, bottom_right);
}

PXRThumborTrimPixelColor *new_PXRThumborTrimPixelColor_initWithNSString_withNSString_(NSString *top_left, NSString *bottom_right) {
  PXRThumborTrimPixelColor *self = [PXRThumborTrimPixelColor alloc];
  PXRThumborTrimPixelColor_initWithNSString_withNSString_(self, top_left, bottom_right);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(PXRThumborTrimPixelColor)
