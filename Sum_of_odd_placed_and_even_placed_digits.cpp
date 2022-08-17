//Sum of odd placed and even placed digits

//Question: Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

#include<iostream>
using namespace std;
int main() {

	int num,i=0,temp,sum_even=0,sum_odd=0;
	cin>>num;
	
	while(num>0)
	{
		if(i==0)
		{
			sum_even=sum_even+num%10;
			i=1;
		}
		else if(i==1)
		{
			sum_odd=sum_odd+num%10;
			i=0;
		}
		
		num=num/10;
	}
	cout<<sum_even<<endl;
	cout<<sum_odd;



	return 0;
}