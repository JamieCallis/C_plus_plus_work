#include "Header.h"


int main(void)
{
	TemplateBubbleSort<string> mySort1;

	
	mySort1.addContent("Words.txt");
	mySort1.sortValues();
	mySort1.displayValues();

	return 0;
}

template<typename T>

void TemplateBubbleSort<T>::addContent(T filename)
{
	T content;
	inputfile.open(filename);

	if (!inputfile) {
		cout << "Error file doesn't exsist" << endl;
		return;
	}

	while (inputfile) {
		inputfile >> content;
		values.push_back(content);
	}

	
	inputfile.close();
}

template<typename T>

void TemplateBubbleSort<T>::displayValues(void)
{
	for (int valuecount = 0; valuecount < values.size(); valuecount++)
	{
		cout << values[valuecount] << " ";	
	}
	cout << endl;
}

template<typename T>
void TemplateBubbleSort<T>::sortValues(void)
{
	T temp;
	bool swap; 
	do {
		swap = false;

		for (int valuecount = 0; valuecount < values.size() - 1; valuecount++)
		{
			if (values[valuecount] > values[valuecount + 1])
			{
				temp = values[valuecount];
				values[valuecount] = values[valuecount + 1];
				values[valuecount + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}



void TemplateBubbleSort<string>::sortValues(void)
{
	string temp;
	bool swap;
	do {
		swap = false;

		for (int valuecount = 0; valuecount < values.size() - 1; valuecount++)
		{
			if (values[valuecount].compare(values[valuecount + 1]) > 0)
			{
				temp = values[valuecount];
				values[valuecount] = values[valuecount + 1];
				values[valuecount + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}