//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Project Name:     Prakt02/a1
// Project Code:     progpp02a1

// File Name:        unitTest.cpp
// File Description: Unit-Test code for the class Drink
// File Code:        progpp02a1unittest

// Author Name:	Tobia Rossi
// Author Code:	tuoyo

//-------------------------------------------------------
//Code Begin
//-------------------------------------------------------

// Application Include
#include "Drink/Drink.h"

// Test unit main code
int main() {
	// Creaters the three drink necessary to make a cuba libre
	Drink d1 = Drink("Coca Cola", 200.0, 0.0);
	Drink d2 = Drink("Havanna Club 3 anos", 40.0, 40.0);
	Drink d3 = Drink("Lemon juice", 20.0, 0.0);

	// Show the initial state with show info method
	d1.showInfo();
	d2.showInfo();
	d3.showInfo();

	// Mix the first drink with the second to make Rum&Cola
	d1.mix("Rum&Cola (Coke with Rum)", &d2);

	// Mix the new drink (Rum&Cola) with lemon juice to get a Cuba libre
	d1.mix("Cuba Libre (Coke with Rum and Lemon juice)", &d3);

	// Print the end result using show info
	d1.showInfo();
	d2.showInfo();
	d3.showInfo();

	// Return No Error
	return 0;
}

//-------------------------------------------------------
//Code End
//-------------------------------------------------------