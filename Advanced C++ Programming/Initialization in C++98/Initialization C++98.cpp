#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(void)
{
	/*
	* Initialization in c++ 98
	*/

	int values[] = {1, 4, 5};

	cout << values[0] << endl;

	class C
	{
	public:
		string text;
		int id;
	};

	C c1 = {"hello", 7};

	cout << c1.text << endl;


	struct S
	{
		string text;
		int id;
	};

	S s1 = { "hello", 7 };

	cout << s1.text << endl;

	struct 
	{
		string text;
		int id;
	} r1 = { "hello", 7 }, r2 = {"Hi", 9};


	cout << r1.text << endl;
	cout << r2.text << endl;

	vector<string> strings;

	strings.push_back("One");

	return 0;
}