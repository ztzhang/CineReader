#ifndef __bitreader_h
#define __bitreader_h

#include "data.h"
#include <fstream>

class bitreader {
 public:
  bitreader(std::ifstream *in) { input = in; }
  ~bitreader() {}

  void seekToByte(int64_t g);

  BYTE  readBYTE();  
  BYTE *readBYTEArray(int number);
  CHAR  readCHAR();
  WORD  readWORD();
  WORD *readWORDArray(int number);
  INT16 readINT16();
  SHORT  readSHORT();
  BOOL  readBOOL();
  DWORD  readDWORD();
  UINT readUINT();
  LONG readLONG();
  INT readINT();
  FLOAT readFLOAT();
  DOUBLE readDOUBLE();
  TIME64 readTIME64();
  IMFILTER readIMFILTER();
  WBGAIN readWBGAIN();
  int64_t readint64();
  STRING readZeroTerminatedSTRING();
  STRING readLengthNSTRING(int N);
  
 private:
  std::ifstream *input;


};
#endif
