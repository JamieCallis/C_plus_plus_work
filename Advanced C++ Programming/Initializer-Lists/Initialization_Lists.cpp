#include <iostream>
#include <vector>
#include <string>
#include <initializer_list> //required 
using namespace std;

class Test
{
public:
	Test(initializer_list<string> texts)
	{
		for (auto value : texts)
		{
			cout << value << endl;
		}
	}
	// can use custom types for the initalizer_list<'data type'>
	void print(initializer_list<string> texts) 
	{
		for(auto value : texts) cout << value << endl;
	}
};

int main(void)
{
	vector<int> numbers{ 1, 3, 4, 6 }; // initializer list
	cout << numbers[2] << endl;

	Test test{ "apple", "orange", "banana" };

	test.print({ "one", "two", "three", "four" });

	return 0; 
}