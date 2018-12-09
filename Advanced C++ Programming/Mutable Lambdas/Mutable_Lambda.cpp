#include<iostream>

using namespace std;

int main(void)
{
	int cats = 5; 


	[cats]()mutable
	{	// mutable // creates a copy allow you to change it // but doesn't change the original value. 
		cats = 8; 
		cout << cats << endl;
	};

	return 0;
}