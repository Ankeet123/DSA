#include<iostream>
using namespace std;
int main()
{
    char a[]="decimal";
    char b[]="medical";
    int h[26]={0}, i;

    for(i=0;a[i]!='\0';i++)
    {
        h[a[i]-97]+=1;
    }
    
    for(i=0;b[i]!='\0';i++)
    {
        h[b[i]-97]-=1;
        if(h[a[i]-97]<0)
        {
            cout<<"Not Anagram";
            break;
        }
    }
    if(b[i]=='\0')
    {
        cout<<"It's an Anagram";
    }
    return 0;
}