
/*
    Question :

            Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that selection sorts the array. Print the elements of sorted array.

            1.It reads a number N.
            2.Take Another N numbers as input and store them in an Array.
            3.Sort the array using Selection Sort and print that Array.

            Input Format
            Constraints
            N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000.

            Output Format
            Sample Input
            4
            2
            -18
            45
            30
            Sample Output
            -18
            2
            30
            45
            Explanation
            Write selection sort to sort the given integers in the problem.



*/



#include<iostream>
using namespace std;


#include <iostream>

using namespace std;

int main()
{
    //In selection sort there are two parts of array first is sorted and another is unsorted part.Since first element is always gonna be sorted(nothing to compare with) and then other elemnts are traversed and put at correct positions with respect to sorted part.Most Preferable for shorter array 
    int arr[500];
    int size,temp;

	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
    
    for(int i=1;i<size;i++)         //since first element is always gonna be sorted
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
    
    // cout<<"Sorted array is: \n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}