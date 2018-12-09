#include<iostream>
#include<set>
#include<string>
using namespace std;

class Test
{
	int id;
	string name;
public:
	Test(): id(0), name("") //Good practice to have a defualt constructor
	{

	}
	Test(int id, string name) : id(id), name(name) //Custom constructor
	{

	}

	void print() const
	{
		cout << id << ": " << name << endl;
	}
	//operator overloading. 
	bool operator<(const Test &other) const
	{
		return name < other.name; 
	}
};

int main(void)
{

	set<int> numbers;
	//set will order the value form smallest first, and will not allow dublicate data. 

	numbers.insert(50);
	numbers.insert(20);
	numbers.insert(30);
	numbers.insert(20);

	//How to loop throgh a set, and defrerrence (*it) to get the values out of the set. 
	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}

	//allows us to find a specific number
	set<int>::iterator itFind = numbers.find(30);

	if (itFind != numbers.end())
	{
		cout << "Found: " << *itFind << endl;
	}
	else //for when a number isn't in a set that is be looked for. 
	{
		cout << "Not Found" << endl;
	}

	if (numbers.count(30)) //returns 1 = true or 0 = false. 
	{
		cout << "Number found. " << endl;
	} //can add an else


	set<Test> tests;

	tests.insert(Test(10, "Mike"));
	tests.insert(Test(30, "Joe"));
	tests.insert(Test(20, "Sue"));

	for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++)
	{
		it->print();
	}

	return 0; 

}