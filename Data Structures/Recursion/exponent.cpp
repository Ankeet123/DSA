#include<iostream>
using namespace std;
int pow(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return pow(m, n-1)*m;
    }
}
int main()
{
    cout<<pow(2, 9);

    return 0;
}
// here the number of multiplications done is 9 times
// to reduce the number of multiplications, we can
// write a better code as shown below. 

int pow(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return pow(m*m, n/2);
    }
    else{
        return m*pow(m*m, (n-1)/2);
    }
}

int main()
{
    cout<<pow(2, 9);

    return 0;
}

// here number of multiplication is reduced to 6. 