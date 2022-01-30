#include<iostream>
#include<string.h>
using namespace std;
int validate(string A)
{
    int i;
    for(i=0; A[i]!='\0'; i++)
    {
        if(!(A[i]>=65&&A[i]<=90)&&!(A[i]>=97&&A[i]<=122)&&!(A[i]>=48&&A[i]<=57))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string A = "Ankeet123";
    if(validate(A))
    {
        cout<<"Valid String";
    }
    else{
        cout<<"Invalid String";
    }

    return 0;
}