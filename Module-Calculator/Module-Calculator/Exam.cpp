#include "Exam.h"
#include <iostream>
#include <sstream>

using namespace std;

void Exam::enterWeighting(double exWeight)
{
	cout << "Calculated exam weighting = " << exWeight << endl;
	Assessment::setWeighting(exWeight);
};

void Exam::enterTitle(int i)
{
	i = 0;
	Assessment::enterTitle(i);
	cout << "Enter a title for the Exam : ";
	getline(cin, Title);

};

void Exam::enterMark(int i)
{
	int examMark;
	do
	{
		cout << "Enter a Exam value between the range of <0-100> : ";
		cin >> examMark;
		if (examMark < 0 || examMark > 100) cout << "Error Exam value is not within given range of 0 too 100." << endl;

	} while (examMark < 0 || examMark > 100);
	setMark(examMark);
};
