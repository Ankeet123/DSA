#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string A = "How are you";
    int i, Vcount = 0, Ccount = 0;
    for(i=0; A[i]!='\0'; i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        {
            Vcount++;
        }
        else if((A[i]>=65 && A[i]<=90)||(A[i]>=97 && A[i]<=122))
        {
            Ccount++;
        }
    }
    cout<<Vcount<<endl;
    cout<<Ccount<<endl;

    return 0;
}