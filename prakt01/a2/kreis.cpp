//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Project Name:		Prakt01/a2
// Project Code:		progpp01a2
// Project Description:	The code in the project calculates the area and the circumference of a circle using the radius given by the user

// File Name: 			kreis.cpp
// File Description: 	Main code implementation

// Author Name:		Tobia Rossi
// Author Code:		tuoyo

//-------------------------------------------------------
//Code Begin
//-------------------------------------------------------

// Application Include
#include <iostream>

// Namespace usage
using namespace std;

// Constants
constexpr double pi = 3.14159265359;

int main () {
	// Local Variables
	double radius; // Local variable for the radius

	// Programm
	cout << "Radius: "; 							// Ask user for an input
	cin >> radius; 								// Get input from user
	double area = pi * radius * radius; 				// Calculates area
	double circumference = 2 * pi * radius; 			// Calculate circumference
	cout << "Area = " << area << endl; 				// Prints out area on console
	cout << "Circumference = " << circumference << endl; 	// Prints out circumference on console

	// Return no error
	return 0;
}

//-------------------------------------------------------
//Code End
//-------------------------------------------------------