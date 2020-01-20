//#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
/*
int main()
{
	// To grab the users' input, we will use 'cin'
	// cin asks for the user to input a variable depending on the 
	// data type of the decleared variable
	// First, declear the target variable
	int myFavNum;
	// Print the question
	cout << "What is your favorite number?\n";
	// User input prompt and store value in the decleared variable
	cin >> myFavNum;
	// Print the saved value
	cout << "Your favorite number is: " << myFavNum << endl;

	// STRINGS
	// To play with strings, we need to include the string library
	// at the top of the code
	// Declare a string variable
	string str1;
	// Print the question
	cout << "What is your name? \n";
	// User input prompt and store value in the decleared variable
	cin >> str1;
	// Print the saved value
	cout << "Your name is...: " << str1 << "\n Urgh, too much info tho" << endl;
	// We should notice that the console window only displays the first word of
	// the user's input sentence.
	// this is because 'cin' detects the end on an input by the first blank space it sees
	system("pause");
}

/*
NOTE

Whats the difference between char and string?
Char only stores a single character
*/