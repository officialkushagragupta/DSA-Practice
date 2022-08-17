
/*

Question:
            Take N as input. Print all prime numbers from 2 to N.

            Input Format
            Constraints
            1 <= N <= 1000

            Output Format
            Sample Input
            10
            Sample Output
            2
            3
            5
            7
            Explanation
            Each output should be on separate line. A prime number is that number which is divisible by one or itself.


*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	int arr[1000]={0};
	
	cin>>num;

	for(int i=2;i<=num;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i*i;j<=num;j=j+i)
			{
				arr[j]=1;
			}
		}
	}

	for(int i=2;i<=num;i++)
	{
		if(arr[i]==0)
		{
			cout<<i<<endl;
		}
	}

}