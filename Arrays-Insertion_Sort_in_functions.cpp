
/*   
    Question:   
            Given an array A of size N , write a function that implements insertion sort on the array. Print the elements of sorted array.

            Input Format
            First line contains a single integer N denoting the size of the array. Next line contains N space seperated integers where ith integer is the ith element of the array.

            Constraints
            1 <= N <= 1000
            |Ai| <= 1000000

            Output Format
            Output N space seperated integers of the sorted array in a single line.

            Sample Input
            4
            3 4 2 1
            Sample Output
            1 2 3 4
            Explanation
            For each test case, write insertion sort to sort the array.
*/

#include<iostream>
using namespace std;

void Insertion_Sort(int arr[],int size)
{

	for(int i=1;i<size;i++ )
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;

			}
		}
	}

	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main() {
	int size,arr[2000];
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}

	Insertion_Sort(arr,size);

	return 0;
}