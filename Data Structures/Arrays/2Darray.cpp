#include<iostream>
using namespace std;
int main()
{
    //2D array created within stack
    int A[3][4] = {{1,2,3,4}, {2,4,6,8}, {1,3,5,7}};

    //array of pointers of size 3; 3 is for rows
    // created inside stack
    int *B[3];
    // created inside heap
    B[0] = new int [4];
    B[1] = new int [4];
    B[2] = new int [4];

    // double pointer 
    int **C; // created in stack 

    // created in heap; both rows and columns 
    C = new int *[3]; // array of pointers of type int
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
}