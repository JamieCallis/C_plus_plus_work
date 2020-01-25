#include <algorithm>
#include <iostream>
#include <string>
#include <list>

using namespace std;

// Following tasks to be added. 
/*
	*** Tasks to be done *** (Show a $$ when completed, at the end of the task.)
	A) Add and remove questions from the list
	B) Insert a new question at the beginning, at the end or in the middle of the list
	C) Sort the list in ascending and descending order of marks
	D) Create a separate list of questions and merge two lists
	E) Remove the duplicate questions from the merged list (i.e. questions which have the same mark),
	leaving only questions with unique marks.
	F) Add up the question marks from the list to obtain the overall mark
	G) Consider the advantages and disadvantages of using list over the vector container.

	*** Reference material *** 
		- Lecture Notes
		- http://www.cplusplus.com/reference/list/list/
		- http://www.cplusplus.com/reference/vector/vector
*/

class Question
{
public:
	//default constructor
	Question() : qMark(0) {}
	Question(int qM, string qT)
	{
		this->qMark = qM;
		this->qTitle = qT;
	}
	int qMark;
	string qTitle;
};

void displayList(string s, list<Question>& myList)
{
	cout << endl << s << endl;
	list<Question>::const_iterator it;
	for (it = myList.cbegin(); it != myList.cend(); ++it)
	{
		cout << it->qTitle << ", mark = " << it->qMark << endl;
	}
}

int main(void)
{
	list<Question> listQuestion;
	listQuestion.push_back(Question(24, "Question 1"));
	listQuestion.push_back(Question(30, "Question 2"));
	listQuestion.push_back(Question(28, "Question 3"));
	displayList("The contents of question list: ", listQuestion);

	system("pause");
	return 0;
}


