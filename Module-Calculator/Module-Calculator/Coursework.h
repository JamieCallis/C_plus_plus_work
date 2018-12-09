#pragma once


#ifndef COURSEWORK_H
#define COURSEWORK_H

#include "Assessment.h"

// Coursework class
class Coursework : public Assessment
{
public:
	void enterMark(int count);
	void enterWeighting(int count);
	void enterTitle(int count);


};

#endif // !COURSEWORD_H