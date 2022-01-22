//  A -> B -> C then C -> A, so it becomes a cycle and hence recursion
// is made indirectly. 

#include<iostream>
using namespace std;
void funB(int n);  // funB should be defined before it is used. 

void funA(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        funA(n/2);
    }
}

int main()
{
    int x = 20;
    funA(x);

    return 0;
}