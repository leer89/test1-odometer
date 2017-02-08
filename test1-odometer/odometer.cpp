
#include "stdafx.h"
#include "odometer.h"

// constructor to set distance and full efficiency to 0
Odometer::Odometer() {
	distance = 0;
	fuelEfficiency = 0;
};

// reset odometer to 0
void Odometer::resetMiles() {
	distance = 0;
}

void Odometer::setFuelEfficiency(double amount) {
	fuelEfficiency = amount;
}

// accepts miles driven and adds to odometer total
void Odometer::addMiles(double miles) {
	distance += miles;
}

double Odometer::getConsumption() {
	return distance / 10; //made up value of 10miles per gallon
}

double Odometer::getMiles() {
	return distance;
}

// returns number of gallons of gasoline
double Odometer::getFuelEfficiency() {
	return fuelEfficiency;
}