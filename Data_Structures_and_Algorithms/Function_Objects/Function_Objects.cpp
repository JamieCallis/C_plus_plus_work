#include <iostream>
#include <functional>

using namespace std;
/*
	* In C++ the function call operator() can be treated as any other operator; in particular, it can be overloaded.
	* It can return any type and take any number of arguments, but like the assignment operator, it can be overloaded
	* only as a member function.
	* Any object that includes a definition of the function call operator is called a 'function object'. 
	* A function object is an object, but it behaves as though it were a function. When the function object is called,
	* its arguments become the arguments of the function call operator.
*/

/*
* The syntax sum(-,2,5) is illegal. To circumvent the problem, the STL defines function objects for the common
* C++ operators in <functional>. For example, unary minus is defined as
*/

template<class T>
struct negate : public unary_function<T, T>
{
	T operator() (const T& x) const
	{
		return -x;
	}
};

// Example of a function object.
class classf
{
public:
	classf(){}
	double operator() (double x)
	{
		return 2 * x;
	}
};

double sum2(classf f, int n, int m)
{
	double result = 0;
	for (int i = n; i <= m; i++)
	{
		result += f(i);
	}
	return result;
}

/*
	* The same can be accomplished without overloading the function call operator.
*/

class classf2
{
public:
	classf2(){}
	double run(double x) { return 2 * x; }
};

double sum3(classf2 f, int n, int m)
{
	double result = 0;
	for (int i = n; i <= m; i++)
		result += f.run(i);
	return result;
}

// Now, after redefining function sum() so that it becomes a generic function:
template<class F>
double sum(F f, int n, int m)
{
	double result = 0;
	for (int i = n; i <= m; i++)
		result += f(i);
	return result;
}
int main(void)
{
	classf cf;
	cout << sum2(cf, 2, 5) << endl;
	/*
		* or simply
		* cout << sum2(classf(), 2, 5) << endl;
		
		* The latter way of calling requires a definition of constructor classf() 
		* (even if it has no body) to create an object of type classf() when sum2() is called.
	*/

	cout << sum3(classf2(), 2, 5) << endl;
	
	cout << sum(std::negate<double>(), 2, 5) << endl;
	return 0;
}