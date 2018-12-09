#include <iostream>
#include "Complex1.h"

using namespace std;
using namespace caveofprogramming;



int main(void)
{
	Complex c1(3, 2);
	
	cout << *c1 + *Complex (4,3) << endl;


	return 0; 
}