
/*
    Question:
                Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

                Input Format
                Single integer N denoting number of lines of the pattern.

                Constraints
                N<=1000

                Output Format
                Pattern.

                Sample Input
                5
                Sample Output
                1
                11
                202
                3003
                40004
                Explanation
                If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.*/


#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    if(n>=2)
    {
        cout<<"1"<<endl<<"11"<<endl;
        count=2;
        
    }
    else if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else
    {
        return 0;
    }

abc:
    int j=count;
    for(int k=0;k<count;k++)
    {
        j=j*10;
    }
    cout<<(j+count)<<endl;
    count++;
    if(count<n)
    {
        goto abc;
    }
    return 0;  
}