//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/ThumborImageFormat.java
//

#include "J2ObjC_source.h"
#include "com/squareup/pollexor/ThumborImageFormat.h"

NSString *PXRThumborImageFormat_GIF_ = @"gif";
NSString *PXRThumborImageFormat_JPEG_ = @"jpeg";
NSString *PXRThumborImageFormat_PNG_ = @"png";
NSString *PXRThumborImageFormat_WEBP_ = @"webp";

@implementation PXRThumborImageFormat

- (instancetype)init {
  PXRThumborImageFormat_init(self);
  return self;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "GIF_", NULL, 0x19, "Ljava.lang.String;", &PXRThumborImageFormat_GIF_, NULL,  },
    { "JPEG_", NULL, 0x19, "Ljava.lang.String;", &PXRThumborImageFormat_JPEG_, NULL,  },
    { "PNG_", NULL, 0x19, "Ljava.lang.String;", &PXRThumborImageFormat_PNG_, NULL,  },
    { "WEBP_", NULL, 0x19, "Ljava.lang.String;", &PXRThumborImageFormat_WEBP_, NULL,  },
  };
  static const J2ObjcClassInfo _PXRThumborImageFormat = { 2, "ThumborImageFormat", "com.squareup.pollexor", NULL, 0x1, 1, methods, 4, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_PXRThumborImageFormat;
}

@end

void PXRThumborImageFormat_init(PXRThumborImageFormat *self) {
  NSObject_init(self);
}

PXRThumborImageFormat *new_PXRThumborImageFormat_init() {
  PXRThumborImageFormat *self = [PXRThumborImageFormat alloc];
  PXRThumborImageFormat_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(PXRThumborImageFormat)