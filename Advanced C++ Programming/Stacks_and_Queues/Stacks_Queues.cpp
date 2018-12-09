#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

class Test
{
private: 
	string name;
public:
	Test(string name) : name(name)
	{

	}
	~Test()
	{
		//cout << "Object destroyed" << endl;
	}

	void print()
	{
		cout << name << endl;
	}
};

int main(void){
	
	/*
		*** STACK INFORMATION ***

	  * Last in first out. LIFO
			stack<Test> testStack; 

	  *inputing items into the STL stack. 
			testStack.push(Test("Mike"));
			testStack.push(Test("John"));
			testStack.push(Test("Sue"));

	  * outputting items off the STL stack.
			testStack.pop();
	  * removes item off the top of the stack.
	
	  * This is invalid code! Object is destroyed. 
			Test &test1 = testStack.top();
			testStack.pop();
			test1.print(); 
	  * Reference refers to destroyed objects

	 * Looks at the top of the stack. 
			Test test1 = testStack.top(); 
			test1.print();

	 * returning a reference to the object within the STL stack. Using a default shallow copy. Copies the values of the instance variables. 
			Test test2 = testStack.top();  
			test2.print();

	 * Loops through and prints all items off the stack. 
			while (testStack.size() > 0)
			{
				Test &test = testStack.top();
				test.print();
				testStack.pop();
			}

	 * A for loop can be used to print items off the stack, it is not just limited to the while loop. 
	 * The stack can also be sorted, using the algorithm library, or by creating your own algorithm.
	*/

	 /*
			*** QUEUE INFORMATION *** 
	*/

		//FIFO - First item in, is the first item off the STL queue. 
	queue<Test> testQueue; 
		
		// Adding items onto the queue, this can be done using push. When using your own Queue you would use enqueue, and deqeue for push, and pop. 
	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	testQueue.back().print();
	


		//Loops through and prints off items off the Queue. 
	while (testQueue.size() > 0)
	{
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0; 
}