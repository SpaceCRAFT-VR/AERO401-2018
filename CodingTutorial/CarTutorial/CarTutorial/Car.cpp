
#include "stdafx.h"
#include "Car.h"


Car::Car(std::string	in_make,
		 std::string	in_model,
		 int			in_year,
		 std::string	in_fuel_type,
		 int			in_num_of_seats,
		 int			in_num_of_passengers,
		 double			in_weight,
		 bool			in_in_space)
{
	make				= in_make;
	model				= in_model;
	year				= in_year;
	fuel_type			= in_fuel_type;
	num_of_seats		= in_num_of_seats;
	num_of_passengers	= in_num_of_passengers;
	weight				= in_weight;
	in_space			= in_in_space;
	
	return;
}


Car::~Car()
{
}


double Car::Fuel_Mileage() {
	return miles_travelled / fuel_used;
}

void Car::Set_Color(std::string input) {
	color = input;
	return;
}