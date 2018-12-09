#include<iostream>
#include<vector>
#include <memory>
using namespace std;


class Test
{
private:
	static const int SIZE = 100;
	int *_pBuffer;
public:
	Test()
	{
		cout << "constructor" << endl;
		_pBuffer = new int[SIZE] {};

		for (int i = 0; i < SIZE; i++)
		{
			_pBuffer[i] = 7 * i;
		}
		// C+ 98 memory allocator method memset(_pBuffer, 0, sizeof(int)*SIZE);
	}
	Test(int i)
	{
		cout << "parameterized constructor" << endl;
	}

	Test(const Test &other)
	{
		cout << "copy constructor" << endl;

		_pBuffer = new int[SIZE] {};

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	Test &operator=(const Test &other)
	{
		cout << "assignment" << endl;
		_pBuffer = new int[SIZE] {};

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
	}
	~Test()
	{
		cout << "destructor" << endl;
		delete[] _pBuffer;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test)
{
	out << "Hello from test";
	return out;
}


Test getTest()
{
	return Test();
}

int main(void)
{
	Test test1 = getTest();
	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	// value1 = LValue // 7 = RValue
	int value1 = 7;

	int *pValue1 = &value1; // can point to the LValue
	//int *pValue2 = &7; // can't point the the Rvalue

	Test *pTest1 = &test1; // pointing to a constant value, which isn't tempory. 
	//Test *pTest2 = &getTest(); // won't work &getTest() is a temp value. 

	int *pValue3 = &++value1; 
	cout << *pValue3 << endl;
	// Can't take the address of an RValue, when using pointers. 
	// int *pValue4 = &value1++; // won't work due to tempory copy of value. 
	return 0;
}