//Need to Revise 
/*
Question:
            You are given an integer N, return the first N of Pascal's triangle. In Pascal's triangle, each number is the sum of the two numbers directly above it.

            Input Format
            The first line of input is an integer N.

            Constraints
            0 <= N <= 30

            Output Format
            N rows of pascal triangle separated by a new line.

            Sample Input
            4
            Sample Output
            1
            1 1
            1 2 1
            1 3 3 1
            Explanation
            The output follows the trend of a pascal’s triangle.

*/

//Approach 1---> One Test Case Didn't pass, Doesn't work for big numbers so,avoid this approach
// #include<iostream>
// using namespace std;

// int factorial(int fact)
// {
//     int factorial=1;
//     for(int k=fact;k>=1;k--)
//     {
//         factorial=factorial*k;
//     }
//     return factorial;
// }

// void BinomialCoef(int i,int j)
// {
//     cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";

// }


// int main(){

// //Using Binomial expression approach!
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             BinomialCoef(i,j);
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//Approach that passes all Test Cases
#include<iostream>
using namespace std;
int main(){
    int n=0,row;
    cin>>row;
    while(n<row)
    {
        int pt=1;
        int nt=1;
        cout<<pt<<" ";
        int r=1;
        while(r<=n)
        {
            nt=pt*(n-r+1)/r;
            cout<<nt<<" ";
            pt=nt;
            r=r+1;
        }
        cout<<endl;
        n++;
    }

    return 0;
}