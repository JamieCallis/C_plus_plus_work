#include <iostream>

using namespace std;

//Abstract class
class Animal
{
	//abstract class, contains methods, whcih have no implimentation. Pure virtual methods. 
	// Can not instigate abstract class, will produce an error.

public:
	virtual void run() = 0;
	virtual void speak() = 0; // Pure virtual method
};

class Dog : public Animal // When inheriting a abstract class, you need to give definitions for all methods. 
{						// Otherwise, the class inheriting will become an abstract class too. 
public:
	virtual void run()
	{
		cout << "Padd, padd" << endl;
	}
	virtual void speak()
	{
		cout << "Woof!" << endl;
	}
};

class Labrador : public Dog
{
public:
	Labrador()
	{
		cout << "new labrador" << endl;
	}
	virtual void run()
	{
		cout << "Labrador running" << endl;
	}
};

void test(Animal &a)
{
	a.run();
}
int main(void)
{
	// Need a constructor to create an array of an object. 
	Labrador lab2[5];

	Dog dog;
	dog.speak();

	Labrador lab;
	lab.run();
	lab.speak();

	//But we can do a pointer; // Can create an pointer array of the super class, and store any subclass derived from the super class. 
	Animal *animals[5];
	animals[0] = &lab;

	animals[0]->speak();


	test(lab);

	return 0;
}