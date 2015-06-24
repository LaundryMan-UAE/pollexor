//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/ThumborVerticalAlign.java
//

#include "J2ObjC_source.h"
#include "com/squareup/pollexor/ThumborVerticalAlign.h"

@interface PXRThumborVerticalAlign () {
 @public
  NSString *top_;
  NSString *middle_;
  NSString *bottom_;
}

@end

J2OBJC_FIELD_SETTER(PXRThumborVerticalAlign, top_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborVerticalAlign, middle_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborVerticalAlign, bottom_, NSString *)

@implementation PXRThumborVerticalAlign

- (instancetype)initWithNSString:(NSString *)top
                    withNSString:(NSString *)middle
                    withNSString:(NSString *)bottom {
  PXRThumborVerticalAlign_initWithNSString_withNSString_withNSString_(self, top, middle, bottom);
  return self;
}

- (NSString *)getTop {
  return top_;
}

- (NSString *)getMiddle {
  return middle_;
}

- (NSString *)getBottom {
  return bottom_;
}

- (void)dealloc {
  RELEASE_(top_);
  RELEASE_(middle_);
  RELEASE_(bottom_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithNSString:withNSString:withNSString:", "ThumborVerticalAlign", NULL, 0x1, NULL, NULL },
    { "getTop", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "getMiddle", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "getBottom", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "top_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL,  },
    { "middle_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL,  },
    { "bottom_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL,  },
  };
  static const J2ObjcClassInfo _PXRThumborVerticalAlign = { 2, "ThumborVerticalAlign", "com.squareup.pollexor", NULL, 0x1, 4, methods, 3, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_PXRThumborVerticalAlign;
}

@end

void PXRThumborVerticalAlign_initWithNSString_withNSString_withNSString_(PXRThumborVerticalAlign *self, NSString *top, NSString *middle, NSString *bottom) {
  NSObject_init(self);
  PXRThumborVerticalAlign_set_top_(self, top);
  PXRThumborVerticalAlign_set_middle_(self, middle);
  PXRThumborVerticalAlign_set_bottom_(self, bottom);
}

PXRThumborVerticalAlign *new_PXRThumborVerticalAlign_initWithNSString_withNSString_withNSString_(NSString *top, NSString *middle, NSString *bottom) {
  PXRThumborVerticalAlign *self = [PXRThumborVerticalAlign alloc];
  PXRThumborVerticalAlign_initWithNSString_withNSString_withNSString_(self, top, middle, bottom);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(PXRThumborVerticalAlign)