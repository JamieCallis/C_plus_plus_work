#include<iostream>
#include<string>
#include "ring.h"
using namespace std;

int main(void)
{
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");
	

	// C++ 98syntax
	for (ring<string>::iterator it = textring.begin(); it != textring.end(); it++)
	{
		cout << *it << endl;
	}

	cout << endl;

	// C++11 syntax
	for (auto value: textring)
	{
		cout << value << endl;
	}

	return 0;
}