//Must Revise
/*
Question:Write a code to Sort an array using Recursion.
*/
#include <iostream>

using namespace std;

void SortArray_usingRecursion(int arr[],int size)
{
   
    //1.Base Condition
    if(size==1)
    {
        return;
    }
    
    //2.Recurence relation
    
    //for Asscending Order 
    for(int i=0;i<size;i++)
    {
        if(arr[size-1]<arr[i])
        {
            swap(arr[i],arr[size-1]);
        }
    }

    //For Descending Order
    // for(int i=0;i<size;i++)
    // {
    //     if(arr[size-1]>arr[i])
    //     {
    //         swap(arr[i],arr[size-1]);
    //     }
    // }
    
    SortArray_usingRecursion(arr,size-1);
    
    
    
}

int main()
{
    int arr[10]={1,3,5,9,7,2,8,4,6,0};
    
    int size=sizeof(arr)/sizeof(int);
    SortArray_usingRecursion(arr,size);
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}
