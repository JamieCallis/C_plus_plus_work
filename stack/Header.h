#pragma once

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Node
{

public:
	T value;
	Node *pNext = nullptr;
};

template<typename T>
class Stack
{
private:
	Node<T> *pTop = nullptr;

public:
	~Stack(void);
	void Push(T value);
	Node<T>* NodePop(void);
	T Pop(void);
};