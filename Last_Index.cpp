
/*
Question:
            Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

            Input Format
            Enter a number N and add N more numbers to an array, then enter number M to be searched

            Constraints
            None

            Output Format
            Display the last index at which the number M is found

            Sample Input
            5
            3
            2
            1
            2
            3
            2
            Sample Output
            3
*/

#include<iostream>

using namespace std;

void Last_Index(int *a,int NumberOfElements,int iterator,int key)
{
	//Base Case
	if(NumberOfElements==0)
	{
		cout<<"-1";
		return;
	}

	//Reccurence Relation
	if(a[iterator]==key)
	{
		cout<< iterator;
		return;
	}
	Last_Index(a,NumberOfElements,iterator-1,key);
}

int main() 
{
	int arr[1000000],size,m;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cin>>m;

	Last_Index(arr,size,size-1,m);
	
	return 0;
}