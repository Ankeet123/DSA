#include <bits/stdc++.h>
using namespace std;
class Names
{
	// Access specifier
	public:

	// Data Members
	string name;

	// Member Functions()
	void printname()
	{
	cout << "Name is: " << name;
	}
};

int main() {

	// Declare an object of class Names
	Names obj1;

	// accessing data member
	obj1.name = "Ankeet";

	// accessing member function
	obj1.printname();
	return 0;
}
