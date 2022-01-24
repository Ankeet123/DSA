// e^x = 1 + x/1 [1 + x/2 [1 + x/3 [1 + x/4]]]
// this reduces time complexity from O(n^2) to O(n)
// result is returned at calling time only. 

//Using loops 

#include<iostream>
using namespace std;
double e(int x, int n)
{
    double s = 1;
    for(; n>0; n--)
    {
        s = 1 + (x*s/n); 
    }
    return s;
}

// Loops 2.0

double exp(int x, int n)
{
    double s =1;
    int i;
    double num = 1;
    double den = 1;
    for(i=1; i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main()
{
    cout<<e(3, 4);

    return 0;
}

// Recursion

double ex(int x, int n)
{
    static double s = 1;
    if(n==0)
    {
        return s;
    }
    s = 1 + (x*s/n);
    return ex(x, n-1);
}