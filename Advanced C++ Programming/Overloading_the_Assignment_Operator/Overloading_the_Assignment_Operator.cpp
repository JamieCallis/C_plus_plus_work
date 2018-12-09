#include<iostream>
#include<string>

using namespace std;

class Test
{
	/*
	  * C++ rule of 3 if you define a copy constructor, assignment operator, or a deconstructor. 
	  * You should impliment the defition of the other two which you haven't implimented.
	*/
private:
	int id;
	string name;

public:
	Test() : id(0), name("") {} //default requires no input to be initiated. No arguement Constructor.
	Test(int id, string name) : id(id), name(name) {} //requires input to be initiated.

	void print()
	{
		cout << id << ": " << name << endl;
	}
	//Assignment operator 
	const Test &operator=(const Test &other)
	{
		cout << "Asssignment running" << endl;
		id = other.id;
		name = other.name;

		return *this; //returns the dereference of &other. 
	}
	//Copy constructor
	Test(const Test &other)
	{
		cout << "Copy constructor running" << endl;
		*this = other; 
	}
};

int main(void)
{
	Test test1(10, "Mike");
	cout << "Print test1 " << flush;
	test1.print();

	Test test2(20, "Bob");


	test2 = test1; //assigns the values of test1 to test2. Shallow Copy.
	cout << "Print test2 " << flush;
	test1.print();

	Test test3;
	//test3 = test2 = test1; //Chaining

	//test3 = test2; 
	test3.operator=(test2);
	cout << "Print test3 " << flush;
	test3.print();

	cout << endl; 
	// Copy initialisation. 
	Test test4 = test1; //calling the implicet copy constructor. 
	test4.print();
	return 0; 
}