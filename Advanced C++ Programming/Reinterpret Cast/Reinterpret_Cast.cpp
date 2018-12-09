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
	
	Parent parent;
	Brother brother;
	Sister sister; 

	Parent *ppb = &brother;

	Sister *pbb = reinterpret_cast<Sister *>(ppb); // does a binary cast of one type to another. 

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