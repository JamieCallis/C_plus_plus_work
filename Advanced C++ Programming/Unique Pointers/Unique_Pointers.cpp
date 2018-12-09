#include<iostream>
#include<memory>
using namespace std;

class Test
{
public:
	Test()
	{
		cout << "created" << endl;
	}
	void greet()
	{
		cout << "Hello" << endl;
	}

	~Test()
	{
		cout << "destroyed" << endl; 
	}
};

class Temp
{
private:
	unique_ptr<Test[]> pTest;

public:
	Temp() : pTest(new Test[2]) {}
};

int main(void)
{
	Temp temp;

	//auto_ptr is depricated. 
	/*
	unique_ptr<Test[]> pTest(new Test[2]);
	pTest[1].greet();
	*/
	cout << "Finished" << endl;

	
	return 0;
}