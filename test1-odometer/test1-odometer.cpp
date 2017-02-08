// test1-odometer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "ODOMETER.h"

using namespace std;

int main() {

	Odometer test1;

	cout << "Initial Odometer: 0\nInitial Fuel Efficiency: 27 mpg" << endl;
	cout << "Miles Driven: " << test1.getMiles() << endl;
	cout << "Fuel Efficency: " << test1.getFuelEfficiency() << endl << endl;

	cout << "How many miles driven trip 2?: 120" << endl;
	cout << "Adding 120 miles to odometer" << endl;
	test1.addMiles(120); //120
	cout << "Miles Driven: " << test1.getMiles() << endl << endl;

	cout << "How many miles driven trip 2?: 350" << endl;
	cout << "Adding 350 miles to odometer" << endl;
	test1.addMiles(350); //350
	cout << "Miles Driven: " << test1.getMiles() << endl << endl;

	cout << "The consumption rate of " << test1.getMiles() << " is: " << endl;
	//find out the consumption rate
	cout << "Fuel Efficency: " << test1.getConsumption() << " miles per gallon(MPG)" << endl << endl;

	cout << "Reseting the odometer" << endl;
	test1.resetMiles(); //reset miles
	cout << "Miles Driven: " << test1.getMiles() << endl;
}
