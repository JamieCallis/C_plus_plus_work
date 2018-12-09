#include <iostream>
#include<vector>
#include <algorithm>
#include <functional> //greater<T>

using namespace std;

/*
	* A vector, which is a data structure with contiguous blocks of memory just like an array. Because memory locations
	* are contiguous, they can be randomly accessed so that the access time of any element of the vector is constant.

	* Storage is managed automatically within the STL library, so that on an attempt to insert an element into a full vector,
	* a large memory block is allocated for the vector, the vector elements are copied to the new block, and the old block is released.
	* A vector is thus a flexible array; that is, an array whose size can be dynamically changed.

	* To use the class vector, the program has to contain the 'include' instruction
		
		 #include <vector>

	* The class vector has four constructors. The delcation

		vector<int> v5(5);

	* uses the same constructor as declation

		vector<int> v2(3,7);

	* but for vector v5, the element with which it is filled is determined by the default integer constructor, which is zero.

	* Vector v1, which is declared empty and then new elements are inserted with the function 'push_back()'.
	* Adding a new element to the vector is usually fast unless the vector is full and has to be copied to a new block. 
	* This situation occurs if the size of the vector equals its capcity. But if the vector has some unused cells, it can accommodate
	* a new element immediately in constant time. 
	
	*** Delcation of an empty vector ***
	
			vector<int> v1;

	* The last declation uses a copy constructor

		vector<int> v6(v5);

	* This will copy the information from v5 into v6. 
*/



template<class T>
void printVector(char *s, const vector<T>& v)
{
	cout << s << "= (";
	if (v.size() == 0)
	{
		cout << ")\n";
		return;
	}
	typename vector<T>::const_iterator i = v.begin();
	for (; i != v.end() - 1; i++)
		cout << *i << ' ';
	cout << *i << ")\n";
}

bool f1(int n)
{
	return n < 4;
}





int main(void)
{
// Generic STL vectors

	int a[] = { 1,2,3,4,5 };
	vector<int> v1;			//v1 is empty, size = 0, capacity = 0
	printVector("v1", v1);
	for (int j = 1; j <= 5; j++)
		v1.push_back(j);	// v1 = (1 2 3 4 5), size = 5, capacity = 8
	vector<int> v2(3, 7);	// v2 = (7 7 7)
	vector<int> ::iterator i1 = v1.begin() + 1;
	vector<int> v3(i1, i1 + 2);	// v3 = (2, 3), size 2, capacity 2
	vector<int>v4(v1);	// v4 = (1 2 3 4 5), size = 5, capacity = 5
	vector<int> v5(5);	// v5 = (0 0 0 0 0)
	v5[1] = v5.at(3)=9;	// v5 = (0 9 0 9 0)
	v3.reserve(6);		// v3 = (2 3), size =2, capacity = 6
	v4.resize(7);		// v4 = (1 2 3 4 5 0 0), size = 7, capacity = 10
	v4.resize(3);		// v4 = (1 2 3), size =3, capcity = 10
	v4.clear();			// v4 is empty, size = 0, capcity = 10 (!)
	v4.insert(v4.end(), v3[1]);						// v4 = (3)
	v4.insert(v4.end(), v3.at(1));					// v4 = (3 3)
	v4.insert(v4.end(), 2, 4);						// v4 = (3 3 4 4)
	v4.insert(v4.end(),v1.begin()+1,v1.end()-1);	// v4 = (3 3 4 4 2 3 4)
	v4.erase(v4.end() - 2);							// v4 = (3 3 4 4 2 4)
	v4.erase(v4.begin(), v4.begin() + 4);			// v4 = (2 4)
	v4.assign(3, 8);								// v4 = (8 8 8)
	v4.assign(a, a + 3);							// v4 = (1 2 3)
	vector<int>::reverse_iterator i3 = v4.rbegin();
	for (; i3 != v4.rend(); i3++)
		cout << *i3 << ' ';						// print: 3 2 1
	cout << endl;

// Algorithms

	v5[0] = 3;									// v5 = (3 9 0 9 0)
	replace_if(v5.begin(), v5.end(), f1, 7);	// v5 = (7 9 7 9 7)
	v5[0] = 3; v5[2] = v5[4] = 0;				// v5 = (3 9 0 9 0)
	replace(v5.begin(), v5.end(), 0, 7);		// v5 = (3 9 7 9 7)
	sort(v5.begin(), v5.end());					// v5 = (3 7 7 9 9)
	sort(v5.begin(), v5.end(), greater<int>()); // v5 = (9 9 7 7 3)
	v5.front() = 2;								// v5 = (2 9 7 7 3)
	return 0;
}