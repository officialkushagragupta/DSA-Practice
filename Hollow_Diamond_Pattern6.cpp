//Needs to revised -difficult question

/*
Question:
                Take N (number of rows), print the following pattern (for N = 5).

                    * * * * *
                    * *   * *
                    *       *
                    * *   * *
                    * * * * *
                Input Format
                Constraints
                0 < N < 10 (where N is an odd number)

                Output Format
                Sample Input
                5
                Sample Output
                *	*	  *     *      *		  
                *	*	        *      *
                * 	                   *
                * 	*           *      *
                * 	*	  *     *      *	
                Explanation
                Each '*' is separated from other by a tab
*/

#include<iostream>
using namespace std;
int main() {
	int i,j,n,f=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<n;j++)
		{
			if(i+j<=n/2 || j-i>=n/2 || i-j>=n/2 || i+j>=(n/2)+(n-1))
			{
				cout<<"*\t";
			}
			else
			{
				cout<<"\t";
			}
		}
		cout<<"\n";
	}
	return 0;
}