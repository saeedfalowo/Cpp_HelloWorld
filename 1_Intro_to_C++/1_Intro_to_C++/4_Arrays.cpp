#include <iostream>
#include <string>
/*
using namespace std;

int main()
{
	// Create an array that shows a list of student names
	// Declare the array variable; datatype array name[size] = {array list}
	string students[5] = {
		"Ignatius",
		"UncleBen",
		"Sammy",
		"UncleThomas",
		"MeMyself&I"
	};
	// When working with arrays, the first iten is the 0th item
	cout << "The human at work include: " << students[0] << ", " 
		<< students[1] << ", " << students[2] << ", " << students[3] << ", " 
		<< students[4] << ", " << endl;

	// Create an array to hold the grades of each students
	// Declare the array variable; datatype array name[size] = {array list}
	int grades[5] = { 95, 99, 80, 96, 50 };
	cout << "Grades \n" << students[0] << " : " << grades[0] << endl 
		<< students[1] << " : " << grades[1] << endl 
		<< students[2] << " : " << grades[2] << endl 
		<< students[3] << " : " << grades[3] << endl 
		<< students[4] << " : " << grades[4] << endl;

	// Update a value in the array
	grades[0] = grades[0] + 2;
	cout << "NEW Grades! \n" << students[0] << " : " << grades[0] << endl;
	
	// Create a small array
	int testScores[] = { 23, 56, 100, 89, 45, 2, 344, 13, 243, 555};
	// Create a variable to find out the number of elements in the array
	int numElements = sizeof(testScores) / sizeof(testScores[0]);
	// The number of elements in the array = total size of the array /
	// the size of an element in the array
	for (int i = 0; i < numElements; i++)
	{
		cout << testScores[i] << endl;
	}
	system("pause");
}
/*
ARRAYS

An array is a data structure that allows you to store multiple values in it.
They are useful for storing a list of similar data, so its easily and conveniently
organized together in one location.
	Static Arrays: have fixed size, which determines how many items it can hold
	Dynamic Arrays: resizes itself to fit any number of data it is provided
Structure: declare datatype, name the array[size of the array(whole number)] = 
{list of the array items with each item separated by a comma}
To create an array, you dont need to include any other libraries just the datatype
library is required (string)
Example1; store a list of lottery numbers in an array
	int lotteryResults[7] = {23, 7, 9, 13, 18, 2, 10}
Example2; store a list of owned computers in an array
	string myComputers[3] = {"Dell", "Asus", "iMac"};

*/