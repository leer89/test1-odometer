#pragma once
/*----------class Odometer-------------*/
class Odometer {
	double distance, fuelEfficiency;

public:
	Odometer(); //default constructor that setsmiles and fuel to 0
	void resetMiles(); //member function to resetmiles
	void setFuelEfficiency(double amount); // memberfunction to set fuel efficent
	void addMiles(double miles); //member functionadding miles
	double getConsumption(); //member function toreturn # of gallons of gas since last reset
	double getMiles(); //member function gettingmiles
	double getFuelEfficiency(); //member functiongetting fuelefficent
};