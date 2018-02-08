
#pragma once

// Declaration of base class
class Vehicle
{
public:
	Vehicle();								// Constructor
	~Vehicle();								// Deconstructor

	// Declaration of variables
	int			num_of_seats;				// integer value of total seats
	int			num_of_passengers;			// integer value of passengers
	double 		weight;						// decimal value of weight
	bool		in_space;					// is it Elon’s roadster?

};

