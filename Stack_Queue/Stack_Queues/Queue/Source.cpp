#include <iostream>
#include <string>

using namespace std;
class Node
{
public:
	Node(int value, Node* nextptr, Node* prevptr = nullptr, int currentpriority = 0) {
		this->val = value;
		next = nextptr;
		prev = prevptr;
		priority = currentpriority;
	}
	int getVal() {
		return val;
	}
	Node* getNext() {
		return next;
	}
	Node* getPrev() {
		return prev;
	}
	void setPrev(Node* prevptr) {
		prev = prevptr;
	}
	void setNext(Node* nextptr) {
		next = nextptr;
	}
private:
	Node* next;
	Node* prev;
	int priority;
	int val;
};

class Queue
{
protected:
	Node* back;
	Node* front;
public:
	Queue(void) {
		front = back = nullptr;
	}
	~Queue(void) {
		while (front != nullptr) { delete NodeDequeue(); }
	}
	void Enqueue(int val) {
		Node* tmp = new Node(val, back);
		back = tmp;
		if (front == nullptr) front = back;
		else
		{
			tmp = back->getNext();
			tmp->setPrev(back);
		}
	}

	Node* NodeDequeue(void) {
		Node* tmp = front;
		if (front != nullptr)
		{
			front = front->getPrev();
			if (front != nullptr) front->setNext(nullptr);
		}
		return tmp;
	}

	int Dequeue(void) {
		int ret = 0;
		if (front != nullptr) {
			Node* tmp = NodeDequeue();
			ret = tmp->getVal();
			if (front == nullptr) back = front;
		}
		else {
			throw "Queue Empty";
		}
		
		return ret;
	}
};

int main()
{
	Queue numbers;
	numbers.Enqueue(10);
	numbers.Enqueue(20);
	numbers.Enqueue(30);
	try {
	cout << numbers.Dequeue() << " ";
	cout << numbers.Dequeue() << " ";
	cout << numbers.Dequeue() << " ";
	cout << numbers.Dequeue() << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	system("pause");
	return 0;
}
