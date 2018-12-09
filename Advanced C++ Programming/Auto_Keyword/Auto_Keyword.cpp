#include<iostream>

using namespace std;

// auto // can be used as the return type for functions
template<class T, class S>
//return type				  //trailing type
auto test(T value1, S value2) -> decltype(value1 + value2) // -> int // return type in this case returns a int
{						 
	return value1 + value2; 
}


int get()
{
	return 999;
}
// can manipulate parameters in decltype, can also use functions. 
auto test2() -> decltype(get()) // can type complex expressions inside decltype.
{
	return get();
}
int main(void)
{
	// C++98 // auto is the default storage class specifer for your variable
	// auto int value = 7;

	// C++11 // auto can know miss out the type declartion 
	// looks at whats being intialised, and will declear the type for you. 
	auto value = 7;

	cout << value << endl;

	cout << test(5, 6) << endl;


	cout << test2() << endl;
	return 0;
}