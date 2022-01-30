#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string A = "WelComE";
    int i;
    for(i=0; A[i]!='\0'; i++)
    {
        if(A[i]>=65 && A[i]<=90)
        {
            A[i]+=32;
        }
        else if(A[i]>='a' && A[i]<='z')
        {
            A[i]-=32;
        }
    }
    cout<<A;

    return 0;
}