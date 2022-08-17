
/*
Question:
            You are provided two sorted arrays. You need to find the maximum length of bitonic subsequence. You need to find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. You can switch from one array to another array only at common elements.

            Input Format
            First line contains integer t which is number of test case. For each test case, it contains two integers n and m which is the size of arrays and next two lines contains n and m space separated integers respectively.

            Constraints
            1<=t<=100 1<=n,m<=100000

            Output Format
            Print the maximum path.

            Sample Input
            1
            8 8
            2 3 7 10 12 15 30 34
            1 5 7 8 10 15 16 19
            Sample Output
            122
            Explanation
            122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34
*/

#include<iostream>
using namespace std;
int maxof(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int sum1=0,sum2=0,ans=0,i,j,n[1000],m[1000],test_cases,counter=0,arr1[1000],arr2[1000];
	cin>>test_cases;
	while(test_cases>0)
	{
		cin>>n[counter]>>m[counter];
		for(i=0;i<n[counter];i++)
		{
			cin>>arr1[i];
		}
		for(i=0;i<m[counter];i++)
		{
			cin>>arr2[i];
		}
		counter++;
		test_cases--;
	}
	
    i=0;
	j=0;
	ans=0;
	for(int k=0;k<counter;k++)
	{
		
		while(i<n[k] and j<m[k])
		{
			if(arr1[i]<arr2[j])
			{
				sum1=sum1+arr2[j];
				j++;
			}
			else if(arr1[i]>arr2[j])
			{
				sum2=sum2+arr1[i];
				i++;
			}
			else//when elements are same
			{
				ans+=maxof(sum1,sum2)+arr1[i];
				cout<<ans<<endl;
				sum1=sum2=0;
				i++;
				j++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
