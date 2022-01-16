#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    bool gender;
    
    Student(string Name, int Age, bool Gender)
    {
        name = Name;
        age = Age;
        gender = Gender;
    }

    Student(Student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    bool operator == (Student &a)
    {
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }
};

int main()
{
    Student A("Ankeet", 20, 0);
    Student B = A;
    if(B==A){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}