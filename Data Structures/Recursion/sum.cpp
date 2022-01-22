#include<iostream>
using namespace std;
//using recursion
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}

int main()
{
    cout<<sum(5);
    return 0;
}
//uses more memory, time complexity is O(n)

// using loops

int sum(int n)
{
    int s = 0;
    for(int i=1; i<=n; i++)
    {
        s = s + i;
    }
    return s;
}

// uses single activation stack, time complexity is 
// same, O(n)

// using formulae
int sum(int n)
{
    return n*(n+1)/2;
}

// time complexity is O(1)