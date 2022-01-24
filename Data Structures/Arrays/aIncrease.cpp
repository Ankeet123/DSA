#include<iostream>
using namespace std;
int main()
{
    int *p, *q;
    int i;
    p = new int [5];
    p[0] = 1; p[1] = 3; p[2] = 5; p[3] = 7; p[4] = 9;

    q = new int [10];
    for(i=0;i<5;i++)
    {
        q[i] = p[i];
    }
    
    delete []p;
    p = q;
    q = NULL;

    for(i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}