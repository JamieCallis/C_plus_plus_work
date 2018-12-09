#include<iostream>
#include<functional>

using namespace std;
using namespace placeholders;

class Test
{
public:
	int add(int a, int b, int c)
	{
		cout << a << ", " << b << ", " << c << endl;
		return a + b + c;
	}
};

int run(function<int(int, int)> func)
{
	return func(7, 3);

}

int main(void)
{
	Test test;
						// _2 is a placeholder for the second parameter.
	auto calculate = bind(&Test::add, test, _2, 100, _1);

	cout << calculate(10, 20) << endl;  
	cout << run(calculate) << endl;
	return 0;
}