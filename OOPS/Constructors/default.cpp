#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;

    //Default Constructor
    Student()
    {
        cout<<"Default Constructor called"<<endl;
        id=-1;
    }

    //Parameterized Constructor
    Student(int x)
    {
        cout<<"Parameterized Constructor called"<<endl;
        id = x;
    }

};
int main()
{
    //s1 will call default constructor
    Student s1;
    cout<< "Student id is: "<<s1.id<<endl;

    //s2 will call parameterized constructor
    Student s2(7);
    cout<<"Student id is: "<<s2.id<<endl;

    return 0;
}