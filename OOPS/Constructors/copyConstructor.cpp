// A copy constructor is a member function that initializes an object using another object of the same class. 
// A copy constructor has the following general function prototype:     ClassName (const ClassName &old_obj);
#include<iostream>
using namespace std;

class Point
{
    private:
        int x, y;
    public:
        Point(int x1, int y1)
        {
            x = x1;
            y = y1;
        }
        //copy constructor
        Point(const Point &p1)
        {
            x = p1.x;
            y = p1.y;
        }

        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
};

int main()
{
    Point p1(10, 15); //Parameterized constructor is called
    Point p2 = p1; //Copy constructor is called

    //accessing values assigned by constructors
    cout<<"p1.x = "<<p1.getX()<< ", p1.y = "<< p1.getY()<<endl;
    cout<<"p2.x = "<<p2.getX()<< ", p2.y = "<< p2.getY()<<endl;

    return 0;
}