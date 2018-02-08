/*************************************************************************
**********************(COPYRIGHT INFORMATION)*****************************
**************************************************************************/

/*************************************************************************
PURPOSE:
	(Class includes )
LANGUAGE:
	(C++)
LIBRARY DEPENDENCIES:
	(
	 ()
	)
REFERENCES:
	(
	 (Reference #1)
	 (Reference #n)
	)
ASSUMPTIONS AND LIMITATIONS:
	(
	 (Assumption #1)
	 (Assumption #n)
	)
PROGRAMMERS:
	(
	 ((Robert Hogan) (T/A Training) (2018/02/08) (Initial implementation))
	)
**************************************************************************/

#pragma once

#include "Vehicle.h"
#include <string>

class Car : public Vehicle
{
public:
	Car(std::string		in_make,
		std::string		in_model,
		int				in_year,
		std::string		in_fuel_type,
		int				in_num_of_seats,
		int				in_num_of_passengers,
		double			in_weight,
		bool			in_in_space);		// Constructor						// Constructor
	~Car();									// Deconstructor
	std::string		make;
	std::string		model;
	int				year;
	std::string		color;
	std::string		fuel_type;
	double			miles_travelled;
	double			fuel_used;


	double		Fuel_Mileage();
	void		Set_Color(std::string input);

};