#include <iostream>
#include <vector>
using namespace std;

int addNumbersTo(int number)
{
	if (number == 1) return 1;
	return number + addNumbersTo(number - 1);
}

int findHighest(vector<int>& numbers, int index = 0)
{
	if (index == numbers.size() - 1) return numbers[index];
	int highestnumbersofar = findHighest(numbers, index + 1);
	return (numbers[index] > highestnumbersofar) ? numbers[index] : highestnumbersofar;
}


int main(void)
{
	// Recursion demo
	cout << "Sum of number = " << addNumbersTo(5) << endl;
	vector<int> numbers = { 1,2,3,4,5,6,7,8,7,6,5,4,3,2,1 };
	cout << "Highst number = " << findHighest(numbers) << endl;
	return 0;
}