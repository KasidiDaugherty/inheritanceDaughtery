#include "vehicle.h"
#include <iostream>
#include <string>

using namespace std;

Vehicle::Vehicle(string manu, int yearBuilt) : manu(manu), yearBuilt(yearBuilt) {}		//constructor definition for the Vehicle class

string Vehicle::getManu()
{
	return manu;
}

void Vehicle::setManu(string manu)
{
	this->manu = manu;																	//Using the pointer this to assign the value of manu of the current object
}

int Vehicle::getYearBuilt()
{
	return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt)
{
	this->yearBuilt = yearBuilt;														//Using the pointer this to assign the value of yearBuilt of the current object
}

void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manu << endl;
	cout << "Year Built: " << yearBuilt << endl;
}