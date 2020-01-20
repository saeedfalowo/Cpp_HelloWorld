#include <iostream>
#include <string>
/*
using namespace std;

int main()
{
	// Create a program that bugs the user with a captcha input requests until
	// he gets it right
	// Create two string variables to store the captcha and the user's input guess
	string captcha = "abc123";
	string userInput;
	// Ask for the user's input
	cout << "Enter the captcha as seen below: \n" + captcha << endl;
	// User input prompt and store value in the decleared variable
	getline(cin, userInput);
	// Create IfElse statement to check if the userinput captcha guess is right
	if (userInput == captcha)
	{
		cout << "Captcha guess is correct \n";
	}
	else
	{
		cout << "Sorry, Captcha input guess is incorrect. Try again! \n";
	}
	// WHILE LOOPS
	while (userInput != captcha)
	{
		cout << "Sorry, Captcha input guess is incorrect. Try again! \n";
		getline(cin, userInput);
	}
	// DO WHILE LOOPS
	// Create a do-while loop to repeatedly check for the user's voting age
	// Declare the variables to store the user's age and minimum age requirement
	int age; int minAgeReq = 16;
	do {
		cout << "Please enter your age: \n";
		cin >> age;
	} while (age < minAgeReq);
	// The only difference between the while and the do-while loop is that
	// the executable statement will run at least once regardless of whether
	// the acccompanying while condition is fullfilled or not
	// Whereas, the executable conditions of the while loop will only run
	// when the while condition is fullfilled
	cout << "Thank you, head towards the voting booth! \n";

	// FOR LOOPS
	// The 'for' loop conditions consists of three components;
	// i.e. for ('starting value'; 'conditional statement to tell the loop
	//			when to stop'; 'increamenting the value')
	// Create a 'for' loop to count from 1 to 10
	for (int x = 1; x < 11; x++)
	{
		cout << x << endl;
	}
	
	system("pause");
}

/*
LOOPS
This allows the program to run statements repeatedly if a condition is fulfilled
until something stops it or the condition becomes untrue.
	Can be used for running things repeatedly to save typing effort
	Constantly having the program check for certain conditions
	Displaying a list of items from a data source (database, arrays, etc.)
Types of loops
	While loops: runs statements repeatedly when the conditions are met
	Do/While loops: runs statements while
	For loops:
*/