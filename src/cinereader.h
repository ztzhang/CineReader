#ifndef __cinereader_h
#define __cinereader_h

#include "cinefileheader.h"
#include "bitmapinfoheader.h"
#include "data.h"
#include "imageoffsets.h"
#include "cineimage.h"
#include "setup.h"
#include <fstream>

class CineReader {
 public:
  CineReader(char * filename);
  ~CineReader();
  CINEIMAGE read(int64_t frame);
  DWORD NumberOfFrames();
  LONG width();
  LONG height();
  UINT FrameRate();
  
  FLOAT whiteBalanceRed();
  FLOAT whiteBalanceBlue();
  
  INT brightness();  
  INT contrast();  
  FLOAT gain();
  FLOAT gamma();

  BOOL flipH();
  BOOL flipV();
  INT rotate();  
  
  UINT bitsPerPixel();

  UINT exposure(); //in Nanonseconds

  UINT colorFilterArrayPattern(); 

 private:
  std::ifstream *inputCine;
  CINEFILEHEADER *cineheader;
  BITMAPINFOHEADER *bitmapheader;
  SETUP *setup;
  IMAGEOFFSETS *pimage;


    
  
  
};
class exceptionCannotOpenFile : public std::exception {
  virtual const char * what() const throw() 
  {
    return "Cannot open file.";
  } 
};
#endif
