#include <iostream>
#include <exception>
using namespace std;


class CanGoWrong
{
public:
	CanGoWrong()
	{
		//Once exceptions for new have been enabled and char is set to a larger number that exeeds the allocation limit. 
		//The try and catch statement in the main will catch it and output the exception. 
		char *pMemory = new char[999];
		delete[] pMemory;
	}
};
int main(void)
{
	try
	{
		CanGoWrong wrong;
	}
	catch (bad_alloc &e)
	{
		cout << "Caught exception: " << e.what() << endl;
	}
	return 0;
}