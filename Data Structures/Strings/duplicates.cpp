#include<iostream>
#include<string.h>
using namespace std;
 
void  DuplicatesInString(char A[])
{
    int i,j;
    for (i = 0; A[i] != '\0'; i++)
    {     
        if(A[i] !=-1)
        {
            for (j = i+1; A[j]!='\0'; j++)
            {     
                if (A[i] == A[j])
                {    
                    A[j] = -1;
                    cout<<A[i]<<" ";
                } 
            }
        }   
    }
}

void hashDuplicate(char A[])
{
    int H[26]={0}; int i;
    for(i=0; A[i]!='\0';i++)
    {
        H[A[i]-97] ++;
    }
    for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {
            cout<<char(i+97)<<" "<<H[i]<<endl;
        }
    }
}
 
int main(){
    char name[] = "finding";  
    hashDuplicate(name);
    return 0;
}