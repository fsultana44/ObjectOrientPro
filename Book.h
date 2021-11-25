#include <string>
#include <iostream>
using namespace std;
class Book
{ public:
	string Name;
	string Auther;
	int dateOfPublica;
	// inside method/ function of a class  example,
	void type() {
		string x;
		x = "story";
		cout << "This is a " << x << " book" << endl;
	}
};

