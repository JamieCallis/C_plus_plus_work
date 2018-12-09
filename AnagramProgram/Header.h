#pragma once


#include<iostream>
#include<vector>
#include<string>


using namespace std;

class AnagramFinder
{
	//only supports lowercase
private:
	vector<Word> words;
	vector<SortedWord> sortedwords;
	bool sorted = false;
	void sortWords(void);
	string sortWord(string word);
	void addSortedWord(string sortedword, int wordindex);
	bool existingSortedWord(int sortedwordcount, int wordindex);
public:
	void addWord(string word);
	void displayWords(void);
	void displayAnagrams(void);
	int numberOfWords(void);
	int wordoperations = 0;
	//number of key operations - based on n = number of words
	int swapoperations = 0;
	//stored seperately because it is a factor of n and m (where m is average word length)

};

class SortedWord
{
private:

public:
	string word;
	vector<int> indexes;
	//indexes to orginal, unsorted words
};

class Word
{
private:

public:
	string word;
	bool beensorted = false;
};

template<typename T>

class TemplateBubbleSort
{
private:
	vector<T> values;
public:
	T getValue(int valueindex);
	int numberofvalues(void);
	void addValue(T value);
	void displayValues(void);
	void sortValues(void);
};



