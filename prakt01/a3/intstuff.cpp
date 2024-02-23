//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Repository URL: 		https://github.com/Tobia-Rossi/progcpp

// Project Name:		Prakt01/a3
// Project Code:		progpp01a3
// Project Description:	The code in the project asks for two integer numbers and return both their sum and product formatted using streams

// File Name: 			intstuff.cpp
// File Description: 	Main code implementation

// Author Name:		Tobia Rossi
// Author Code:		tuoyo

//-------------------------------------------------------
//Code Begin
//-------------------------------------------------------

// Application Include
#include <iostream> // For cout, cin, streams, ...
#include <iomanip>  // For setw()

// Namespace usage
using namespace std;

// Constants
const int n = 11;

// Main Function
int main () {
	// Local Variables
	int a; // Local variable for the first number
	int b; // Local variable for the second number

	// Programm
	cout << "Number 1: ";  // Ask user to input a number
	cin >> a;              // Get input from user
	cout << "Number 2: ";  // Ask user to input a number
	cin >> b;              // Get input from user

	// Prints formatted table in console
	cout << "|    Number 1 |    Number 2 |         Sum |     Product |" << endl;
	cout << "| " << setw(n) << a << " | " << setw(n) << b << " | " << setw(n) << (a+b) << " | " << setw(n) << (a*b) << " |" << endl;

	/* Example of table with number at max lenght int
	|    Number 1 |    Number 2 |         Sum |     Product |
	|    12341234 |         231 |    12341465 | -1444142242 |
	*/

	// Return no error
	return 0;
}

//-------------------------------------------------------
//Code End
//-------------------------------------------------------