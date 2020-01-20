#include <iostream>
#include <string>
#include <ctype.h> // will allow upper case to lower case letters or vice versa
/*
using namespace std;

int main()
{
	// For a switch statement, the switching condition holds a variable you want 
	// to check for its value.
	// the executable statement will hold the case statements which will check
	// for the values stored in variable
	// ...
	// Create a variable to hold student grades i.e. A,B,C,D,E, and F
	char grade;
	// Print the question
	cout << "Please enter your grade in letter form: " << endl;
	// User input prompt
	cin >> grade;

	switch (tolower(grade)) // tolower() uses the ctype.h library to change the input grade to lowercase
	{
		// Create the first case statement
	case 'a':
		cout << "Excelent, you have earned a distinction+" << endl;
		break;
	case 'b':
		cout << "Excelent, you have earned a distinction-" << endl;
		break;
	case 'c':
		cout << "Excelent, you have earned a merit+" << endl;
		break;
	case 'd':
		cout << "Excelent, you have earned a merit-" << endl;
		break;
	case 'e':
		cout << "Excelent, you have earned a pass" << endl;
		break;
	case 'f':
		cout << "Excelent, you have failed" << endl;
		break;
	default:
		cout << "Please enter a valid character between a to f" << endl;
		break;
	}
	system("pause");
}
/*
SWITCH STATEMENT

Switch statements are very similar to if-else else if statement for the can both
check for user input in several scenarios, the matching statement to that input
condition will run the code or else a default statement will run (equivalent else statement)

*/