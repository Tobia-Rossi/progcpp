//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Project Name:     Prakt02/a1
// Project Code:     progpp02a1

// File Name:        Drink.h
// File Description: Drink class definitions
// File Code:        progpp02a1drinkh

// Author Name:	Tobia Rossi
// Author Code:	tuoyo

//-------------------------------------------------------
//Code Begin
//-------------------------------------------------------

// Application Includes
#include <string>

#ifndef __DRINK_H__ // Header Guard start
#define __DRINK_H__

class Drink {
	public:
		// Attributes
		std::string name;
		double mlVolume;
		double alcoholPercentage;

		// Methods
		void showInfo();
		void mix(std::string newName, Drink * drinkToAdd);

		// Overloaded Methods
		Drink();
		Drink(std::string drinkName, double mlVolume, double alcoholPercentage);
};

#endif // __DRINK_H__ header guard end

//-------------------------------------------------------
//Code End
//-------------------------------------------------------