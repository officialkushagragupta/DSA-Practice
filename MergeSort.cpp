//Must Revise 
//Apply sorting algorithm using Merge Sort

//Question:Merge sort 

#include <iostream>
using namespace std;


void MergeSortedArrays(int *a,int *b,int*c,int start,int end)
{
    int mid=(start+end)/2;
    int i=start,j=mid+1,k=start;
    while(i<=mid and j<=end)
    {
        if(b[i]<c[j])
        {
            a[k++]=b[i++];
        }
        else
        {
            a[k++]=c[j++];
        }
    }
    while(j<=end)
    {
        a[k++]=c[j++];

    }
    while(i<=mid)
    {
        a[k++]=b[i++];
    }


}


void Func(int *a,int start,int end)
{
    //Base Case
    if(start>=end)
    {
        return;
    }

    //Recursive Relation
    //1.Divide
    int mid=(start+end)/2;
    int b[1000],c[1000];

    for(int i=start;i<=mid;i++)
    {
        b[i]=a[i];
    }
    for(int i=mid+1;i<=end;i++)
    {
        c[i]=a[i];
    }

    //2.Sort
    Func(b,start,mid);
    Func(c,mid+1,end);


    //3.Merge
    MergeSortedArrays(a,b,c,start,end);
}

void PrintArray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int a[]={4,3,1,6,2,5};
    int size=sizeof(a)/sizeof(int);
    
    
    cout<<"Array Before :";
    PrintArray(a,size);

    Func(a,0,size-1);

    cout<<"\nMerged Sorted Array is :";
    PrintArray(a,size);
    
    return 0;
}