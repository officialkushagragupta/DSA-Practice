
/*
Question:
            Take as input str, a string. The string is a mathematical expression e.g. “[a + {b + (c + d) + e} + f]”. Write a recursive function which tests if the brackets in expression are balanced or not and returns a Boolean value. Print the value returned.

            Input Format
            Enter the string

            Constraints
            None

            Output Format
            Display the boolean result

            Sample Input
            [a+{b+(c+d)+e}+f]
            Sample Output
            true
*/

#include<iostream>
#include<cstring>

using namespace std;

void ExpressionBalancedOrNot(char* s,int countc1,int countc2,int countc3,int iterator,int size)
{
	//Base Condition:
	if(iterator==size)
	{
		// cout<<"C1:"<<countc1<<"\nC2:"<<countc2<<"\nC3:"<<countc3<<endl;
		if(countc1%2==0 and countc2%2==0 and countc3%2==0)
		{
			cout<<"true";
		}
		else
		{
			cout<<"false";
		}
		return;
	}

	//Recursive Relation
	
	if(s[iterator]=='(' or s[iterator]==')')
	{
		countc1++;
	}
	else if(s[iterator]=='{' or s[iterator]=='}')
	{
		countc2++;
	}
	else if(s[iterator]=='[' or s[iterator]==']')
	{
		countc3++;
	}
	iterator++;
	ExpressionBalancedOrNot(s,countc1,countc2,countc3,iterator,size);

}

int main() 
{
	char str[1000];
	cin.getline(str,1000);
	int size=strlen(str);
	int initial=0;
	ExpressionBalancedOrNot(str,0,0,0,initial,size);
	return 0;
}