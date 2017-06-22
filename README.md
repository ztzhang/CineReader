CineReader is a C++ library to read raw Cine video files produced by the VisionResearch's Phantom line of cameras. Currently, the library has been tested with raw Cines produced by the Phantom V10 and V9. 

There are also MATLAB bindings. There are two MATLAB classes CineReaderRaw and CineReader. CineReaderRaw returns the raw pixels in the cine file while CineReader returns demosaiced color-corrected frames. Both classes have an interface identical to the in-built VideoReader.

Adding python binding via swig.
