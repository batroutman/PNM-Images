/*

Blake Troutman 2018
CSCI 557 - Computer Vision
Project 0
1-23-2018

*/

#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <string>

struct Image {
	int type; // an integer value specifying the image type. Values Gray = 0 and RGB = 1
	int width; // an integer value specifying the width of the image.
	int height; // an integer value specifying the height of the image.
	char* data; // an 8-bit array of image data (row major).
	
	int dataSize; //an integer value specifying the length of data. (for convenience)
};


Image loadImage(std::string fileName);
void storeImage(std::string fileName, Image img);


#endif
