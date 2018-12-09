#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

template<typename T>

class TemplateBubbleSort
{
private:
	
	vector<T> values;
public:
	void addContent(T filename);
	void displayValues(void);
	void sortValues(void);
};