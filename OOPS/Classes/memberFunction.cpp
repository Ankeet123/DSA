#include <bits/stdc++.h>
using namespace std;
class Student
{
	public:
	string name;
	int id;
	
	// printname is not defined inside class definition
	void printname();
	
	// printid is defined inside class definition
	void printid()
	{
		cout << "Student id is: " << id;
	}
};

// Definition of printname using scope resolution operator ::
void Student::printname()
{
	cout << "Geekname is: " << name;
}
int main() {
	
	Student obj1;
	obj1.name = "Ankeet";
	obj1.id=7;
	
	// call printname()
	obj1.printname();
	cout << endl;
	
	// call printid()
	obj1.printid();
	return 0;
}
