//Three Pointer Problem -To be revised
/*
    Question: 

        Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.

        Input Format
        First line contains input N.
        Next line contains N space separated integers denoting the elements of the array.
        The third line contains a single integer T denoting the target element.

    Output Format
    Print all the triplet present in the array in a new line each. The triplets must be printed as A, B and C where A,B and C are the elements of the triplet ( A<=B<=C) and all triplets must be printed in sorted order. Print only unique triplets.

    Sample Input
    9
    5 7 9 1 2 4 6 8 3
    10
    Sample Output
    1, 2 and 7
    1, 3 and 6
    1, 4 and 5
    2, 3 and 5
    Explanation
    Array = {5, 7, 9, 1, 2, 4, 6 ,8 ,3}. Target number = 10. Find any three number in the given array which sum to target number.


*/


#include<iostream>
using namespace std;

int main() {
	int arr[1000],ans[3];
	int size,i,j,k,target;

	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}

	cin>>target;

//Approach 1:Solving through Brute Force

    
	//Applying Bubble Sort-sorting asscending order
  	for (int step = 0; step <size; ++step) 
  	{
    	for (i = 0; i < size - step - 1; ++i) 
		{
			if (arr[i] > arr[i + 1]) 	
				{
					int temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
				}
    	}

    }

//By Brute Force Solution- > 	
	cout<<"\n\nBy Brute Force Solution--> \n";
    for(i=0;i<size-2;i++)
	{
		for(j=i+1;j<size-1;j++)
		{
			for(k=j+1;k<size;k++)
			{
				if(arr[i]+arr[j]+arr[k]==target)
				{
					ans[0]=arr[i];
					ans[1]=arr[j];
					ans[2]=arr[k];
					cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;

				}
			}
		}
	}


//Approach 2 :Applying 3 Pointer algorithm


    cout<<"\n\nApplying 3 Pointer algorithm-->\n";
    int left,right;
    for(i=0;i<size-2;i++)
    {
        left=i+1;
        right=size-1;
        while(left<right)
        {
            if(arr[i]+arr[left]+arr[right]==target)
            {
                cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
                left++;
            }
            else if(arr[i]+arr[left]+arr[right]<target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }


	return 0;
}