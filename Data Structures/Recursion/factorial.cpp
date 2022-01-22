#include<iostream>
using namespace std;
// using recursion
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int main()
{
    cout<<fact(5);
    return 0;
}

// using loops

int fact(int n)
{
    int fact = 1;
    for(int i = n; i>=1; i--)
    {
        fact *= i;
    }
    return fact;
}

