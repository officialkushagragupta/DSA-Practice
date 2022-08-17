

/*
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
int main() {
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
	
	for(int k=0;k<counter;k++)
	{
		i=0;
		j=0;
		ans=0;
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
		cout<<ans;
	}


	return 0;
}