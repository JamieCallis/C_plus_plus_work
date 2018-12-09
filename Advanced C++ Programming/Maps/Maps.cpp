#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void)
{
	map<string, int> ages;
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	ages["Mike"] = 70; //overloads the same key and changes the value. 

	pair<string, int> addToMap("Peter", 100);

	ages.insert(addToMap);
	//age.insert(make_pair("Peter", 100)); short hand notation.
	//ages.insert(pair<string, int>("Peter", 100)); works the same as above method. 



	cout << ages["Mike"] << endl;
	if (ages.find("Vicky") != ages.end())
	{
		cout << "Found Vicky" << endl;
	}
	else
	{
		cout << "Key not found" << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		pair<string, int> age = *it;

		cout << age.first << ": " << age.second << endl;
	}



	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}


	return 0;
}