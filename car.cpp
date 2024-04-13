#include "car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string manu, int yearBuilt, int doors) : Vehicle(manu, yearBuilt), doors(doors) {}	//constructor definition for the Car class

int Car::getDoors()
{
	return doors;
}

void Car::setDoors(int doors)
{
	this->doors = doors;																	//Using the pointer this to assign the value of doors of the current object
}

void Car::displayInfo()
{
	Vehicle::displayInfo();																	// Calling the function from the vehicle.cpp and using it to display the manu and yearBuilt variable and display them
	cout << "Manufacturer: " << carManu << endl;
	cout << "Year Built: " << carYearBuilt << endl;
	cout << "Number of Doors: " << doors << endl;
}
