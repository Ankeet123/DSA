#include<iostream>
using namespace std;
int main()
{
    int A[5] = {1,2,3,4,5};
    int *p;
    p = new int [5];
    p[0]=1; 
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=9;
    int i;
    for(i=0; i<5; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<5; i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}