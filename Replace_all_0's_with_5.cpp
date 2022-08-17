
/*   
    Question:   
            Given an integer N, now you have to convert all zeros of N to 5.

            Input Format
            The first Line takes input integer N, denoting the number.

            Constraints
            1<=N<=10000

            Output Format
            Print the number after replacing all 0's with 5.

            Sample Input
            103
            Sample Output
            153
            Explanation
            Testcase 1: after replacing 0 with 5 ,number will become 153.
            Testcase 2: there is no zero in number so it will remain same.
*/
#include<iostream>
#include<math.h>
using namespace std;
int main () {
	
	int num,temp=0,i=0;
	cin>>num;

	while(num>0)
	{
		i++;
		if(num%10==0)
		{
			temp=temp+5*pow(10,i);
		}
		else
		{
			temp=temp+(num%10)*pow(10,i);
		}
		num=num/10;
	}
	cout<<temp/10;//doubt -but why divide by 10

	return 0;
}