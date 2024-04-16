#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "truck.h"

using namespace std;

int main() {

    int yearBuilt;
    string manu;

    cout << "Enter manufacturer of the vehicle: ";
    getline(cin, manu);
    cout << "Enter year built of the vehicle: ";
    cin >> yearBuilt;
    cout << endl;
    cin.ignore(); 
    Vehicle vehicle(manu, yearBuilt);
    cout << "Vehicle Information: " << endl;
    vehicle.displayInfo();

    int doors;
    cout << "\nEnter manufacturer of the car: ";
    getline(cin, manu);
    cout << "Enter year built of the car: ";
    cin >> yearBuilt;
    cout << endl;
    cin.ignore(); 
    cout << "Enter the number of doors for the car: ";
    cin >> doors;
    cout << endl;
    cin.ignore();
    Car car(manu, yearBuilt, doors);
    cout << "Car information: " << endl;
    car.displayInfo();

    int towingCapacity;
    cout << "\nEnter manufacturer of the truck: ";
    getline(cin, manu);
    cout << "Enter year built of the truck: ";
    cin >> yearBuilt;
    cout << endl;
    cin.ignore(); 
    cout << "Enter towing capacity for the truck: ";
    cin >> towingCapacity;
    cout << endl;
    cin.ignore();
    Truck truck(manu, yearBuilt, towingCapacity);
    cout << "Truck Information: " << endl;
    truck.displayInfo();

	cin.get();
	cin.ignore();
	return 0;
}