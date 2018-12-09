#pragma once

#ifndef RING_H_
#define RING_H_

#include <iostream>

using namespace std;

template<class T> //can use <typename T>
class ring
{
	
public:
	class iterator;
};

template<class T>
class ring<T>::iterator
{
public: 
	void print()
	{
		cout << "Hello from iterator: " << T() << endl;
	}
};

#endif /* RING_H_*/

