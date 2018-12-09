#include <iostream>
#include <string>

using namespace std;

int main(void)
{

	int one = 1;
	int two = 2;
	int three = 3;

	// Capture one and two by value
	[one, two]() 
	{
		cout << one << ", " << two << endl;
	}();

	//capture all local variables by value
	[=]()
	{
		cout << one << ", " << two << three << endl;
	}();

	// Default capture all local variables by value, but capture three by reference
	[=, &three]()
	{
		three = 7; 
		cout << one << ", " << two << three << endl;
	}();

	// Default capture all local variables by reference
	[&]()
	{
		three = 7; two = 8; 
		cout << one << ", " << two << three << endl;
		three += two + one; 
		cout << three; 
	}();

	//Default capture all local variables by reference, but two and three by value
	[&, two, three]()
	{	
		one = 100;
		cout << one << ", " << two << three << endl;
	}();

	// After = or &, can only list exceptions // [&, &two] would produce and error. // But [&, two] is accpeted as valid.
	return 0; 
}