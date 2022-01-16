#include<iostream>
using namespace std;

class A{
    public:
    void func(){

    }
};
class B : public A
{
    void func(){

    }
};

int main()
{
    A *p, o1;
    B o2;
    p = &o2;

    p -> func();

    return 0;
}
//      Vrtual function concept 
// Base class pointer can point to object of any of its descendant class. But the converse is not true. 
// parent class and child class having same function prototype is called function overriding. 
// we can access func() for class B using dot operator; o2.func()
// but for accessing using pointer, we must understand that in p -> func(), early binding occurs which means compiler finds data type of pointer 
// for accessing the function and not the address stored in it. 
// So, even if address of o2 object is stored, we shall get func() of o1 because p is pointer of data type A. 
// In order to introduce late binding where compiler does binding during runtime (by virtue of which compiler checks the address stored in 
// pointer and not its data type), we add the word 'virtual' before the function so that all its inherited classes with functions of same name
// also become virtual. On running p -> func(), we get func() belonging to class B. 
