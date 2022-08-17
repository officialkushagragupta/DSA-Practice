
/*
Question:

            Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which inverses the array. Print the values of inverted array

            Input Format
            Enter a number N and take N more inputs

            Constraints
            None

            Output Format
            Display the values of the inverted array in a space separated manner

            Sample Input
            5
            0 2 4 1 3
            Sample Output
            0 3 1 4 2
            Explanation
            Swap element with index

            for eg : element 4 at index 2 becomes element 2 at index 4

*/
#include<iostream>
using namespace std;
int main() {
	int arr[1000],solution[1000]={0};
    int i,size,temp;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
    
    // cout<<"\nEntered Array is :";
	// for(i=0;i<size;i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	for(i=0;i<size;i++)
	{
		temp=arr[i];
		solution[temp]=i;

        // cout<<"\nsolution[temp]=="<<i<<endl;
	}
    
    // cout<<"\nEntered Solution Array is :";
	for(i=0;i<size;i++)
	{
		cout<<solution[i]<<" ";
	}
	return 0;
}