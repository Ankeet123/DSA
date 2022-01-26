#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout<<endl<<"Elements are"<<endl;
    for(i=0;i<arr.length; i++)
    {
       cout<< arr.A[i]<<" ";
    }
}

void Append(struct Array *arr, int x)   // as it is going to modify an array, it should be call by address type
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++] = x;
    }
}     

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length; i>index; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
int main()
{
    struct Array arr={{2,3,4,5,6}, 10, 5};
    Insert(&arr, 2, 10);
    // Append(&arr, 10);
    
    Display(arr);

    return 0;
}