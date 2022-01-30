#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string A = "How are you";
    int i, word = 1;
    for(i=0; A[i]!='\0'; i++)
    {
        if(A[i]==' ' && A[i-1]!=' ')
        {
            word++;
        }
    }
    cout<<word;

    return 0;
}