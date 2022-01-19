#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle p){
    p.length = 20;
    cout<<"Length "<<p.length<<endl<<"Breadth "<<p.breadth<<endl;
}
int main(){
    struct Rectangle r = {10, 5};
    fun(r);
    cout<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth<<endl;

    return 0;
}