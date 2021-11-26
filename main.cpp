#pragma once
#include <string>
#include <iostream>
#include "Car.h"
#include "Book.h"
#include "CountryVisit.h"
using namespace std;
// Practicing for doing code to be fimaliar with class and object 
// define a class using a name car
//class Car // the class name
//{
//public: // access specifier
//	int model; // Attribute ( variable 
//	string brand;
//	string type;
//};

int main() {
	// creating 1st object of the car class
	Car carObj1;
	carObj1.brand = "Toyta";
	carObj1.model = 2003;
	carObj1.type = "Manual";

	//creating 2nd object of the car class
	Car carObj2;
	carObj2.brand = "Honda";
	carObj2.model = 2010;
	carObj2.type = "Auto";

	// creating 3rd object of the car class

	// Print attribute values
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.type << "\n";
	cout << "Maximum speed of the car " << carObj1.speed(200) << endl;
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.type << "\n";
	cout << "Maximum speed of the car " << carObj2.speed(500) << endl;
	// Create object for the book class
	Book bookObj1;
	bookObj1.Name = "Tom and Jerry";
	bookObj1.Auther = "Mr.x";
	bookObj1.dateOfPublica = 1909;
	
	// Create another object for the book class

	Book bookObj2;
	bookObj2.Name = "Cat and Dog";
	bookObj2.Auther = "Mr.y";
	bookObj2.dateOfPublica = 1908;
	bookObj2.type();

	// print the value
	cout << bookObj1.Name << " " << bookObj1.Auther << " " << bookObj2.dateOfPublica << "\n";
	bookObj1.type();

	cout << bookObj2.Name << " " << bookObj2.Auther << " " << bookObj2.dateOfPublica << "\n";
	bookObj2.type();

	// create an object for Country Visit constructor.

	CountryVisit countryObj1("Malaysia", "Asia", 2015, 1);
	CountryVisit countryObj2("India", "Asia", 2016, 2);
	CountryVisit countryObj3("Sweden", "Europ", 2018, 3);
	CountryVisit countryObj4("UK", "Europ", 2019, 4);

	// print COuntry constructor

	cout << "The name of the visited country " << countryObj1.name << " continent of the " << countryObj1.continent	 << " Visiting time" << countryObj1.visitYear<< "\n";
	cout << "The name of the visited country " << countryObj2.name << " continent of the " << countryObj2.continent << " Visiting time" << countryObj2.visitYear << "\n";
	cout << "The name of the visited country " << countryObj3.name << " continent of the " << countryObj3.continent << " Visiting time" << countryObj3.visitYear << "\n";
	return 0;
}
