//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Date.java
//

#ifndef _JavaUtilDate_H_
#define _JavaUtilDate_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaLangIllegalArgumentException;
@class JavaLangStringBuilder;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"

#define JavaUtilDate_serialVersionUID 7523967970034938905LL

@interface JavaUtilDate : NSObject < JavaIoSerializable, NSCopying, JavaLangComparable > {
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)day;

- (instancetype)initWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)day
                    withInt:(jint)hour
                    withInt:(jint)minute;

- (instancetype)initWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)day
                    withInt:(jint)hour
                    withInt:(jint)minute
                    withInt:(jint)second;

- (instancetype)initWithLong:(jlong)milliseconds;

- (instancetype)initWithNSString:(NSString *)string;

- (jboolean)afterWithJavaUtilDate:(JavaUtilDate *)date;

- (jboolean)beforeWithJavaUtilDate:(JavaUtilDate *)date;

- (id)clone;

- (jint)compareToWithId:(JavaUtilDate *)date;

- (jboolean)isEqual:(id)object;

- (jint)getDate;

- (jint)getDay;

- (jint)getHours;

- (jint)getMinutes;

- (jint)getMonth;

- (jint)getSeconds;

- (jlong)getTime;

- (jint)getTimezoneOffset;

- (jint)getYear;

- (NSUInteger)hash;

+ (jlong)parseWithNSString:(NSString *)string;

- (void)setDateWithInt:(jint)day;

- (void)setHoursWithInt:(jint)hour;

- (void)setMinutesWithInt:(jint)minute;

- (void)setMonthWithInt:(jint)month;

- (void)setSecondsWithInt:(jint)second;

- (void)setTimeWithLong:(jlong)milliseconds;

- (void)setYearWithInt:(jint)year;

- (NSString *)toGMTString;

- (NSString *)toLocaleString;

- (NSString *)description;

+ (jlong)UTCWithInt:(jint)year
            withInt:(jint)month
            withInt:(jint)day
            withInt:(jint)hour
            withInt:(jint)minute
            withInt:(jint)second;

@end

FOUNDATION_EXPORT BOOL JavaUtilDate_initialized;
J2OBJC_STATIC_INIT(JavaUtilDate)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jlong JavaUtilDate_parseWithNSString_(NSString *string);

FOUNDATION_EXPORT jlong JavaUtilDate_UTCWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint day, jint hour, jint minute, jint second);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilDate, serialVersionUID, jlong)

FOUNDATION_EXPORT jint JavaUtilDate_CREATION_YEAR_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilDate, CREATION_YEAR_, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDate)

#endif // _JavaUtilDate_H_
