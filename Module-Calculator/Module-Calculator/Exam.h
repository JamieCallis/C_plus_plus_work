#pragma once


#ifndef EXAM_H
#define EXAM_H

#include "Assessment.h"

class Exam : public Assessment
{
public:
	void enterMark(int);
	void enterWeighting(double);
	void enterTitle(int);

};

#endif // !EXAM_H

