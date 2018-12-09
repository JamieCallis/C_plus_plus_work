#define __STDC_WANT_LIB_EXT1__ 1

#include<iostream>
#include<string.h>
#include<assert.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Node
{
	char *name;
	int age;
	Node(char *n = 0, int a = 0)
	{
		name = _strdup(n);
		age = a;
	}
	//Allows for copying e.g. node2(node1);
	Node(const Node& n) // copy constructor;
	{
		name = _strdup(n.name);
		age = n.age;
	}
	// Allows for = to work e.g. node1 = node2; 
	Node& operator=(const Node& n) // asignment overloader
	{
		if (this != &n)
		{
			if (name != 0)
			{
				free(name);
				name = _strdup(n.name);
				age = n.age;
			}
			return *this;
		}
	}
	~Node() // Deconstructor. A destructor is a function that is automatically invoked when an object is destroyed. 
	{
		if (name != 0) free(name);
	}
};

int main(void)
{
	Node node1("Roger", 20), node2(node1); // or node2 = node1; 

	node2.name = "Wendy";
	node2.age = 30;
	cout << node1.name << ' ' << node1.age << ' ' << node2.name << ' ' << node2.age;
	return 0; 
}