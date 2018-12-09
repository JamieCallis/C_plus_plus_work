#pragma once

#include "Assessment.h"
#include <iostream>
#include <sstream>

using namespace std;

void Assessment::enterMark(int i) { ; };

void Assessment::enterWeighting(int i) { ; };

void Assessment::enterTitle(int i)
{
	cin.clear(); fflush(stdin);
};

void Assessment::setMark(int value)
{
	Mark = value;
};

void Assessment::setWeighting(double value)
{
	Weighting = value;
};


double Assessment::getWeighting()
{
	return Weighting;
};

int Assessment::getMark()
{
	return Mark;
};

string Assessment::getTitle()
{
	return Title;
};



