#include "Module.h"
#include <iostream>
#include <string>

using namespace std;

Module::Module(string moduleTitle) {
	moduleMark = 0;
	examWeighting = 1;
	cout << "Module : " << moduleTitle << ". " << "Has been created!" << endl;
};

Module::~Module() {
	for (int i = 0; i <= arraySize; i++)
	{
		delete pAssessment[i];
	} // deletes assessments inside the array.
	delete[] pAssessment;
};

void Module::addCourseworks()
{

	cout << "Enter number for amount of courseworks: ";
	cin >> arraySize;
	cin.ignore();
	
	pAssessment = new Assessment*[arraySize + 1]; // 1 for exam
	cout << endl;
	for (int position = 0; position < arraySize; position++)
	{
		pAssessment[position] = new Coursework(); // creates a new instance of coursework and stores it in pCoursework position. 
		pAssessment[position]->enterTitle(position);
		pAssessment[position]->enterMark(position);
		pAssessment[position]->enterWeighting(position);
		cout << endl;
		examWeighting -= pAssessment[position]->getWeighting();
	}
};

void Module::addExam()
{
	pAssessment[arraySize] = new Exam();
	pAssessment[arraySize]->enterTitle(0);
	pAssessment[arraySize]->enterMark(0);
	pAssessment[arraySize]->enterWeighting(examWeighting);
};
// Is not calculating the module Mark

	// Why isn't it calculating the Module Mark?

int Module::getMark()
{
	for (int position = 0; position <= arraySize; position++)
	{
		moduleMark += pAssessment[position]->getMark() *
			pAssessment[position]->getWeighting();
	}
	
	return moduleMark;
};