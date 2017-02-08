
#include "odometer.h"

Odometer::Odometer() {
	milesDriven = 0;
	fuelEfficent = 0;
};

void Odometer::resetMiles() {
	milesDriven = 0;
}

void Odometer::setFuelEfficent(double amount) {
	fuelEfficent = amount;
}

void Odometer::addMiles(double miles) {
	milesDriven += miles;
}

double Odometer::getConsumption() {
	return milesDriven / 10; //made up value of 10miles per gallon
}

double Odometer::getMiles() {
	return milesDriven;
}

double Odometer::getFuelEfficent() {
	return fuelEfficent;
}
