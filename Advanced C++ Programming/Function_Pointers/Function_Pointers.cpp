#include <iostream>

using namespace std;

void test()
{
	cout << "Hello" << endl;
}

int main(void)
{
	test();
	// void (*pTest)(int) // dont have to put names for the parameters, just list in order the data types.
	void (*pTest)() = test;


	pTest();

	return 0;
}