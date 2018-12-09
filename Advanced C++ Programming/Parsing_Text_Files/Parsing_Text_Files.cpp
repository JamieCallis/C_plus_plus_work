#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(void)
{
	ifstream input;
	string filename = "stats.txt";

	input.open(filename);


	if (!input.is_open())
	{
		return 1;
	}

	while (input)
	{
		string line;
		int population;
		getline(input, line, ':');
		
		input >> population;
		//input.get();
		input >> ws;
		if (!input)
		{
			break;
		}
		cout << line << " ---- " << population << endl;

	}
	input.close();

	return 0;
}