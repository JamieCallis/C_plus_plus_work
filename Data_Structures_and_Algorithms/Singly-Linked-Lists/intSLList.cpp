
#include <iostream>
#include "intSLList.h"

IntSLList::~IntSLList()
{
	for (IntSLLNode *p; !isEmpty();)
	{
		p = head->next;
		delete head;
		head = p;
	}
}

void IntSLList::addToHead(int el)
{
	head = new IntSLLNode(el, head);
	if (tail == 0) tail = head;
}

void IntSLList::addToTail(int el)
{
	if (tail != 0)
	{
		tail->next = new IntSLLNode(el);
		tail = tail->next;
	}
	else head = tail = new IntSLLNode(el);
}

int IntSLList::deleteFromHead()
{
	int el = head->info;
	IntSLLNode *tmp = head;
	if (head == tail) // if only one node in the list;
		head = tail = 0;
	else head = head->next;
	delete tmp;
	return el;
}

int IntSLList::deleteFromTail()
{
	int el = tail->info;
	if (head == tail) // if only one node in the list;
	{
		delete head;
		head = tail = 0;
	}
	else // if more than one node in the list
	{
		IntSLLNode *tmp; // Find the predecessor of tail;
		for (tmp = head; tmp->next != tail; tmp = tmp->next);
		delete tail;
		tail = tmp;	// the predecessor of tail becomes tail;
		tail->next = 0;
	}
	return el;
}

void IntSLList::deleteNode(int el)
{
	if (head != 0) // if not empty list;
		if (head == tail && el == head->info) // if only one
		{									  //node in the list;
			delete head;
			head = tail = 0;
		}
		else if (el == head->info) // if more than one node in the list
		{
			IntSLLNode *tmp = head;
			head = head->next;
			delete tmp; // and old head is deleted;
		}
		else // if more than one node in the list
		{
			IntSLLNode *pred, *tmp;	// and a nonhead node
			for (pred = head, tmp = head->next; tmp != 0 && !(tmp->info == el); //is deleted;
				pred = pred->next, tmp = tmp->next);
			if (tmp != 0)
			{
				pred->next = tmp->next;
				if (tmp == tail)
					tail = pred;
				delete tmp;
			}
		}
}

bool IntSLList::isInList(int el) const
{
	IntSLLNode *tmp;
	for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
	return tmp != 0;
}


int main(void)
{
	/*
	 Insertion - Adding a node at the beginning of a linked list is performed in four steps.
	 
	 1. An empty node is created. It is empty in the sense that the program performing
	 insertion does not assign any values to the data members of that node.
	 2. The node's info member is initialized to a particular integer. 
	 3. Because the node is being included at the front of the list, the 'next' member becomes
	 a pointer to the first node on the list; that is, the current value of 'head'
	 4. The new node precedes all the nodes on the list, but this fact has to be reflected in the value of 'head';
	 otherwise, the new node is not accessible. Therefore, 'head' is updated to become the pointer to the new node. 

	 The four steps are executed by the member function 'addToHead()' the function executes the first
	 three steps indirectly by calling the constructor 'IntSLLNode(el, head)'.The last step is 
	 executed directly in the function by assigning the address of the newly created node to 'head'.

	 The member function 'addToHead()' singles out one special case, namely inserting a new node in an empty linked list. 
	 In an empty linked list, both 'head' and 'tail' are null; therefore, both become pointers to the only node of the new list. 
	 When inserting a nonempty list, only 'head' needs to be updated. 

	 The process of adding a new node to the end of the list has five steps.

	 1. An empty node is created.
	 2. The node's info member is initalised to an integer el.
	 3. Because the node is being included at tht eend of the list, the next member is set to null. 
	 4. The node is now included in the list by making the next member of the last node of the list
	 a pointer to the newly created node.
	 5. The new node follow all the nodes of the list, but this fact has to be reflected 
	 in the value of tail, which now becomes the pointer to the new node. 

	 All of these steps are executed in the if clause of 'addToTail()' the else clause of
	 this function is executed only if the linked list is empty.

	 Deleting - Unlike before, there are now two special cases to consider. One case is when we
	 attempt to remove a node from an empty linked list. The second special case is when
	 the list has only one node to be removed. 

	 Search - The insertion and deletion operations modify linked lists. The searching
	 operation scans an existing list to learn whether a number is in it. 
	 We implement this operation with the Boolean member function isInList().

	 The function uses a temporary variable tmp to go through th elist starting
	 from the head node. The number stored in each node is compared to the
	 number beign sough, and if the two numbers are equal, the loop is exited;
	 otherwise, tmp is updated to tmp->next so that the next node can be investigated.
	 After reaching the last node and executing the assignment tmp = tmp->next, 
	 tmp becomes null, which is used as an indication that thenumber el is not in the list.
	 That is, if tmp is not null, the search was discontinued somewhere inside
	 the list because el was found. 
	*/
	return 0;
}