#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
	string manu;
	int yearBuilt;
public: 
	Vehicle(string manu, int yearBuilt);
	string getManu();
	void setManu(string manu);
	int getYearBuilt ();
	void setYearBuilt(int yearBuilt);

};



#endif
