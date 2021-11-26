#pragma once
#include <string>
#include <iostream>
using namespace std;
// define a class using a name car
class Car // the class name
{
public: // access specifier
	int model; // Attribute ( variable )
	string brand;
	string type;	
	/*do some work on class methods(outside method)
	Methods are aslo called function.Here is an example of inside method */ 
	int speed(int maxSpeed);
	
};

int Car::speed(int maxSpeed) {
	return maxSpeed;
}

