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
                    * 
                  * * 
                * * * 
              * * * * 
            * * * * * 




*/

#include<iostream>
using namespace std;
int main () {


	int n,space;
	cin>>n;
	space=n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<space-1;j++)
		{
			cout<<" ";
		}
		space--;
		for(int k=space;k<n;k++)
		{
		    cout<<"*";
		    
		}
		cout<<endl;
		
	}


	return 0;
}