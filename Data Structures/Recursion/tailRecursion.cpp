// All the functioning is mentioned, the function is 
//recursively called. This is tail recursion. 
//Everything is performed on calling time only. 
// If there is any operator attached to calling, 
// like fun(n-1) + n; then it can't be a tail recusrion
// as the value of function is unknown, so addition 
// can be done during return time. 

// Every loop can be converted to recursion and vice-versa

//Tail Recursion
#include<iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    {
        cout<<n;
        fun(n-1);
    }
}

//Loops 
void fun(int n)
{
    while (n>0)
    {
        cout<<n;
        n--;
    }   
}

//Time complexity is same for both but in space
// complexity, in recursion, there are separate activation
// stacks created, so O(n).
// whereas, in loop, only one activation stack is created
// so O(1). So loops are preferred overe tail recursion.
