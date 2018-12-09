#include "Header.h"

template <typename T>

Stack<T>::~Stack(void)
{
	while (pTop != nullptr)
	{
		delete NodePop();
	}

}

template <typename T>

void Stack<T>::Push(T value)
{
	Node<T>* pTmp = new Node<T>;
	pTmp->value = value;
	pTmp->pNext = pTop;
	pTop = pTmp;
}

template <typename T>

Node<T>* Stack<T>::NodePop(void)
{
	Node<T> *pTmp = pTop;
	if (pTop != nullptr) pTop = pTop->pNext; 
	return pTmp;
}

template <typename T>

T Stack<T>::Pop(void)
{
	Node<T> *pTmp = NodePop();
	int ret = 0;

	if (pTmp != nullptr)
	{
		ret = pTmp->value;
	}
	else
	{
		throw "Stack Empty";
	}

	delete pTmp;

	return ret; 
}

int main(void)
{
	Node<int>* pNode = new Node<int>;
	Node <int>* temp;

	pNode->pNext = new Node<int>; 
	

	Stack<int> pStack;
	
	pStack.Push(10);
	pStack.Push(20);
	pStack.Push(10);


	cout << pStack.Pop() << endl;
	cout << pStack.Pop() << endl;
	cout << pStack.Pop() << endl;


	system("pause");


	while (pNode != nullptr)
	{
		temp = pNode;
		pNode = pNode->pNext;
		delete temp;
	}
}
