#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
private:
	string truckManu;
	int truckYearBuilt;
	int towingCapacity;
public:
	Truck(string manu, int yearBuilt, int towingCapacity);
	int getTowingCapacity();
	void setTowingCapacity(int towingCapacity);
	void displayInfo() const override;
};




#endif
