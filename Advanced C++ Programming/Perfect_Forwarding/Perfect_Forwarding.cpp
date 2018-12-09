#include<iostream>

using namespace std;

class Test
{

};
/* Perfect fowarding*/
template<typename T> 
void call(T &&arg)
{ // Can call a lValue, or a rValue
	check(forward<T>(arg));
}

void check(Test &test)
{
	cout << "lValue" << endl;
}

void check(Test &&test)
{
	cout << "rValue" << endl;
}

int main(void)
{
	/*
		* if an auto comes down to a lValue reference type, the reference will collapse, and what's left is a lValue reference.
	*/
	Test test;

	call(Test());

	return 0;
}