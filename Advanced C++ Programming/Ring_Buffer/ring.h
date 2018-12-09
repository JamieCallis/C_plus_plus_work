#pragma once

#ifndef RING_H_
#define RING_H_

#include <iostream>

using namespace std;

template<class T> //can use <typename T>
class ring
{
private:
	int m_pos;
	int m_size;
	T *m_values;
public:
	class iterator;
public:
	ring(int size) : m_pos(0), m_size(size), m_values(nullptr)
	{
		m_values = new T[size];
	}
	~ring()
	{
		delete [] m_values;
	}
	int size()
	{
		return m_size;
	}

	void add(T value)
	{
		m_values[m_pos++] = value; // m_pos++ // post fix
		if (m_pos == m_size) m_pos = 0;
	}

	T &get(int pos)
	{
		return m_values[pos];
	}
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

