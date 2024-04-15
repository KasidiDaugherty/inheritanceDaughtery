#include "car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string carManu, int carYearBuilt, int doors) : Vehicle(carManu, carYearBuilt), doors(doors) {}	//constructor definition for the Car class

int Car::getDoors()
{
	return doors;
}

void Car::setDoors(int doors)
{
	this->doors = doors;																	//Using the pointer this to assign the value of doors of the current object
}

string Car::getCarManu()
{
	return carManu;
}

void Car::setCarManu(string carManu)
{
	this->carManu = carManu;																//Using the pointer this to assign the value of car Manufacterer of the current object
}

int Car::getCarYearBuilt()
{
	return carYearBuilt;
}

void Car::setCarYearBuilt(int carYearBuilt)
{
	this->carYearBuilt = carYearBuilt;														//Using the pointer this to assign the value of the year the car was built of the current object
}

void Car::displayInfo()
{
	cout << "Manufacturer: " << carManu << endl;
	cout << "Year Built: " << carYearBuilt << endl;
	cout << "Number of Doors: " << doors << endl;
}