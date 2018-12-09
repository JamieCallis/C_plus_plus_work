#pragma once


#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_
//included header files within the program. 
#include "ZoomList.h"
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"
//librarys
#include<iostream>
#include<string>
#include <cstdint>
#include <string>
#include <memory>
#include <vector>


using namespace std;

namespace caveofprogramming
{

	class FractalCreator
	{
	private: //private data types
		int m_width;
		int m_height;
		int m_total{ 0 };
		unique_ptr<int[]> m_histogram;
		unique_ptr<int[]> m_fractal;
		Bitmap m_bitmap;
		ZoomList m_zoomList;

		vector<int> m_ranges;
		vector<RGB> m_colors;
		vector<int> m_RangeTotals;

		bool m_bGotFirstRange{ false };

	private: //private methods
		void calculateTotalIterations();
		void calculateIteration();
		void calculateRangeTotals();
		void drawFractal();
		int getRange(int iterations) const;
		void writeBitmap(string name);

	public:
		FractalCreator(int width, int height);
		virtual ~FractalCreator();
		void addRange(double rangeEnd, const RGB& rgb);
		void addZoom(const Zoom& zoom);
		void run(string name);
	};

}

#endif