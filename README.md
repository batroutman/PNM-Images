# PNM-Images
C++ code for loading and storing images in PNM format

## What's in this repo
Image.h and Image.cpp make up the implementation for a struct that contains image data (width, height, and the individual pixel values stored in row-major order) and functions that can generate an Image struct from a given PNM file or save a given Image struct to a PNM file.
The image_data directory simply contains examples of PNM images that you can use for testing. GIMP can open PNM pictures, so you can use that to view them.

To see how PNM files are formatted (in case this algorithm has some sort of flaw, just consult: https://en.wikipedia.org/wiki/Netpbm_format )


Note: I ended up having to port this code to MATLAB before I could actually use it in my Computer Vision class (trying to do the projects in C++ proved to be way too hard), so there's no issue of potential plagiarism by you guys seeing this because this was not actually used in an assignment.