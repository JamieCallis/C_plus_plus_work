#include <iostream>

using namespace std;

/*	Notes on Inheritiance

	* General Description *

	Inheritance is a mechanism by which interfaces by super classes are inherited
	by child classes in order for code reuse to occur. 

	* More technical details* 
		- can inherit using one of three different categories, each have there own meaning
			- public
			- private
			- protected
*/


class Duck 
{
public:
	Duck(void);
	~Duck(void);
	void quack(void);
	void swim(void);
	void display(void);
};

class MallardDuck : public Duck // inheritance link between MallardDuck, and Duck
{
	void display(void);
};

class RedheadDuck : public Duck 
{
	void display(void);
};Duck::Duck(void){	cout << "Constructing Duck" << endl;}Duck::~Duck(void){	cout << "Deconstructing Duck" << endl;}void Duck::quack(void){	cout << "quack, QUACK!" << endl;}void Duck::swim(void){	cout << "Swimming" << endl;}void Duck::display(void){	cout << "I am a duck!" << endl;}void MallardDuck::display(void){	cout << "I am a Mallard Duck" << endl;}void RedheadDuck::display(void){	cout << "I am a redhead Duck" << endl;}int main(void){	return 0;}