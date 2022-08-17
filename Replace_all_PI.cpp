
/*
    Question:
            Replace all occurrences of pi with 3.14

            Input Format
            Integer N, no of lines with one string per line

            Constraints
            0 < N < 1000
            0 <= len(str) < 1000

            Output Format
            Output result one per line

            Sample Input
            3
            xpix
            xabpixx3.15x
            xpipippixx
            Sample Output
            x3.14x
            xab3.14xx3.15x
            x3.143.14p3.14xx
            Explanation
            All occurrences of pi have been replaced with "3.14".
*/


#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    char s1[100];
    void input()
    {
        cin >> s1;
    }
    void rep()
    {
        int j = strlen(s1);

        for (int i = 0; s1[i] != '\n'; i++)
        {
            if (s1[i] == 'p' && s1[i + 1] == 'i')
            {
                cout << "3.14";
                i++;
            }
            else
            {
                if (i > j)
                {
                    break;
                }

                cout << s1[i];
            }
        }
    }
};

int main()
{
    solution replace_pi[1000];
    int counter = 0, test_case;
    cin >> test_case;
    while (counter < test_case)
    {
        replace_pi[counter].input();
        counter++;
    }
    counter = 0;
    while (counter < test_case)
    {
        replace_pi[counter].rep();
        counter++;
        cout << endl;
    }
    return 0;
}