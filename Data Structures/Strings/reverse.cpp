#include<iostream>
#include<string.h>
using namespace std;
string reverse1(string A)
{
    int i, j;
    char t;
    for(j=0; A[j]!='\0';j++)
    {

    }
    j = j-1;
    for(i=0; i<j; i++, j--)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
    return A;
}
string reverse2(string A)
{
    int s = sizeof(A)/sizeof(A[0]);
    char B[s];
    int i, j;
    for(i=0; A[i]!='\0'; i++)
    {

    }
    i= i-1;
    for(j=0; i>=0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j]='\0';
    return B;
}
void palindrome1(string A)
{
    string B = reverse1(A);
    if(B==A)
    {
        cout<<"It's a palindrome";
    }
}
void palindrome2(string A)
{
    string B = reverse2(A);
    if(B==A)
    {
        cout<<"It's a palindrome";
    }
}
int main()
{
    string A = "python";
    string B = "madam";
    cout<<reverse1(A);
    cout<<endl;
    cout<<reverse2(A);
    cout<<endl;
    palindrome1(B);
    cout<<endl;
    palindrome2(B);
    return 0;
}