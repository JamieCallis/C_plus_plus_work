#include<iostream>

using namespace std;

/*
	* OOLs allow for creating a hierarchy of classes so that objects do not have to be in stantiations of a single class.

	*** More Detail ********************************************************************************************************

	* The class BaseClass is called a base class or a superclass, and other classes are called subclasses or derived classes
	* because they are derived from the superclass in that they can use the data members and member functions specified in BaseCLass as protected or private.
	* They inherit all these members from their base class so that they do not have to repeat the same definitions. However,
	* a derived class can override the definition of a member function by introducing it's own definition. 
	* In this way, both the base class and the derived class have some measure of control over their member functions.
*/

class BaseClass
{
public:
	BaseClass() {}
	void f(char *s = "unknown")
	{
		cout << "Function f() in BaseClass called from " << s << endl;
		h();
	}
protected:
	void g(char *s = "unknown")
	{
		cout << "Function g() in BaseClass called from " << s << endl;
	}
private:
	void h()
	{
		cout << "Function h() in BaseClass\n";
	}
};

class Derived1Level1 : public virtual BaseClass
{
public:
	void f(char *s = "unknown")
	{
		cout << "Function f() in Derived1Level1 called from " << s << endl;
		g("Derived1Level1");
		h("Derived1Level1");
	}
	void h(char *s = "unknown")
	{
		cout << "Function h() in Derived1Level1 called from " << s << endl;
	}
};

class Derived2Level1 : public virtual BaseClass
{
public:
	void f(char *s = "unkown")
	{
		cout << "Function f() in Derived2Level1 called from " << s << endl;
		g("Derived2Level1");
	//	h(); // error: BaseClass::h() is not accessible
	}
};

class DerivedLevel2 : public Derived1Level1, public Derived2Level1
{
public:
	void f(char *s = "unknown")
	{
		cout << "Function f() in DerivedLevel2 called from " << s << endl;
		g("DerivedLevel2");
		Derived1Level1::h("DerivedLevel2");
		BaseClass::f("DerivedLevel2");
	}
};

int main(void)
{
	BaseClass bc;
	Derived1Level1 d1l1;
	Derived2Level1 d2l1;
	DerivedLevel2 dl2;
	bc.f("main(1) ");
	// bc.g(); // error: BaseClass::g() is not accessible
	// bc.h(); // error: BaseClass::h() is not accessible
	d1l1.f("main(2) ");
	// d1l1.g() // error: BaseClass::g() is not accessible
	d1l1.h("main(3) ");
	d2l1.f("main(4) ");
	// d2l1.g(); // error: BaseClass::g() is not accessible
	// d2l1.h(); // error: BaseClass:: h() is not accessible
	dl2.f("main(5) ");
	// dl2.g(); // error: BaseClass::g() is not accessible
	dl2.h();
	return 0;
}