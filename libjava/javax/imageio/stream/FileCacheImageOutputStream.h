
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_stream_FileCacheImageOutputStream__
#define __javax_imageio_stream_FileCacheImageOutputStream__

#pragma interface

#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace stream
      {
          class FileCacheImageOutputStream;
      }
    }
  }
}

class javax::imageio::stream::FileCacheImageOutputStream : public ::javax::imageio::stream::ImageOutputStreamImpl
{

public:
  FileCacheImageOutputStream(::java::io::OutputStream *, ::java::io::File *);
  virtual void close();
  virtual jboolean isCached();
  virtual jboolean isCachedFile();
  virtual jboolean isCachedMemory();
  virtual jint read();
  virtual jint read(JArray< jbyte > *, jint, jint);
  virtual void write(JArray< jbyte > *, jint, jint);
  virtual void write(jint);
  virtual jlong length();
  virtual void seek(jlong);
  virtual void flushBefore(jlong);
private:
  ::java::io::OutputStream * __attribute__((aligned(__alignof__( ::javax::imageio::stream::ImageOutputStreamImpl)))) stream;
  ::java::io::File * cacheFile;
  ::java::io::RandomAccessFile * cache;
  jlong maxPos;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_stream_FileCacheImageOutputStream__
