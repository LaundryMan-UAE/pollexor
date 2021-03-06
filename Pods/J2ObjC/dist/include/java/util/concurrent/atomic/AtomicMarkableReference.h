//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicMarkableReference.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicMarkableReference_H_
#define _JavaUtilConcurrentAtomicAtomicMarkableReference_H_

@class IOSBooleanArray;
@class JavaUtilConcurrentAtomicAtomicMarkableReference_Pair;

#include "J2ObjC_header.h"

@interface JavaUtilConcurrentAtomicAtomicMarkableReference : NSObject {
}

- (instancetype)initWithId:(id)initialRef
               withBoolean:(jboolean)initialMark;

- (id)getReference;

- (jboolean)isMarked;

- (id)getWithBooleanArray:(IOSBooleanArray *)markHolder;

- (jboolean)weakCompareAndSetWithId:(id)expectedReference
                             withId:(id)newReference
                        withBoolean:(jboolean)expectedMark
                        withBoolean:(jboolean)newMark;

- (jboolean)compareAndSetWithId:(id)expectedReference
                         withId:(id)newReference
                    withBoolean:(jboolean)expectedMark
                    withBoolean:(jboolean)newMark;

- (void)setWithId:(id)newReference
      withBoolean:(jboolean)newMark;

- (jboolean)attemptMarkWithId:(id)expectedReference
                  withBoolean:(jboolean)newMark;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicMarkableReference)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicMarkableReference)

@interface JavaUtilConcurrentAtomicAtomicMarkableReference_Pair : NSObject {
 @public
  id reference_;
  jboolean mark_;
}

+ (JavaUtilConcurrentAtomicAtomicMarkableReference_Pair *)ofWithId:(id)reference
                                                       withBoolean:(jboolean)mark;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicMarkableReference_Pair)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentAtomicAtomicMarkableReference_Pair, reference_, id)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicMarkableReference_Pair *JavaUtilConcurrentAtomicAtomicMarkableReference_Pair_ofWithId_withBoolean_(id reference, jboolean mark);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicMarkableReference_Pair)

#endif // _JavaUtilConcurrentAtomicAtomicMarkableReference_H_
