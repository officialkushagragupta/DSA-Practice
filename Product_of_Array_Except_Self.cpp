
/*
Question:
            Given an array arr of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of arr except arr[i].

            Input Format
            First line contains integer N as size of array.
            Next line contains a N integer as element of array.

            Constraints
            arr[i]<=10000000

            Output Format
            print output array

            Sample Input
            4
            1 2 3 4
            Sample Output
            24 12 8 6 
*/


#include<iostream>
using namespace std;

int main()
{

    long int arr[100000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }


    //Approach 1-->Not so Preferable method,since Time Complexity is: O(N^2)
    // for(int i=0;i<size;i++)
    // {
    //     long long int ProdSelf=1;
    //     for(int j=0;j<size;j++)
    //     {
    //         if(j!=i)
    //         {
    //             ProdSelf*=arr[j];
    //         }
    //     }
    //     cout<<ProdSelf<<" ";    
    // }



    //Better Approach 2->calculate product of whole array and then divide by each respective element to get ans[i],Time Complexity:2O(N)
    long long int totalProduct=1;
    for(int i=0;i<size;i++)
    {
        totalProduct*=arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<totalProduct/arr[i]<<" ";
    }



    return 0;
}