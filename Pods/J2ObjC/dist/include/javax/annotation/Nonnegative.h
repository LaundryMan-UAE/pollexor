//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/jsr305/build_result/java/javax/annotation/Nonnegative.java
//

#ifndef _JavaxAnnotationNonnegative_H_
#define _JavaxAnnotationNonnegative_H_

@class JavaxAnnotationMetaWhenEnum;

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"
#include "javax/annotation/meta/TypeQualifierValidator.h"

@protocol JavaxAnnotationNonnegative < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhenEnum *when;

@end

@interface JavaxAnnotationNonnegative : NSObject < JavaxAnnotationNonnegative > {
 @private
  JavaxAnnotationMetaWhenEnum *when;
}

- (instancetype)initWithWhen:(JavaxAnnotationMetaWhenEnum *)when_;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnegative)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnegative)

@interface JavaxAnnotationNonnegative_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator > {
}

- (JavaxAnnotationMetaWhenEnum *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationNonnegative>)annotation
                                                                           withId:(id)v;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnegative_Checker)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnegative_Checker)

#endif // _JavaxAnnotationNonnegative_H_
