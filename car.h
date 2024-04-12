#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <iostream>

using namespace std;

class Car: public Vehicle{
private:
	int doors;
public: 
	Car(string man, int yearBuilt, int doors);
	int getDoors();
	void setDoors(int doors);
	void displayInfo();
};
	



#endif
