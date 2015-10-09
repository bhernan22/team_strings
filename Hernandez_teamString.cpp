// Bianca Hernandez
// Created: Oct. 8
// summary: 
//
//*******************************************

#include<iostream>
#include<string>

using namespace std;

string initials(string strA);
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

int countAlpha(string strA);
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 

int countWords(string strA);
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.

bool isPalindrome(string strA);
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome

int main()
{	
	assert(countAlpha("E = mc^2") == 3); // testcase 1
	assert(countAlpha("Can You Find Me??") == 12); // testcase 2
	cout << "Expected: 13" << endl;	// testcase 3 expected output
	cout << "Actually: " << countAlpha("Lovely Weather!!") << endl; // testcase 3 actual output	
	
	return 0;
}
int countAlpha(string name)
{
	int count = 0;
	for(int i = 0; i < name.length(); i++ )
	{
		if(isalpha(name.at(i))) // isalpha checks to see if character is alphabetical
		{
			count ++;
		}
	}
	return count;
}

