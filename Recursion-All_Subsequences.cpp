//Must be Revised
/*
Question:Print all the subsequences of a string in lexicographical order.

Input Format
First line contains an integer N, the no of strings.
Next, N lines follows one string per line.

Constraints
1 < len(str) < 20

Output Format
No of subsequences one per line

Sample Input
1  
ab
Sample Output
  
a  
ab  
b  
Explanation
4 subsequences are printed.
Empty string is a subsequence.


*/





//Solution:
#include<bits/stdc++.h>

using namespace std;

void subsequence(string str,int repo,string out[],int &outpos)
{
     if(str[repo]=='\0')
     {
          out[outpos]="";
          outpos++;
          return;
     }
     subsequence(str,repo+1,out,outpos);
     for(int i=0;i<outpos;i++)
     {
          out[outpos+i]=out[i];
          out[i] = str[repo] + out[i];
     }
     outpos*=2;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string str;
          cin>>str;

          int outpos=0;
          string out[1000];

          subsequence(str,0,out,outpos);

          sort(out,out+outpos);
          for(int i=0;i<outpos;i++)
               cout<<out[i]<<"\n";
     }
}