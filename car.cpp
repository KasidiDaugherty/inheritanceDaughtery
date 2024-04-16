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

void Car::displayInfo() const
{
	Vehicle::displayInfo();																	// using the displayInfo function from the vehicle class
	cout << "Number of Doors: " << doors << endl;
}