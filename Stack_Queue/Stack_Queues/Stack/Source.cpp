#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	Node(int i, Node* ptn) {
		val = i;
		next = ptn;
	}
	int getVal(void) {
		return val;
	}
	Node* getNext(void) {
		return next;
	}
private:
	Node* next;
	int val;
};

class Stack {
public:
	Stack() { top = 0; }
	~Stack() {}
	void push(int i) {
		Node* tmp = new Node(i, top);
		top = tmp;
	}
	int pop() {
		int ret = 0;
		
		if (top != nullptr) {
			ret = top->getVal();
			Node* tmp = top;
			top = top->getNext();
			delete tmp;
		}
		else throw "stack empty";

		return ret;
	}
private:
	Node* top;
};

int main() {
	
	Stack s;
	s.push(10);

	try
	{
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	getchar();
	return 0;
};

