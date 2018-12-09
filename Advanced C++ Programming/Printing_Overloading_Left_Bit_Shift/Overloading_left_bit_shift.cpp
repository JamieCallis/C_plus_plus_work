#include<iostream>
#include<string>

using namespace std;

class Test
{

private:
	//instance variables
	int id;
	string name;

public:
	Test() : id(0), name("") {}
	Test(int id, string name) : id(id), name(name) {}

	const Test &operator=(const Test &other)
	{
		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test &other)
	{
		*this = other;
	}
	//overloaded left bit shift operator
	//Implimentation should be in a separeate CPP file.
	friend ostream &operator<<(ostream &out, const Test &test)
	{
		out << test.id << ": " << test.name;
		return out;
	}
};

int main(void)
{
	Test test1(10, "Mike");
	Test test2(20, "Bob");
	
	cout << test1 << ", " << test2 << endl;

	return 0;
}