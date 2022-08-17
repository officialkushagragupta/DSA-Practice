
/*
    Question : 

        Take as input N, the size of array. Take N more inputs and store that in an array. Take as input a number M. Write a function which returns the index on which M is found in the array, in case M is not found -1 is returned. Print the value returned.You can assume that the array is sorted, but you’ve to optimize the finding process. For an array of size 1024, you can make 10 comparisons at maximum.

        1.It reads a number N.
        2.Take Another N numbers as input in Ascending Order and store them in an Array.
        3.Take Another number M as input and find that number in Array.
        4.If the number M is found, index of M is returned else -1 is returned.Print the number returned.

        Input Format
        Constraints
        N cannot be Negative. Range of Numbers N and M can be between -1000000000 to 1000000000

        Output Format
        Sample Input
        5
        3
        5
        6
        9
        78
        6
        Sample Output
        2
        Explanation
        Array = {3, 5, 6, 9, 78}, target number = 6 . Index of number 6 in the given array = 2. Write Binary search to find the number in given array as discuss in the class
*/


#include<bits/stdc++.h>
using namespace std;

int Binary(int arr[],int size,int key)
{
    int start,end,mid;
    start=0;
    end=size-1;
    
    while(start<=end)
    {
        mid=((end-start)/2+start); //Remember:write mid=(end-start)/2+start instead of mid=start+end/2; because it prevents TimeLimitError
        if(key==arr[mid])
        {
            return mid;
            break;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;

}

int main()
{
    int arr[100000];
    int start,end,key,mid,size;

    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cin>>key;

    start=0;
    end=size-1;
    
  
    cout<<Binary(arr,size,key);


    return 0;
}