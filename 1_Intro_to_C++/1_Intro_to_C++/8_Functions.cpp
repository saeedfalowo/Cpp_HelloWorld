#include <iostream>
#include <string>
/*
using namespace std;

// Create a global string variable
string name = "Eric";
float PI = 3.14;

// Create a function prototype
void printName();
float AreaOfACircle(float radius);
float CircOfACircle(float radius);

int main()
{
	// Call the function to run
	printName();
	float radius;
	cout << "Please enter a radius: ";
	cin >> radius;

	// Call the function to calculate the area of a circle
	AreaOfACircle(radius);
	// Call the function to calculate the circumference of a circle
	CircOfACircle(radius);

	cout << "The area of a circle with radius: " << radius << " is: "
		<< AreaOfACircle(radius) << endl << endl;

	cout << "The circumference of a circle with radius: " << radius << " is: "
		<< CircOfACircle(radius) << endl;

	system("pause");
}

void printName()
{
	cout << name << endl;
}

// Create a function to calculate the area of a circle
float AreaOfACircle(float radius)
{
	// A = pi*r^2		aka pi*r*r
	float areaCircle;
	areaCircle = PI * radius * radius;
	return areaCircle;
}

// Create a function to calculate the circumference of a circle
float CircOfACircle(float radius)
{
	// C = 2 * pi * r
	float circ;
	circ = 2 * PI * radius;
	return circ;
}

/*
FUNCTIONS

A function is a way to group several lines of code together to perform a task.
The structure looks like this:
|return data type| |function's name| (parameters if needed)
{
	|statement to run|
	|return value|
}
NOTE:
A void type function does not need a return statement
A function prototype is needed before the function is called outside of the main function
A function prototype tells the program that the function will eventually have to call
another function. This gives the program a headsup so as not to freak out that it will
find the called function later in the program or in a separate file.
So when the program runs into the command to call a function, it will need to first find
the original function before it can move on along

If the function is moved to the top of the program before the main function, there will
be no need for a function prototype
Functions can come in different forms:

*/