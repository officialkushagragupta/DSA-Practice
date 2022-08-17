
/*
    Question:
        Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

        Input Format
        Single Character .

        Constraints
        -

        Output Format
        lowercase UPPERCASE Invalid

        Sample Input
        $
        Sample Output
        Invalid

*/

#include<iostream>
using namespace std;
int main() {

	char ch;
	cin>>ch;
	if(ch>=97&&ch<=122)
	{
	    // cout<<(int)ch;
		cout<<"lowercase";
	}
	else if(ch>=65&&ch<=90)
	{
	    // cout<<(int)ch;
		cout<<"UPPERCASE";
	}
	else
	{
		cout<<"Invalid";
	}

	return 0;
}




