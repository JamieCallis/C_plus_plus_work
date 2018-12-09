#include <iostream>
#include <string>


using namespace std;



void mightGoWrong()
{
	bool error = false; //set to false to get error2 to be caught.
	bool error2 = false;
	bool error3 = true;
	if (error)
	{
		throw 8;
	}
	//issue here is first execption will get thrown, and the second wouldn't get called. If error = true; 
	if (error2)
	{
		throw "Something went wrong.";
	}
	if (error3)
	{
		throw string("Something else went wrong.");
	}
}

void usesMightGoWrong()
{
	mightGoWrong();
}


int main(void)
{
	try
	{
		usesMightGoWrong();
	}
	//This will only catch a int, we can use (...) for catching any data type. 
	catch (int e)
	{
		cout << "Error code: " << e << endl;
	}
	//Or we can use a second catch block to catch to a different error message.
	catch (char const * e) //e can be used again due to local scoping. 
	{
		cout << "Error message: " << e << endl;
	}
	//catch blocks are not limitted in number, but if your going to use a catch a try statement must come first!
	catch (string &e) 
	{
		cout << "string error message: " << e << endl;
	}

	return 0;
}