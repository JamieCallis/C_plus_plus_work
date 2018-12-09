#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	//rows   //columns
	vector<vector<int>> grid(3, vector<int>(4, 7)); //creates a vector with 3 rows, and 4 columns which all have intiated values of 0. 

	grid[1].push_back(8);
	int a = grid.size();
	for (int row = 0; row < a; row++)
	{
		int b = grid[row].size();
		for (int col = 0; col < b; col++)
		{
			cout << grid[row][col] << " " << flush;
		}
		cout << endl;
	}

	return 0; 
}