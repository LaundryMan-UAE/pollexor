//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ThreadPoolExecutor.java
//

#ifndef _JavaUtilConcurrentThreadPoolExecutor_H_
#define _JavaUtilConcurrentThreadPoolExecutor_H_

@class JavaLangRuntimePermission;
@class JavaLangThread;
@class JavaLangThrowable;
@class JavaUtilConcurrentAtomicAtomicInteger;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentThreadPoolExecutor_Worker;
@class JavaUtilConcurrentTimeUnitEnum;
@class JavaUtilHashSet;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilConcurrentLocksCondition;
@protocol JavaUtilConcurrentThreadFactory;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/lang/Runnable.h"
#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/RejectedExecutionHandler.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"

#define JavaUtilConcurrentThreadPoolExecutor_CAPACITY 536870911
#define JavaUtilConcurrentThreadPoolExecutor_COUNT_BITS 29
#define JavaUtilConcurrentThreadPoolExecutor_ONLY_ONE YES
#define JavaUtilConcurrentThreadPoolExecutor_RUNNING -536870912
#define JavaUtilConcurrentThreadPoolExecutor_SHUTDOWN 0
#define JavaUtilConcurrentThreadPoolExecutor_STOP 536870912
#define JavaUtilConcurrentThreadPoolExecutor_TERMINATED 1610612736
#define JavaUtilConcurrentThreadPoolExecutor_TIDYING 1073741824

@interface JavaUtilConcurrentThreadPoolExecutor : JavaUtilConcurrentAbstractExecutorService {
}

- (void)tryTerminate;

- (void)rejectWithJavaLangRunnable:(id<JavaLangRunnable>)command;

- (void)onShutdown;

- (jboolean)isRunningOrShutdownWithBoolean:(jboolean)shutdownOK;

- (void)runWorkerWithJavaUtilConcurrentThreadPoolExecutor_Worker:(JavaUtilConcurrentThreadPoolExecutor_Worker *)w;

- (instancetype)initWithInt:(jint)corePoolSize
                    withInt:(jint)maximumPoolSize
                   withLong:(jlong)keepAliveTime
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit
withJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)workQueue;

- (instancetype)initWithInt:(jint)corePoolSize
                    withInt:(jint)maximumPoolSize
                   withLong:(jlong)keepAliveTime
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit
withJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)workQueue
withJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory;

- (instancetype)initWithInt:(jint)corePoolSize
                    withInt:(jint)maximumPoolSize
                   withLong:(jlong)keepAliveTime
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit
withJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)workQueue
withJavaUtilConcurrentRejectedExecutionHandler:(id<JavaUtilConcurrentRejectedExecutionHandler>)handler;

- (instancetype)initWithInt:(jint)corePoolSize
                    withInt:(jint)maximumPoolSize
                   withLong:(jlong)keepAliveTime
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit
withJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)workQueue
withJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory
withJavaUtilConcurrentRejectedExecutionHandler:(id<JavaUtilConcurrentRejectedExecutionHandler>)handler;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (jboolean)isShutdown;

- (jboolean)isTerminating;

- (jboolean)isTerminated;

- (jboolean)awaitTerminationWithLong:(jlong)timeout
  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)dealloc;

- (void)setThreadFactoryWithJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory;

- (id<JavaUtilConcurrentThreadFactory>)getThreadFactory;

- (void)setRejectedExecutionHandlerWithJavaUtilConcurrentRejectedExecutionHandler:(id<JavaUtilConcurrentRejectedExecutionHandler>)handler;

- (id<JavaUtilConcurrentRejectedExecutionHandler>)getRejectedExecutionHandler;

- (void)setCorePoolSizeWithInt:(jint)corePoolSize;

- (jint)getCorePoolSize;

- (jboolean)prestartCoreThread;

- (void)ensurePrestart;

- (jint)prestartAllCoreThreads;

- (jboolean)allowsCoreThreadTimeOut;

- (void)allowCoreThreadTimeOutWithBoolean:(jboolean)value;

- (void)setMaximumPoolSizeWithInt:(jint)maximumPoolSize;

- (jint)getMaximumPoolSize;

- (void)setKeepAliveTimeWithLong:(jlong)time
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jlong)getKeepAliveTimeWithJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id<JavaUtilConcurrentBlockingQueue>)getQueue;

