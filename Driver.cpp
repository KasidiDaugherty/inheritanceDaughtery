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

	cin.get();
	cin.ignore();
	return 0;
}