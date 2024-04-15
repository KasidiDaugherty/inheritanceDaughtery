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
    cin.ignore(); // Consume the newline character
    Vehicle vehicle(manu, yearBuilt);
    cout << "Vehicle Information: " << endl;
    vehicle.displayInfo();

    int doors;
    string carManu;
    int carYearBuilt;
    cout << "\nEnter manufacturer of the car: ";
    getline(cin, carManu);
    cout << "Enter year built of the car: ";
    cin >> carYearBuilt;
    cout << endl;
    cin.ignore(); // Consume the newline character
    cout << "Enter the number of doors for the car: ";
    cin >> doors;
    cout << endl;
    cin.ignore(); // Consume the newline character
    Car car(carManu, carYearBuilt, doors);
    cout << "Car information: " << endl;
    car.displayInfo();

    int towingCapacity;
    string truckManu;
    int truckYearBuilt;
    cout << "\nEnter manufacturer of the truck: ";
    getline(cin, truckManu);
    cout << "Enter year built of the truck: ";
    cin >> truckYearBuilt;
    cout << endl;
    cin.ignore(); // Consume the newline character
    cout << "Enter towing capacity for the truck: ";
    cin >> towingCapacity;
    cout << endl;
    cin.ignore(); // Consume the newline character
    Truck truck(truckManu, truckYearBuilt, towingCapacity);
    cout << "Truck Information: " << endl;
    truck.displayInfo();

	cin.get();
	cin.ignore();
	return 0;
}