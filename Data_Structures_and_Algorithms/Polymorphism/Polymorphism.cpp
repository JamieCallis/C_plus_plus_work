#include <iostream>

using namespace std;

/*
	* Polymorphism refers to the ability of acquiring many forms. In the context of OOP this means that
	* the same function name denotes many functions that are members of different objects.

	* Polymorphism is a powerful tool in OOP. It is enough to send a standard message to many 
	* different objects without specifying how the message will be processed. 
	* The receiver is responsible for interpreting the message.

	* New units can be added to a complex program without needing to recompile the entire program. 
*/

/*
 *** More details ***
	* In the case of the so-called static binding (non-virtual), the decision concerning a function to be 
	* executed is determined at complation time. In the case of dynamic binding (virtual), the decision is delayed until run time.
	* In C++, dynamic binding is enforced by declaring a member function as virtual. 
 */

class Class1
{
public:
	virtual void f() //dynamic binding // Allows for the method to be overloaded. 
	{
		cout << "Function f() in Class1\n";
	}
	void g() //static binding // Doesn't allow the method to be overloaded. 
	{
		cout << "Function g() in Class1\n";
	}
};
class Class2
{
public:
	virtual void f()
	{
		cout << "Function f() in Class2\n";
	}
	void g()
	{
		cout << "Function g() in Class2\n";
	}
};
class Class3
{
public:
	virtual void h()
	{
		cout << "Function h() in Class3\n";
	}
};

int main(void)
{

	Class1 object1, *p;
	Class2 object2;
	Class3 object3;
	p = &object1;
	p->f();
	p->g();
	p = (Class1*) &object2;
	p->f();
	p->g();
	p = (Class1*) &object3;
	p->f(); // possibly abnormal program termination;
	p->g();
	// p->h(); // h() is not a member of Class1;
	return 0;
}