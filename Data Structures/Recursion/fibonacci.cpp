// fib(n) = fib(n-1)+fib(n-2)

// recursion
// Time complexity is O(2^n)
//excessive recursion
#include<iostream>
using namespace std;
int fibbb(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibbb(n-2)+fibbb(n-1);
}

// loops
// Time complexity is O(n)
int fibb(int n)
{
    int t0 = 0, t1 = 1, s, i;
    if(n<=1)
    {
        return n;
    }
    for(n=2; i<=n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// optimized recursion
//Time complexity is O(n)
int F[10];

int fib(int n)
{
    if(n<=1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
        {
            F[n-2] = fib(n-2);
        }
        if(F[n-1]==-1)
        {
            F[n-1] = fib(n-1);
        }
        F[n] = F[n-2]+F[n-1];
        return F[n];
    }
}

int main(){
    int i;
    for(i=0; i<10; i++)
    {
        F[i]=-1;
    }
    cout<<fib(5);
    return 0;
}
