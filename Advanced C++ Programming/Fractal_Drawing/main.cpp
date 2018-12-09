#pragma once
#include <iostream>



#include "FractalCreator.h"
#include "Zoom.h"
#include "RGB.h"

using namespace std;
using namespace caveofprogramming;

int main(void)
{

	FractalCreator fractalCreator(800, 600);

	fractalCreator.addRange(0.0, RGB(0, 0, 0));
	fractalCreator.addRange(1.3, RGB(100, 100, 150));
	fractalCreator.addRange(1.5, RGB(40, 255, 80));
	fractalCreator.addRange(2.0, RGB(100, 100,150));

	fractalCreator.addZoom(Zoom(295, 202, 0.1));
	fractalCreator.addZoom(Zoom(312, 304, 0.1));

	fractalCreator.run("test.bmp");
	
		
	cout << "Finished." << endl;

	return 0;
}