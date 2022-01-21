//static variables are created within the code section
// there is a subsection of code section called global
//variables and static variables. 
// It is created only once during the loading time of
//a program and not everytime a function is called. 

#include<iostream>
using namespace std;
int fun(int n)
{
    static int x =0;
    if(n>0)
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}
int main()
{
    int r;
    r = fun(5);
    cout<<r<<endl;
}