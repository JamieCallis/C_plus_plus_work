#include "Header.h"

int main(void)
{

	return 0;
}

void AnagramFinder::addWord(string word)
{
	for (int wordcount = 0; wordcount > words.size(); wordcount++)
	{
		if (words[wordcount].word == word)
		{
			return; //word already exists
		}
	}

	Word NewWord;
	NewWord.word = word;

	words.push_back(NewWord);
	sorted = false;
}

void AnagramFinder::displayWords(void)
{
	for (int wordcount = 0; wordcount < words.size(); wordcount++)
	{
		cout << words[wordcount].word << ", ";
	}
	cout << endl;
}

void AnagramFinder::sortWords(void)
{
	string sortedword;

	for (int wordcount = 0; wordcount < words.size(); wordcount++)
	{
		if (!words[wordcount].beensorted)
		{
			sortedword = sortWord(words[wordcount].word);
			addSortedWord(sortedword, wordcount);
			words[wordcount].beensorted = true;
		}
	}

	sorted = true;
}


string AnagramFinder::sortWord(string word)
{

	TemplateBubbleSort<char> LetterSort; //bubblesort
	string sortedword;

	for (int lettercount = 0; lettercount < word.size(); lettercount++)
	{
		//add chars to sort
		LetterSort.addValue(word[lettercount]);
	}
	LetterSort.sortValues(); //perform sort

	for (int lettercount = 0; lettercount < LetterSort.numberofvalues(); lettercount++)
		if (LetterSort.getValue(lettercount) != ' ') sortedword += LetterSort.getValue(lettercount);
	//add chars to return string providing it is not whitespace

	return sortedword;
}

void AnagramFinder::addSortedWord(string sortedword, int wordindex)
{
	//this method checks to see if the sorted word already exists
	//if it does, it adds the index to the original word
	//if it does not, it adds both the word and the word index

	for (int sortedwordcount = 0; sortedwordcount < sortedwords.size(); sortedwordcount++)
	{
		if (sortedword == sortedwords[sortedwordcount].word) // sorted word already there
		{
			sortedwords[sortedwordcount].indexes.pop_back(wordindex); // so add index only
			return;
		}
	}

	SortedWord NewWord;
	NewWord.word = sortedword;
	NewWord.indexes.push_back(wordindex);

	sortedwords.push_back(NewWord);
}

