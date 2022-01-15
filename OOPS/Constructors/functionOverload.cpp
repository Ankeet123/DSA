#include<iostream>
using namespace std;
class func
{
    public:
        void fun()
        {
            cout<<"function with no arguments"<<endl;
        }
        void fun(int x)
        {
            cout<<"function with int arguments"<<endl;
        }
        void fun(double x)
        {
            cout<<"function with double arguments"<<endl;
        }

};
int main()
{
    func f1;
    f1.fun();
    f1.fun(4);
    f1.fun(5.6);

    return 0;
}