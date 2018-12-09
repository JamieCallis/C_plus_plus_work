#pragma once
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class BubbleSort
{
private: 
	vector<int> values;
public:
	void addValue(int value);
	void displayValues(void);
	void sortValues(void);
};