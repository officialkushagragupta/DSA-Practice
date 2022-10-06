/*
Problem Statement
Suggest Edit
You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.
Note:
1. The length of each array is greater than zero.

2. The first index of each array is the most significant digit of the number. For example, if the array A[] = {4, 5, 1}, then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.

3. Both numbers do not have any leading zeros in them. And subsequently, the sum should not contain any leading zeros.
Input Format:
The first line of the input contains an integer T, denoting the number of test cases.

The first line of each test case contains two space-separated integers 'N' and 'M', denoting the size of the two arrays.

The second line of each test case contains 'N' space-separated integers denoting the elements of the first array.

The third line of each test case contains 'M' space-separated integers denoting the elements of the second array.
Output Format:
The only line of output of each test case contains space-separated digits which correspond to the sum of the two numbers 'A' and 'B'.
Note :
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 10^2
1 <= N, M <= 10^4
0 <= A[i], B[i] <= 9

Time Limit: 1 sec
Sample Input 1:
2
4 1 
1 2 3 4
6
3 2
1 2 3
9 9    
Sample Output 1:
1 2 4 0
2 2 2
Explanation For Sample Input 1:
For the first test case, the integer represented by the first array is 1234 and the second array is 6, so the sum is 1234 + 6 =  1240.

For the second test case, the integer represented by the first array is 123 and the second array is 99, so the sum is 123 + 99 = 222.
Sample Input 2:
2
3 3 
4 5 1
3 4 5
2 2
1 1
1 2
Sample Output 2:
7 9 6
2 3


Problem from Code Studio

*/


#include <bits/stdc++.h> 
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    vector<int>ans;
    int digit1=0;
    for(int i=0;i<n;i++)
    {
        digit1=digit1*10+a[i]%10;
    }
    int digit2=0;
    for(int i=0;i<m;i++)
    {
        digit2=digit2*10+b[i]%10;
    }
//     cout<<digit1<<endl;
//     cout<<digit2<<endl;
    int digit3=digit1+digit2;
//     cout<<digit3<<endl;
    int k=0;
    
    while(digit3>0)
    {
        int temp=digit3%10;
        ans.push_back(temp);
        digit3=digit3/10;
    }

    reverse(ans.begin(),ans.end());
    // cout<<"\n*****************"<<endl;
    // for(int i=0;i<3;i++)
    // {
    //     cout<<ans[i]<<",,,";
    // }
    // cout<<"\n*****************"<<endl;
    return ans;
}

int main()
{
    vector<int>a={4,5,1};
    vector<int>b={3,2,1};
    vector<int>ans;
    ans=findArraySum(a,3,b,3);
    return 0;
}
