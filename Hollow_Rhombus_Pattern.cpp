
/*
Question:
            Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

            Input Format
            Single integer N.

            Constraints
            N <= 20

            Output Format
            Print pattern.

            Sample Input
            5
            Sample Output
                 *****
                *   *
               *   *
             *   *
            *****
            Explanation
            For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.
*/

#include <iostream>
using namespace std;
int main()
{
    int n, spaces, line = 1;
    cin >> n;
    spaces = n - 1;

    // cout<<"    *****"<<endl;
    // cout<<"   *   *"<<endl;
    // cout<<"  *   *"<<endl;
    // cout<<" *   *"<<endl;
    // cout<<"*****";

    while (line <= n)
    {
        for (int i = 0; i < spaces; i++)
        {
            cout << " ";
        }

        if (line == 1 || line == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            cout << "*";
            for (int j = 0; j < n - 2; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }

        spaces--;
        line++;
    }
    return 0;
}