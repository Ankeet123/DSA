// if a function is calling itself only once then it is 
//linear recursion. If multiple times, then its a 
// tree recursion. 

#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}
// total 4 activation stacks for x = 3
// for n, there will be n+1 levels. And for n,
// total of 2^(n+1) - 1 times the calling is done. 
// Time complexity is O(2^n)
// Output should be 3 2 1 1 2 1 1 