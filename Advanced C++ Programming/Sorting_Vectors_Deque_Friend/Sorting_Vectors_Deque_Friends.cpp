#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Test
{
private:
	int id;
	string name;
public:
	Test(int id, string name) : id(id), name(name) {}

	void print()
	{
		cout << id << " : " << name << endl; 
	}
	/*
	bool operator<(const Test& other) const
	{
		//To sort by name, use id to sort by id. 
		return name < other.name; 
		//Can use an if statement to check if the names are the same and then sort by the id of the names. 
	}
	*/
	//Allows access to private members. 
	friend bool comp(const Test &a, const Test &b); 
};

bool comp(const Test &a, const Test &b)
{
	return a.name < b.name; 
}

int main(void)
{
	vector<Test> tests;
	//adds items to vector.
	tests.push_back(Test(5, "Mike"));
	tests.push_back(Test(10, "Sue"));
	tests.push_back(Test(7, "Raj"));
	tests.push_back(Test(3, "Vicky"));

	sort(tests.begin(), tests.end(), comp);

	for (int i = 0; i < tests.size(); i++)
	{
		tests[i].print();
	}


	return 0; 
}