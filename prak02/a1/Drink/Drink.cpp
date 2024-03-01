//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Project Name:     Prakt02/a1
// Project Code:     progpp02a1

// File Name:        Drink.cpp
// File Description: Drink class implementations
// File Code:        progpp02a1drinkcpp

// Author Name:	Tobia Rossi
// Author Code:	tuoyo

//-------------------------------------------------------
//Code Begin
//-------------------------------------------------------

// Application Include
#include <iostream>
#include "Drink.h"

// Default Constructor
Drink::Drink() {
	Drink::name = "DefaultName";
	Drink::mlVolume = 0.0;
	Drink::alcoholPercentage = 0.0;
}

// Overloaded Constructor
Drink::Drink(std::string drinkName, double mlVolume, double alcoholPercentage) {
	Drink::name = drinkName;
	Drink::mlVolume = mlVolume;
	Drink::alcoholPercentage = (alcoholPercentage / 100);
}

// Method that prints info about the drink to console
void Drink::showInfo() {
	std::cout << Drink::mlVolume << " ml"
			<< Drink::name
			<< "(alcohol: " << (Drink::alcoholPercentage * 100) << " vol%)" << std::endl;
}

// Method that mixes two drinks together
void Drink::mix(std::string newName, Drink * drinkToAdd) {
	// Sets the new alcohol percentage (calcolated before adding the two so that we have the separated volumes)
	Drink::alcoholPercentage = ((Drink::mlVolume * Drink::alcoholPercentage)
						+ (drinkToAdd->mlVolume * drinkToAdd->alcoholPercentage))
						/ (Drink::mlVolume + drinkToAdd->mlVolume);

	// Adds the volume to the first drink and sets the second drink to be empty
	Drink::mlVolume += drinkToAdd->mlVolume;
	drinkToAdd->mlVolume = 0;
	
	// Set New name to the drink
	Drink::name = newName;
}

//-------------------------------------------------------
//Code End
//-------------------------------------------------------