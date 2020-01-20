#include <iostream>
#include <string>
/*
using namespace std;

// Declare the structure outside of the main function
struct Book
{
	string name; string author; int publicationYear;
}; // This defines what a 'Book' is.

int main()
{
	// Initializing a Struction - Method #1
	Book bookA =
	{
		"Harry Potter and the Sorcerer's Stone", // name
		"JK Rowling", // author
		1997 // publicationYear
	};
	// Initializing a Struction - Method #2
	Book bookB;
	bookB.name = "Harry Potter and the Chamber of Secrets";
	bookB.author = "JK Rowling";
	bookB.publicationYear = 1998;

	// Print the information for both books, bookA and bookB
	cout << "Title: " << bookA.name << endl;
	cout << "Author: " << bookA.author << endl;
	cout << "Publication Year: " << bookA.publicationYear << endl << endl;

	cout << "Title: " << bookB.name << endl;
	cout << "Author: " << bookB.author << endl;
	cout << "Publication Year: " << bookB.publicationYear << endl << endl;

	// To update
	bookB.name = "Harry Potter and the Prisoner of Azkaban";
	// The author is the same so no need to update
	bookB.publicationYear = 1999;
	cout << "Title: " << bookB.name << endl;
	cout << "Author: " << bookB.author << endl;
	cout << "Publication Year: " << bookB.publicationYear << endl << endl;

	system("pause");
}
/*
STRUCTURES

A structure is used to group related pieces of information together.
This is used to store multiple pieces of information related to one another
regardless of the data type these separate information groups belong to
This is different from arrays because arrays can only store multiple pieces
of information so long as they belong to the same data type
*/
