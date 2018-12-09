#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(void)
{
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	int a = strings.size();
	for (int i = 0; i < a; i++)
	{
		cout << strings[i] << endl;
	}

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
	{
		cout << *it << endl;
	}
	
	vector<string>::iterator it = strings.begin();
	it += 2;

	cout << *it << endl;
	
	return 0;
}