#pragma once

//ifndef must have a following endif.
#ifndef BITMAPINFOHEADER_H_ //BITMAPINFOHEADER_H_ needs to be defined otherwise an error will occur. 
#define BITMAPINFOHEADER_H_ //defines the BITMAPINFOHEADER_H_ to be used throughout the program. 

#include <cstdint>

using namespace std;

#pragma pack(2) //sets the struct bellow to not have an extra padding. 
namespace caveofprogramming {
struct BitmapInfoHeader 
{
	int32_t headerSize{40};
	int32_t width;
	int32_t height;
	int16_t planes{1};
	int16_t bitsPerPixel{24};
	int32_t compression{0};
	int32_t dataSize{0};
	int32_t horizontalResolution{2400};
	int32_t verticalResolution{2400};
	int32_t colors{0};
	int32_t importantColors{0};
};
}
#endif