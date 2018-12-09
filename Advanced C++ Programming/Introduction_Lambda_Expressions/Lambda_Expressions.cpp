#include <iostream>

using namespace std;

void test(void (*pFunc)())
{
	pFunc();
}

int main(void)
{
	//Lambda expression 
	// defining a function with no name
	[]() {cout << "Hello" << endl; };

	// we can store the function in a variable
	auto func = []() {cout << "Hello" << endl; };

	func();

	//Lambda expression can be used as a function pointer
	test(func);

	test([]() {cout << "Hello again" << endl; });
	return 0;
}