#include <iostream>
#include <string>

using namespace std;
/*
int main()
{
	/*
	A string represents a sequence of characters, such as words and sentences
	Mathematical operations on numbers stored in a string variable is impossible
	Will need to convert those numbers to numerical data types first before
	performing numerical operations on them, such as integer or float
	*//*
	string msg;
	msg = "This is my message";
	cout << msg << endl;
	// If we use 'cin' to get the message from the user, 'cin' will only return
	// the first word this is because 'cin' detects the end on an input by the
	// first blank space it sees
	// So we will use the 'getline()' function instead to 'cin' to retrieve sentences
	// from the user
	string msg2;
	cout << "Please enter a message: \n";
	getline(cin, msg2);
	cout << "Message Starts: \n {\n" << msg2 << endl << "}\n Message Ends \n";

	// To copy strings
	string msg3 = "Hello", msg4 = "World", msg5;
	// Copy strings - Method 1
	// Copy msg3 and store in msg5
	msg5 = msg3;
	cout << "Message5 == " << msg5 << " and Message3 == " << msg3 << endl;
	// Copy strings - Method 2
	// Copy msg3 and store in msg5
	msg5.assign(msg3);
	cout << "Message5 == " << msg5 << " and Message3 == " << msg3 << endl;

	// To concatenate strings (to combine strings)
	// just use + to combine string variables
	cout << "Concatenated messages = " << msg3 + " " + msg4 << endl;
	msg5 = msg3 + " " + msg4;
	cout << "Concatenated messages = " << msg5 << endl;

	// To find the length of a string
	// just use the size() function
	cout << "The size of Message3 is: " << msg3.size() << endl;
	cout << "The size of Message5 is: " << msg5.size() << endl;

	// Password length check
	// declare the password string variable
	string password;
	// Print the request
	cout << "Please create your password: \n";
	// User input prompt and store value in the decleared variable
	getline(cin, password);
	// Check the size of the password
	if (password.size() < 6)
	{
		cout << "Your password should be no less than 6 characters long \n";
	}
	else
	{
		cout << "Password length adequate! \n";
	}

	system("pause");
}*/
