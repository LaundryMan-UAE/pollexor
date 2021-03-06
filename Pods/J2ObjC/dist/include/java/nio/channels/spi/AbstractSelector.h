//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/spi/AbstractSelector.java
//

#ifndef _JavaNioChannelsSpiAbstractSelector_H_
#define _JavaNioChannelsSpiAbstractSelector_H_

@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSpiAbstractSelectableChannel;
@class JavaNioChannelsSpiAbstractSelectionKey;
@class JavaNioChannelsSpiSelectorProvider;
@class JavaUtilConcurrentAtomicAtomicBoolean;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"
#include "java/lang/Runnable.h"
#include "java/nio/channels/Selector.h"

@interface JavaNioChannelsSpiAbstractSelector : JavaNioChannelsSelector {
}

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

- (void)close;

- (void)implCloseSelector;

- (jboolean)isOpen;

- (JavaNioChannelsSpiSelectorProvider *)provider;

- (id<JavaUtilSet>)cancelledKeys;

- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSpiAbstractSelectableChannel:(JavaNioChannelsSpiAbstractSelectableChannel *)channel
                                                                                   withInt:(jint)operations
                                                                                    withId:(id)attachment;

- (void)deregisterWithJavaNioChannelsSpiAbstractSelectionKey:(JavaNioChannelsSpiAbstractSelectionKey *)key;

- (void)begin;

- (void)end;

- (void)cancelWithJavaNioChannelsSelectionKey:(JavaNioChannelsSelectionKey *)key;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelector)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelector)

@interface JavaNioChannelsSpiAbstractSelector_WakeUpTask : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithJavaNioChannelsSpiAbstractSelector:(JavaNioChannelsSpiAbstractSelector *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelector_WakeUpTask)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelector_WakeUpTask)

#endif // _JavaNioChannelsSpiAbstractSelector_H_
