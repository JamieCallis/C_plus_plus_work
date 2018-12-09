#include<iostream>
#include<exception>
using namespace std;

void goesWrong()
{
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected) throw bad_alloc();
	if (error2Detected) throw exception();
}



int main(void)
{
	try
	{
		goesWrong();
	}
	//When doing catching, with error handling keep an eye on the polymorithism, children of the parent class catch statement need to be before the parent class catch statement. 
	catch (bad_alloc &e)
	{
		cout << "Catching bad_alloc: " << e.what() << endl;
	}
	catch (exception &e)
	{
		cout << "Catching execption: " << e.what() << endl;
	}
	
	return 0;
}