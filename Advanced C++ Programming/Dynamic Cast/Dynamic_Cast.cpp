#include<iostream>

using namespace std;

class Parent
{
public:

	virtual void speak()
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
		* dynamic_cast<'data type'>
		* Work at runtime, and casts. 
	*/
	Parent parent;
	Brother brother; 

	Parent *ppb = &brother;

	Brother *pbb = dynamic_cast<Brother *>(ppb);

	if (pbb == nullptr)
	{
		cout << "Invalid cast" << endl;
	}
	else
	{
		cout << pbb << endl;
	}
	
	return 0;
}