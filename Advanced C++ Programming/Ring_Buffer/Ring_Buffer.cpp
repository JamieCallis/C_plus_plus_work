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
	textring.add("four");

	for (int i = 0; i < textring.size(); i++)
	{
		cout << textring.get(i) << endl;
	}
	return 0;
}