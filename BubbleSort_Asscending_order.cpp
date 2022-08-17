
/*
Question:
            Given an integer array of size n, sort the array by using bubble sort algorithm.

            Input Format
            First line of input contains integer n, denoting the size of the array. Next line of input contains n space separated integers denoting the elements of the array.

            Constraints
            1<=n<=10^5

            Output Format
            Print the array in sorted ascending order.

            Sample Input
            5
            1 6 5 4 3
            Sample Output
            1 3 4 5 6
            Explanation
            1,3,4,5,6 are in sorted ascending order.
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[10000], size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}