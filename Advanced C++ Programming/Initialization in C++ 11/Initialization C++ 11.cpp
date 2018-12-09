#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(void)
{
	/* 
		* C++ 11 Initialization, generalises the use of braces '{}'
	*/

	int value{5}; // don't need '=' sign
	cout << value << endl;

	string text{ "Hello" };
	cout << text << endl;
	

	int numbers[]{ 1, 2, 4 };
	cout << numbers[1] << endl;

	int *pInts = new int[3]{ 1,2,3 };
	cout << pInts[1] << endl;

	delete pInts;

	int value1{}; // initalizes to the default value e.g. 0, or "" for string, and '' for char.
	cout << value1 << endl;

	int *pSomething{ &value };
	cout << *pSomething << endl;

	int *pSomething2{ }; // equivalent to int *pSomething = nullptr;
	cout << pSomething2 << endl;

	int numbers1[5]{}; //initalizes all values to default 0
	cout << numbers1[1] << endl;

	struct
	{ 
		int value;
		string text;
	} s1{5, "Hi"};

	cout << s1.text << endl;
	
	vector<string> strings{ "one", "two" , "three" };

	cout << strings[2] << endl;

	return 0; 
}