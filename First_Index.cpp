
/*
Question:
            Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the first index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

            Input Format
            Enter a number N and add N more elements to an array, then enter a number M

            Constraints
            None

            Output Format
            Display the first index at which number M is found

            Sample Input
            5
            3
            2
            1
            2
            2
            2
            
            Sample Output
            1
*/
#include<iostream>
using namespace std;

//Optimal Solution:
int First_Index(int *a,int NumberOfElements,int key)
{
	//Base Case
	if (NumberOfElements==0)
	{
		// cout<<"-1";
		return -1;
	}

	// Recursive Relation
	if(a[0]==key)
	{
		// cout<<iterator;
		return 0;
	}	
	int ans=First_Index(a+1,NumberOfElements-1,key);
	if(ans==-1)
	{
		return -1;
	}	
	return ans+1;

}



void First_Index(int *a,int NumberOfElements,int iterator,int key)
{
	//Base Case
	if (NumberOfElements==0)
	{
		cout<<"-1";
		return;
	}

	// Recursive Relation
	if(a[iterator]==key)
	{
		cout<<iterator;
		return;
	}
	else
	{
		First_Index(a,NumberOfElements-1,iterator+1,key);
	}


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

	int Index=First_Index(arr,size,m);
	cout<<Index;
	
	return 0;
}