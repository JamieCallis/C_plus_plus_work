#pragma once



#ifndef MODULE_H
#define MODULE_H


#include "Coursework.h"
#include "Exam.h"

#include <iostream>

class Module
{
private:
	int moduleMark;
	std::string moduleTitle;
	double examWeighting;
	Assessment** pAssessment;
	int arraySize;
public:
	Module(std::string moduleTitle);
	~Module();
	void addCourseworks();
	void addExam();
	int getMark();
};

#endif // !CLASSES_H_


