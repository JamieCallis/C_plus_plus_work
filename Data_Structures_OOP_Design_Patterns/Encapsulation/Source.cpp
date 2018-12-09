#include <iostream>

using namespace std;

/* Encapsulation

*/

class encap
{
private:
	int value = 0;
public:
	void setValue(int val);
	int getValue(void);
};

void encap::setValue(int val)
{
	value = val;
}

int encap::getValue(void)
{
	return value;
}



int main(void)
{
	return 0;
}