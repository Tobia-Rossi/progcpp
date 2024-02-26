//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Repository URL: 		https://github.com/Tobia-Rossi/progcpp

// Project Name:		Prakt01/a4
// Project Code:		progpp01a4
// Project Description:	The code in the project asks for two floating point (double) numbers and return both their sum and product formatted using streams

// File Name: 			doublestuff.cpp
// File Description: 	Main code implementation

// Author Name:		Tobia Rossi
// Author Code:		tuoyo

//-------------------------------------------------------
//Code Begin
//-------------------------------------------------------

// Application Include
#include <iostream> // For cout, cin, streams, ...
#include <iomanip>  // For setprecision()

// Namespace usage
using namespace std;

// Constants
const int doublePrecision = 16;
const int lenghtOfNumberString = 23;

// Main Function
int main () {
	// Local Variables
	double a; // Local variable for the first number
	double b; // Local variable for the second number

	// Programm
	cout << "Number 1: ";  // Ask user to input a number
	cin >> a;              // Get input from user
	cout << "Number 2: ";  // Ask user to input a number
	cin >> b;              // Get input from user

	// Prints formatted table in console
	cout << "|" << setw(lenghtOfNumberString) << "Number 1" 
		<< " |" << setw(lenghtOfNumberString) << "Number 2" 
		<< " |" << setw(lenghtOfNumberString) <<  "Sum"
		<< " |" << setw(lenghtOfNumberString) << "Product" << " |" << endl;

	cout << "|" << setprecision(doublePrecision) 
		<< setw(lenghtOfNumberString) << a << " |"
		<< setw(lenghtOfNumberString) << b << " |"
		<< setw(lenghtOfNumberString) << (a+b) << " |"
		<< setw(lenghtOfNumberString) << (a*b) << " |" << endl;

	/* Example of table output with large negative output (max precision of double 16 decimal digits)
	|               Number 1 |               Number 2 |                    Sum |                Product |
	|      12345678910.11121 |     -98765432112451.12 |     -98753086433541.02 | -1.219326312278709e+24 |
	*/

	/* Example of table output with small positive output
	|               Number 1 |               Number 2 |                    Sum |                Product |
	|                 123.12 |                657.145 |                780.265 |             80907.6924 |
	*/

	// Return no error
	return 0;
}

//-------------------------------------------------------
//Code End
//-------------------------------------------------------