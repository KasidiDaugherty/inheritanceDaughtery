#include "truck.h"

Truck::Truck(string manu, int yearBuilt, int towingCapacity) : Vehicle(manu, yearBuilt), towingCapacity(towingCapacity) {}			//constructor definition for the Truck class

int Truck::getTowingCapacity()
{
	return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity)
{
	this -> towingCapacity = towingCapacity;																						//Using the pointer this to assign the value of towingCapacity of the current object
}

string Truck::getTruckManu()
{
	return truckManu;
}

void Truck::setTruckManu(string truckManu)
{
	this->truckManu = truckManu;																						//Using the pointer this to assign the value of truck manufactor of the current object
}

int Truck::getTruckYearBuilt()
{
	return truckYearBuilt;
}

void Truck::seTruckYearBuilt(int truckYearBuilt)
{
	this->truckYearBuilt = truckYearBuilt;																						//Using the pointer this to assign the value of the year the truck was built of the current object

}

void Truck::displayInfo()
{
	cout << "Manufacturer: " << truckManu << endl;
	cout << "Year Built: " << truckYearBuilt << endl;
	cout << "Towing Capacity: " << towingCapacity << endl;
}
