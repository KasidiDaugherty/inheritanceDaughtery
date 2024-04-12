#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "truck.h"

using namespace std;

int main() {
	string manu;
	int yearBuilt;

	cout << "Enter manufacturer of the vehicle: ";
	getline(cin, manu);
	cin.ignore();
	cout << "Enter year built of the vehicle: ";
	cin >> yearBuilt;
	cout << endl;
	Vehicle vehicle(manu, yearBuilt);						//creating an object for the vehicle class
	cout << "Vehicle Information: " << endl;
	vehicle.displayInfo();

	int doors;
	cout << "Enter manufacturer of the vehicle: ";
	getline(cin, manu);
	cin.ignore();
	cout << "Enter year built of the vehicle: ";
	cin >> yearBuilt;
	cout << endl;
	cout << "Enter the number of doors for the car: ";
	cin >> doors;
	Car car(manu, yearBuilt, doors);						//creating an object for the car class
	cout << "Car information: " << endl;
	car.displayInfo();

	int towingCapacity;
	cout << "Enter manufacturer of the vehicle: ";
	getline(cin, manu);
	cin.ignore();
	cout << "Enter year built of the vehicle: ";
	cin >> yearBuilt;
	cout << endl;
	cout << "Enter towing capacity for the truck: ";
	cin >> towingCapacity;
	Truck truck(manu, yearBuilt, towingCapacity);			//creating an object for the truck class
	cout << "Truck Information: " << endl;
	truck.displayInfo();

	cin.get();
	cin.ignore();
	return 0;
}