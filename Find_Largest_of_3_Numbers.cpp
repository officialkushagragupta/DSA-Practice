
/*
Question:
            Input three numbers, print the largest of these numbers
            Input Format
            Three numbers (both positive and negative numbers are allowed)

            Constraints
            Output Format
            the largest number

            Sample Input
            5 7 4
            Sample Output
            7

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    cout << arr[2];

    return 0;
}