#include"Header.h"

int main(void)
{
	BubbleSort mySort1;

	mySort1.addValue(1);
	mySort1.addValue(10);
	mySort1.addValue(8);
	mySort1.addValue(9);
	mySort1.addValue(5);
	mySort1.addValue(3);
	mySort1.addValue(20);

	mySort1.sortValues();
	mySort1.displayValues();
	return 0;
}

void BubbleSort::addValue(int value) 
{
	values.push_back(value);
}

void BubbleSort::displayValues(void)
{
	for (int valuecount = 0; valuecount < values.size(); valuecount++)
	{
		cout << values[valuecount] << "";
	}

	cout << endl;
}

void BubbleSort::sortValues(void)
{
	int temp;
	bool swap;
	
	do
	{
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