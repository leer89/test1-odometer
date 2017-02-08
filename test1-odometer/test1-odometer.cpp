// test1-odometer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "ODOMETER.h"

using namespace std;

int main() {

	// constructor that sets distance and fuel efficiency to 0
	Odometer test1; 

	cout << "Initial Odometer: " << endl;
	cout << "Miles Driven: " << test1.getMiles() << endl;
	cout << "Fuel Efficency: " << test1.getFuelEfficiency() << endl << endl;

	cout << "Adding 54.5 miles to odometer" << endl;
	test1.addMiles(54.5); //add 54.5 miles
	cout << "Miles Driven: " << test1.getMiles() << endl << endl;

	cout << "The consumption rate of 54.5 is: " << endl;
	//find out the consumption rate
	cout << "Fuel Efficency: " << test1.getConsumption() << " miles per gallon(MPG)" << endl << endl;

	cout << "Reseting the odometer" << endl;
	test1.resetMiles(); //reset miles
	cout << "Miles Driven: " << test1.getMiles() << endl;

	return 0;
}