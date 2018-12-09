#include "Coursework.h"
#include <iostream>
#include <sstream>

using namespace std;

#include "Assessment.h"

void Coursework::enterMark(int count)
{
	int courseworkMark;
	do
	{
		cout << "Enter a Coursework value between the range of <0-100> : ";
		cin >> courseworkMark;
		cin.ignore();
		if (courseworkMark < 0 || courseworkMark > 100)
			cout << "Error Mark is not within given range of 0 too 100." << endl;

	} while (courseworkMark < 0 || courseworkMark > 100);
	setMark(courseworkMark);
};

void Coursework::enterWeighting(int count)
{
	double courseworkWeighting;
	do
	{
		cout << "Enter a Coursework weight of 0.1 or 0.2 : ";
		cin >> courseworkWeighting;
		cin.ignore();
		if (!(courseworkWeighting == 0.1 || courseworkWeighting == 0.2)) cout << "Error Coursework weight is not 0.1 or 0.2." << endl;;
	} while (!(courseworkWeighting == 0.1 || courseworkWeighting == 0.2));
	setWeighting(courseworkWeighting);
};


void Coursework::enterTitle(int count)
{

	
	Assessment::enterTitle(count);
	do {
	cout << "Enter a title for the Coursework : ";
	getline(cin, Title);
	cout << endl;
	if (Title == "") {
		cout << "Title is empty, please enter a title." << endl;
	}
	} while (Title == "");
};


