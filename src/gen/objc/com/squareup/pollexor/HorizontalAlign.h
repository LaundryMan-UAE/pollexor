//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/HorizontalAlign.java
//

#ifndef _PXRHorizontalAlign_H_
#define _PXRHorizontalAlign_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, PXRHorizontalAlign) {
  PXRHorizontalAlign_LEFT = 0,
  PXRHorizontalAlign_CENTER = 1,
  PXRHorizontalAlign_RIGHT = 2,
};

@interface PXRHorizontalAlignEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *PXRHorizontalAlignEnum_values();

+ (PXRHorizontalAlignEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT PXRHorizontalAlignEnum *PXRHorizontalAlignEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL PXRHorizontalAlignEnum_initialized;
J2OBJC_STATIC_INIT(PXRHorizontalAlignEnum)

FOUNDATION_EXPORT PXRHorizontalAlignEnum *PXRHorizontalAlignEnum_values_[];

#define PXRHorizontalAlignEnum_LEFT PXRHorizontalAlignEnum_values_[PXRHorizontalAlign_LEFT]
J2OBJC_ENUM_CONSTANT_GETTER(PXRHorizontalAlignEnum, LEFT)

#define PXRHorizontalAlignEnum_CENTER PXRHorizontalAlignEnum_values_[PXRHorizontalAlign_CENTER]
J2OBJC_ENUM_CONSTANT_GETTER(PXRHorizontalAlignEnum, CENTER)

#define PXRHorizontalAlignEnum_RIGHT PXRHorizontalAlignEnum_values_[PXRHorizontalAlign_RIGHT]
J2OBJC_ENUM_CONSTANT_GETTER(PXRHorizontalAlignEnum, RIGHT)

J2OBJC_FIELD_SETTER(PXRHorizontalAlignEnum, value_, NSString *)

typedef PXRHorizontalAlignEnum ComSquareupPollexorHorizontalAlignEnum;

J2OBJC_TYPE_LITERAL_HEADER(PXRHorizontalAlignEnum)

#endif // _PXRHorizontalAlign_H_
