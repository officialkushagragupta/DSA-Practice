// Question:
//     Take the following as input.
//     A number
//     A digit
//     Write a function that returns the number of times digit is found in the number. Print the value returned.

// Sample Input
// 5433231 
// 3
// Sample Output
// 3


#include<iostream>
using namespace std;
int main() {
	int num,digit,count=0;

	cin>>num;
	cin>>digit;


	while(num>0)
	{
		if(num%10==digit)
		{
			count++;
		}
		num=num/10;
	}
	cout<<count;


	return 0;
}