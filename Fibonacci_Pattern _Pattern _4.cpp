
/*
Question:
            Take N (number of rows), print the following pattern (for N = 4)
            0
            1 1
            2 3 5
            8 13 21 34

            Input Format
            Constraints
            0 < N < 100

            Output Format
            Sample Input
            4
            Sample Output
            0
            1    1
            2    3     5
            8    13    21    34
            Explanation
            Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
*/
#include <iostream>
using namespace std;

int number_of_terms(int lines) // required for creating fibo
{
    int n = 0;
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            n++;
        }
    }
    // 	cout<<n;
    return n;
}

void fibo(int arr[], int terms)
{
    arr[0] = 0;
    arr[1] = 1;
    int i = 2;

    while (i <= terms)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        i++;
    }
}

void PrintPattern(int arr[], int terms, int number_of_lines)
{
    int l = 0;
    for (int i = 1; i <= number_of_lines; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << arr[l++] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr[10000];
    int number_of_lines, terms;
    // cout<<"Enter n :";
    cin >> number_of_lines;
    terms = number_of_terms(number_of_lines);

    fibo(arr, terms);

    PrintPattern(arr, terms, number_of_lines);

    return 0;
}