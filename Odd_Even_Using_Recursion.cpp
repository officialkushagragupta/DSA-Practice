
/*
Question:
            Take as input N, a number. Print odd numbers in decreasing sequence (up until 0) and even numbers in increasing sequence (up until N) using Recursion

            Input Format
            Constraints
            1 <= N <=1000

            Output Format
            Sample Input
            5
            Sample Output
            5
            3
            1
            2
            4

*/

#include<iostream>
using namespace std;
void OddNumberInDecreasingSequence(int n)
{
	//Base case         
	if(n==1)
	{
	    cout<<n<<endl;
		return;
	}

	//Recurence Relation
	cout<<n<<endl;
	OddNumberInDecreasingSequence(n-2);

}
void EvenNumberInIncreasingSequence(int m,int i)
{

	//Base case         
	if(i==m)
	{
		cout<<m<<endl;
		return;
	}
	
	//Recurence Relation
	cout<<i<<endl;
	EvenNumberInIncreasingSequence(m,i+2);


}

int main() {
	int n;
	cin>>n;
	
	//1.Taking account of edge cases
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	
	if(n%2==0)
	{
		OddNumberInDecreasingSequence(n-1);
		EvenNumberInIncreasingSequence(n,2);
	}
	else
	{
		OddNumberInDecreasingSequence(n);
		EvenNumberInIncreasingSequence(n-1,2);
		
	}

	return 0;
}


//Approach 2-->
//Most optimal Solution
// void display(int n)
// {
//      if(n==0)
//           return;
//      if(n%2==1)
//           cout<<n<<"\n";
//      display(n-1);
//      if(n%2==0)
//           cout<<n<<"\n";
// }
// int main()
// {
//      int n;
//      cin>>n;

//      display(n);
// }