#include <iostream>

using namespace std;

/* Polymorphism

	* General Description *



*/

class Duck
{
public:
	Duck(void);
	~Duck(void);
	virtual void quack(void); // Polymorphism
	virtual void swim(void);
	virtual void display(void);
	virtual void fly(void);
};

Duck::Duck(void)
{
	cout << "Duck Constructor" << endl;
}

Duck::~Duck(void)
{
	cout << "Duck Deconstructor" << endl;
}


void Duck::quack(void)
{
	cout << "Quack, QUACK!" << endl;
}

void Duck::swim(void)
{
	cout << "swoosh, swoosh" << endl;
}

void Duck::display(void)
{
	cout << "I am a Duck" << endl;
}

void Duck::fly(void)
{
	cout << "flap, FLAP" << endl;
}

class MallardDuck : public Duck
{
	void display(void);
};

void MallardDuck::display(void)
{
	cout << "I am a MallardDuck" << endl;
}

class RedheadDuck : public Duck
{
	void display(void);
};

void RedheadDuck::display(void)
{
	cout << "I am a RedheadDuck" << endl;
}

class DuclairDuck : public Duck
{
	void display(void);
};

void DuclairDuck::display(void)
{
	cout << "I am a DuclairDuck" << endl;
}


class RubberDuck : public Duck
{
	void display(void);
	void quack(void); //override
	void fly(void);
};

void RubberDuck::display(void)
{
	cout << "I am a RubberDuck!" << endl;
}

void RubberDuck::quack(void)
{
	cout << "I HAVE BEEN SWARN TO SCIENCE!!" << endl;
}

void RubberDuck::fly(void)
{
	cout << "I CAN'T FLY IM A GOD DAMN RUBBER DUCK, WHY CAN'T ANYONE HEAR ME!" << endl;
}


int DisplayDuck(Duck* ScreenDuck)
{
	ScreenDuck->display();
	return 1;
}

int main(void)
{

	return 0;
}
