
/*
Question:
                    Take N (number of rows), print the following pattern (for N = 4).
                                Constraints
                    0 < N < 100

                    Output Format
                    Sample Input
                    4
                    Sample Output
                    1
                    2	3
                    4	5	6
                    7	8	9	10
                    Explanation
                    Each number is separated from other by a tab.

*/

#include <iostream>
using namespace std;
int main()
{

    int counter = 1, line, temp;
    cin >> line;
    temp = line;

    for (int i = 0; i < line; i++)
    {
        for (int j = temp; j <= line; j++)
        {
            cout << counter << "\t";
            counter++;
        }
        temp--;

        cout << endl;
    }

    return 0;
}