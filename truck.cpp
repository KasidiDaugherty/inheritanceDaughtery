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

void Truck::displayInfo() 
{
	Vehicle::displayInfo(); 																										// using the displayInfo function from the vehicle class
	cout << "Towing Capacity: " << towingCapacity << endl;
}
