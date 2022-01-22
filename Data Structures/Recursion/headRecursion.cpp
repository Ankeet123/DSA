//In head Recursion, all the processing is done during
// return time only.

//head recursion
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int x = 3;
    fun(x);

    return 0;
}

//loops

void fun(int n)
{
    int i = 1;
    while(i<=n)
    {
        cout<<i<<" ";
        i++;
    }
}

// so directly we can't convert head recursion to 
// loops but we can, after some modifications.