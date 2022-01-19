#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){ //default constructor
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b);  // parameterised constructor 
    int area();  //facilitators: which perform some operations on data members of objects
    int perimeter();  //facilitators
    int getLength(){   //accessor : get function or getter function
        return length;
    }
    void setLength(int l){  // mutator: set function or setter function
        length = l;
    }
    ~Rectangle(); //destrcutr
};

// Scope resolution operator is used because function is not independent. It depends upon the class. 
Rectangle::Rectangle(int l, int b)  // for declaring paramterized constructor outside the class
{
    length = l;
    breadth = b;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length + breadth);
}
Rectangle::~Rectangle(){

}

int main()
{
    Rectangle r(10, 5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setLength(20);
    cout<<r.getLength();
    
    return 0;
}