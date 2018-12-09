#include<iostream>
#include<typeinfo>
#include<string>
using namespace std;

int main(void)
{
	string value;
	//typeid will find the data type of a variable.
	cout << typeid(value).name() << endl;

	//decltype // allows the user to cast a new variable using another variables data type. 
	decltype(value) name = "Bob";

	cout << name << endl;
	cout << typeid(name).name() << endl;

	return 0;
}