
/*
Question:
            Write a program to print given pattern by taking input N.

            Input Format
            The first line contains an integer N.

            Constraints
            Output Format
            Display the pattern as result.

            Sample Input
            5
            Sample Output
            1 
            1 2 
            1 2 3 
            1 2 3 4 
            1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main () {
	int i,n,number=1;

	cin>>n;

	for(i=0;i<=n;i++)
	{
		number=1;
		for(int j=n-i;j<n;j++)
		{
			cout<<number++<<"\t";
		}
		cout<<endl;
	}
	return 0;
}