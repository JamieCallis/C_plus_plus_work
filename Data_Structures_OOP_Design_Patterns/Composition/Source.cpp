#include <iostream>

using namespace std;

/*	Composition

	* General Description *
	
	Composition is a mechanism by which the functionality of external classes
	are utilised by internally creating a copy of them and redirecting a serrvice requests to them.

	Composition referes to the wrapping of a object inside of another object, 
	therefore creating a composition link between the two classes. 

*/


class Duck {
public:
	Duck(void);
	~Duck(void);
	void quack(void);
	void swim(void);
	void display(void);
};




class MallardDuck {
private:
	Duck duck; // Composition link between MallardDuck and Duck class
public:
	void display(void)
	{
		duck.display();
	} // glue-ware
};


class RedheadDuck {
private:
	Duck duck;
public:
	void display(void)
	{
		duck.display();
	} // glue-ware
};