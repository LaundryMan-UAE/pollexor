//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/DirectByteBuffer.java
//

#ifndef _JavaNioDirectByteBuffer_H_
#define _JavaNioDirectByteBuffer_H_

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSShortArray;
@class JavaNioByteBuffer;
@class JavaNioChannelsFileChannel_MapMode;
@class JavaNioCharBuffer;
@class JavaNioDoubleBuffer;
@class JavaNioFloatBuffer;
@class JavaNioIntBuffer;
@class JavaNioLongBuffer;
@class JavaNioMemoryBlock;
@class JavaNioShortBuffer;

#include "J2ObjC_header.h"
#include "java/nio/MappedByteBuffer.h"

@interface JavaNioDirectByteBuffer : JavaNioMappedByteBuffer {
 @public
  jint offset_;
}

- (instancetype)initWithJavaNioMemoryBlock:(JavaNioMemoryBlock *)block
                                   withInt:(jint)capacity
                                   withInt:(jint)offset
                               withBoolean:(jboolean)isReadOnly
    withJavaNioChannelsFileChannel_MapMode:(JavaNioChannelsFileChannel_MapMode *)mapMode;

- (instancetype)initWithLong:(jlong)address
                     withInt:(jint)capacity;

- (JavaNioByteBuffer *)asReadOnlyBuffer;

- (JavaNioByteBuffer *)compact;

- (JavaNioByteBuffer *)duplicate;

- (JavaNioByteBuffer *)slice;

- (jboolean)isReadOnly;

- (IOSByteArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioByteBuffer *)getWithByteArray:(IOSByteArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)byteCount;

- (void)getWithCharArray:(IOSCharArray *)dst
                 withInt:(jint)dstOffset
                 withInt:(jint)charCount;

- (void)getWithDoubleArray:(IOSDoubleArray *)dst
                   withInt:(jint)dstOffset
                   withInt:(jint)doubleCount;

- (void)getWithFloatArray:(IOSFloatArray *)dst
                  withInt:(jint)dstOffset
                  withInt:(jint)floatCount;

- (void)getWithIntArray:(IOSIntArray *)dst
                withInt:(jint)dstOffset
                withInt:(jint)intCount;

- (void)getWithLongArray:(IOSLongArray *)dst
                 withInt:(jint)dstOffset
                 withInt:(jint)longCount;

- (void)getWithShortArray:(IOSShortArray *)dst
                  withInt:(jint)dstOffset
                  withInt:(jint)shortCount;

- (jbyte)get;

- (jbyte)getWithInt:(jint)index;

- (jchar)getChar;

- (jchar)getCharWithInt:(jint)index;

- (jdouble)getDouble;

- (jdouble)getDoubleWithInt:(jint)index;

- (jfloat)getFloat;

- (jfloat)getFloatWithInt:(jint)index;

- (jint)getInt;

- (jint)getIntWithInt:(jint)index;

- (jlong)getLong;

- (jlong)getLongWithInt:(jint)index;

- (jshort)getShort;

- (jshort)getShortWithInt:(jint)index;

- (jboolean)isDirect;

- (jboolean)isValid;

- (void)free;

- (JavaNioCharBuffer *)asCharBuffer;

- (JavaNioDoubleBuffer *)asDoubleBuffer;

- (JavaNioFloatBuffer *)asFloatBuffer;

- (JavaNioIntBuffer *)asIntBuffer;

- (JavaNioLongBuffer *)asLongBuffer;

- (JavaNioShortBuffer *)asShortBuffer;

- (JavaNioByteBuffer *)putWithByte:(jbyte)value;

- (JavaNioByteBuffer *)putWithInt:(jint)index
                         withByte:(jbyte)value;

- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)byteCount;

- (void)putWithCharArray:(IOSCharArray *)src
                 withInt:(jint)srcOffset
                 withInt:(jint)charCount;

- (void)putWithDoubleArray:(IOSDoubleArray *)src
                   withInt:(jint)srcOffset
                   withInt:(jint)doubleCount;

- (void)putWithFloatArray:(IOSFloatArray *)src
                  withInt:(jint)srcOffset
                  withInt:(jint)floatCount;

- (void)putWithIntArray:(IOSIntArray *)src
                withInt:(jint)srcOffset
                withInt:(jint)intCount;

- (void)putWithLongArray:(IOSLongArray *)src
                 withInt:(jint)srcOffset
                 withInt:(jint)longCount;

- (void)putWithShortArray:(IOSShortArray *)src
                  withInt:(jint)srcOffset
                  withInt:(jint)shortCount;

- (JavaNioByteBuffer *)putCharWithChar:(jchar)value;

- (JavaNioByteBuffer *)putCharWithInt:(jint)index
                             withChar:(jchar)value;

- (JavaNioByteBuffer *)putDoubleWithDouble:(jdouble)value;

- (JavaNioByteBuffer *)putDoubleWithInt:(jint)index
                             withDouble:(jdouble)value;

- (JavaNioByteBuffer *)putFloatWithFloat:(jfloat)value;

- (JavaNioByteBuffer *)putFloatWithInt:(jint)index
                             withFloat:(jfloat)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)index
                             withInt:(jint)value;

- (JavaNioByteBuffer *)putLongWithLong:(jlong)value;

- (JavaNioByteBuffer *)putLongWithInt:(jint)index
                             withLong:(jlong)value;

- (JavaNioByteBuffer *)putShortWithShort:(jshort)value;

- (JavaNioByteBuffer *)putShortWithInt:(jint)index
                             withShort:(jshort)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioDirectByteBuffer)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioDirectByteBuffer)

#endif // _JavaNioDirectByteBuffer_H_
