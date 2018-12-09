#include <iostream>
#include <string>
using namespace std;

class Test
{
private:
	int id{3};
	string name{"Mike"};
public:
	Test() = default; // Have a default implimentation
	Test(const Test &other) = delete; 
	Test &operator=(const Test &other) = delete; // copy constructor overloads the '=' operator. 

	Test(int id) : id(id) {}

	void print()
	{
		cout << id << " : " << name << endl;
	}

};


int main(void)
{
	Test test;
	test.print();

	Test test1(77);
	test1.print();

	//Test test2 = test1;
	//test2 = test; 
	return 0;
}