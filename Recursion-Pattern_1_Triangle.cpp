
/*
Question:
            Take as input N, a number. Print the following pattern (for N =4)

            *

            * *

            * * *

            * * * *

            * * * * *

            Input Format
            Enter the value of N

            Constraints
            None

            Output Format
            Tab separated (*)

            Sample Input
            5
            Sample Output
            *
            *	*
            *	*	*
            *	*	*	*
            *	*	*	*	*
*/

#include<iostream>
using namespace std;

void PatternTriangle(int iterator,int line,int n)
{
	//recursive Realtion
	cout<<"*\t";

	//Base Case
	if(iterator>=line)
	{
		if(line==n)
		{
			return;
		}
		else
		{
			cout<<endl;
			PatternTriangle(1,line+1,n);
		}
	}
	else
	{
		PatternTriangle(iterator+1,line,n);
	}
}

int main() {
	int n;
	cin>>n;

	PatternTriangle(1,1,n);
	return 0;
}