- (jboolean)removeWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (void)purge;

- (jint)getPoolSize;

- (jint)getActiveCount;

- (jint)getLargestPoolSize;

- (jlong)getTaskCount;

- (jlong)getCompletedTaskCount;

- (NSString *)description;

- (void)beforeExecuteWithJavaLangThread:(JavaLangThread *)t
                   withJavaLangRunnable:(id<JavaLangRunnable>)r;

- (void)afterExecuteWithJavaLangRunnable:(id<JavaLangRunnable>)r
                   withJavaLangThrowable:(JavaLangThrowable *)t;

- (void)terminated;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentThreadPoolExecutor_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentThreadPoolExecutor)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, COUNT_BITS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, RUNNING, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, SHUTDOWN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, STOP, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, TIDYING, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, TERMINATED, jint)

FOUNDATION_EXPORT id<JavaUtilConcurrentRejectedExecutionHandler> JavaUtilConcurrentThreadPoolExecutor_defaultHandler_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, defaultHandler_, id<JavaUtilConcurrentRejectedExecutionHandler>)

FOUNDATION_EXPORT JavaLangRuntimePermission *JavaUtilConcurrentThreadPoolExecutor_shutdownPerm_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, shutdownPerm_, JavaLangRuntimePermission *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor, ONLY_ONE, jboolean)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadPoolExecutor)

#define JavaUtilConcurrentThreadPoolExecutor_Worker_serialVersionUID 6138294804551838833LL

@interface JavaUtilConcurrentThreadPoolExecutor_Worker : JavaUtilConcurrentLocksAbstractQueuedSynchronizer < JavaLangRunnable > {
 @public
  JavaLangThread *thread_;
  id<JavaLangRunnable> firstTask_;
  jlong completedTasks_;
}

- (instancetype)initWithJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)outer$
                                        withJavaLangRunnable:(id<JavaLangRunnable>)firstTask;

- (void)run;

- (jboolean)isHeldExclusively;

- (jboolean)tryAcquireWithInt:(jint)unused;

- (jboolean)tryReleaseWithInt:(jint)unused;

- (void)lock;

- (jboolean)tryLock;

- (void)unlock;

- (jboolean)isLocked;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentThreadPoolExecutor_Worker)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentThreadPoolExecutor_Worker, thread_, JavaLangThread *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentThreadPoolExecutor_Worker, firstTask_, id<JavaLangRunnable>)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentThreadPoolExecutor_Worker, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadPoolExecutor_Worker)

@interface JavaUtilConcurrentThreadPoolExecutor_CallerRunsPolicy : NSObject < JavaUtilConcurrentRejectedExecutionHandler > {
}

- (instancetype)init;

- (void)rejectedExecutionWithJavaLangRunnable:(id<JavaLangRunnable>)r
     withJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentThreadPoolExecutor_CallerRunsPolicy)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadPoolExecutor_CallerRunsPolicy)

@interface JavaUtilConcurrentThreadPoolExecutor_AbortPolicy : NSObject < JavaUtilConcurrentRejectedExecutionHandler > {
}

- (instancetype)init;

- (void)rejectedExecutionWithJavaLangRunnable:(id<JavaLangRunnable>)r
     withJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentThreadPoolExecutor_AbortPolicy)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadPoolExecutor_AbortPolicy)

@interface JavaUtilConcurrentThreadPoolExecutor_DiscardPolicy : NSObject < JavaUtilConcurrentRejectedExecutionHandler > {
}

- (instancetype)init;

- (void)rejectedExecutionWithJavaLangRunnable:(id<JavaLangRunnable>)r
     withJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentThreadPoolExecutor_DiscardPolicy)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadPoolExecutor_DiscardPolicy)

@interface JavaUtilConcurrentThreadPoolExecutor_DiscardOldestPolicy : NSObject < JavaUtilConcurrentRejectedExecutionHandler > {
}

- (instancetype)init;

- (void)rejectedExecutionWithJavaLangRunnable:(id<JavaLangRunnable>)r
     withJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentThreadPoolExecutor_DiscardOldestPolicy)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadPoolExecutor_DiscardOldestPolicy)

#endif // _JavaUtilConcurrentThreadPoolExecutor_H_
