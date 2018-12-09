#pragma once


#ifndef ASSESSMENT_H
#define ASSESSMENT_H
#include <iostream>

class Assessment
{
private:
	int Mark;
	double Weighting;
protected:
	std::string Title;

public:
	double getWeighting();
	int getMark();
	std::string getTitle();

	virtual void enterMark(int);
	virtual void enterWeighting(int);
	virtual void enterTitle(int);

	void setMark(int);
	void setWeighting(double);
};

#endif // !1
