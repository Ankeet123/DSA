#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string A = "Painter";
    string B = "Painting";
    int i,j;
    for(i=0, j=0; A[i]!='\0'||B[i]!='\0'; i++, j++)
    {
        if(A[i]!=B[j])
        {
            break;
        }
    }
    if(A[i]==B[j])
    {
        cout<<"Equal";
    }
    else if(A[i]<B[j])
    {
        cout<<"Smaller";
    }
    else{
        cout<<"Greater";
    }

    return 0;
}