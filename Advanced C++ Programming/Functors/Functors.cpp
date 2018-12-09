#include<iostream>
#include<string>
using namespace std;

struct Test
{
	bool virtual operator()(string &text) = 0;
	virtual ~Test(){}
};

//functor is a class or struct, which overloads the () operator. -
struct MatchTest :public Test
{
	bool operator()(string &text) //returns 1 = true, 0 = false. 
	{
		return text == "lion";
	}
};
						//possible due to base class. 
void check(string text, Test &test) //has to be reference for polymorphism to work correctly.
{
	if (test(text))
	{
		cout << "Text matches!" << endl;
	}
	else
	{
		cout << "No match." << endl;
	}
}

int main(void)
{
	MatchTest pred; 

	string value = "lion";
	cout << pred(value) << endl;

	MatchTest m;
	check("lion", m);
	return 0;
}