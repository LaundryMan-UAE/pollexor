//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/parsers/SAXParserImpl.java
//

#ifndef _OrgApacheHarmonyXmlParsersSAXParserImpl_H_
#define _OrgApacheHarmonyXmlParsersSAXParserImpl_H_

@protocol JavaUtilMap;
@protocol OrgXmlSaxParser;
@protocol OrgXmlSaxXMLReader;

#include "J2ObjC_header.h"
#include "javax/xml/parsers/SAXParser.h"

@interface OrgApacheHarmonyXmlParsersSAXParserImpl : JavaxXmlParsersSAXParser {
}

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)initialFeatures;

- (void)reset;

- (id<OrgXmlSaxParser>)getParser;

- (id)getPropertyWithNSString:(NSString *)name;

- (id<OrgXmlSaxXMLReader>)getXMLReader;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlParsersSAXParserImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlParsersSAXParserImpl)

#endif // _OrgApacheHarmonyXmlParsersSAXParserImpl_H_
