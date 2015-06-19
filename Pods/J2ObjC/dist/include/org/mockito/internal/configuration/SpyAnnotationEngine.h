//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/SpyAnnotationEngine.java
//

#ifndef _OrgMockitoInternalConfigurationSpyAnnotationEngine_H_
#define _OrgMockitoInternalConfigurationSpyAnnotationEngine_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectField;
@protocol JavaLangAnnotationAnnotation;

#include "J2ObjC_header.h"
#include "org/mockito/configuration/AnnotationEngine.h"

@interface OrgMockitoInternalConfigurationSpyAnnotationEngine : NSObject < OrgMockitoConfigurationAnnotationEngine > {
}

- (id)createMockForWithJavaLangAnnotationAnnotation:(id<JavaLangAnnotationAnnotation>)annotation
                           withJavaLangReflectField:(JavaLangReflectField *)field;

- (void)processWithIOSClass:(IOSClass *)context
                     withId:(id)testInstance;

- (void)assertNoIncompatibleAnnotationsWithIOSClass:(IOSClass *)annotation
                           withJavaLangReflectField:(JavaLangReflectField *)field
                                  withIOSClassArray:(IOSObjectArray *)undesiredAnnotations;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationSpyAnnotationEngine)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationSpyAnnotationEngine)

#endif // _OrgMockitoInternalConfigurationSpyAnnotationEngine_H_