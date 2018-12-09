#include<iostream>
#include<fstream>
#include<string>
using namespace std;




int main(void)
{
	ifstream inFile;

	string inFileName = "test.txt";

	inFile.open(inFileName);
	if (!inFile.is_open())
	{
		return 1;
	}
		

		while (inFile)
		{
			string line;
			getline(inFile, line);
			cout << line << endl;
		}
		
	
	
	inFile.close();
	return 0; 
}