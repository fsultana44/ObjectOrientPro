#include <string>
#include <iostream>
using namespace std;

/* in this class I will practice to use constructor of the class
Defination: A constructor in C++ is a special method that is automatically called when an object of a class is created.
To create a constructor, use the same name as the class, followed by parentheses() :*/
class CountryVisit  // class name
{
public:  // access specifier
	string name;
	string continent;
	int visitYear;
	int visitOrder;
	/*CountryVisit(string x, string y, int z, int t); */// Constructor declaration for outside the class

	CountryVisit(string x, string y, int z, int t) {  /*creating constructor.The constructor has the same name as the class, 
													  it is always public, and it does not have any return value.*/ 
		name = x;
		continent = y;
		visitYear = z;
		visitOrder = t;

	}

};
//// Constructor outside the class
//CountryVisit::CountryVisit(string x, string y, int z, int t) {
//		name = x;
//	continent = y;
//	visitYear = z;
//	visitOrder = t;
//
//}