#include <iostream>
#include <string>
using namespace std;

class Parent
{
private:
	int dogs{5};
	string text;

public:
	Parent() : Parent("Hello") // delegating_constructor new to C++ 11. //keep in mind for recursion. 
	{
		
		cout << "No parameter parent constructor" << endl;
	}
	
	Parent(string text)
	{
		this->text = text;
		cout << "string parent constructor" << endl;
	}
};

class Child :public Parent
{
public:
	Child() = default;

};

int main(void)
{
	Parent parent("Hello");
	Child child;
	return 0;
}