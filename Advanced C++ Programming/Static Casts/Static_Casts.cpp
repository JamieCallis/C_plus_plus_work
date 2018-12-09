#include<iostream>

using namespace std;

class Parent
{
public:

	void speak()
	{
		cout << "Parent!" << endl;
	}
};

class Brother : public Parent
{

};

class Sister : public Parent
{

};

int main(void)
{
	/*
		* static_cast<'data type'>
		* Works at complie time, and it potentially error prone. There is no run time checking. 
	*/
	Parent parent;
	Brother brother;


	Parent *ppb = &brother;

	Brother *pbb = static_cast<Brother *>(ppb);

	cout << pbb << endl;

	Parent &&p = static_cast<Parent &&>(parent);
	p.speak();

	/*
		* Brother *pb = &parent doesn't work
		* But we can aply static_cast to force it to work. 
	Brother *pb = static_cast<Brother *>(&parent);

	cout << pb << endl;
	*/
		// C++ 98 / C method explained
	/*
	float value = 3.23;
		* C++ 96 / C method(int)value or int(value) works // but static_Cast<'type'> is c++ 11 method of casting. 
	cout << static_cast<int>(value) << endl;
	*/

	return 0;
}