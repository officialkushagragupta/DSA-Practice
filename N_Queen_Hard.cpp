// Must be revised atleast 5 times

/*
Question:
            You are given an empty chess board of size N*N. Find the number of ways to place N queens on the board, such that no two queens can kill each other in one move. A queen can move vertically, horizontally and diagonally.

            Input Format
            A single integer N, denoting the size of chess board.

            Constraints
            1 ≤ N < 15

            Output Format
            A single integer denoting the count of solutions.

            Sample Input
            4
            Sample Output
            2
*/
#include <iostream>
using namespace std;

bool isSafe(int board[][50], int i, int j, int n)
{
    int l = i, m = j;
    // check straight up and down ,then left and right
    for (int k = 0; k < n; k++)
    {
        if (board[k][j] == 1 || board[i][j] == 1)
        {
            return false;
        }
    }

    // Check upper right diagonal
    while (i >= 0 and j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }

    // Check upper left diagonal
    while (l >= 0 and m >= 0)
    {
        if (board[l--][m--])
        {
            return false;
        }
    }
    return true;
}

bool NQueen(int board[][50], int i, int n, int &count)
{
    // Base Case
    if (i == n)
    {
        count++;
        return false;
    }

    // Recursive Case
    // Har ek row ke ith index pe dekho rakh ke
    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, i, j, n) == true)
        {
            board[i][j] = 1;

            bool KyaBakiPlaceHui = NQueen(board, i + 1, n, count);
            if (KyaBakiPlaceHui == true)
            {
                return true;
            }

            // Agar nhi ho payi tho undo the changes made
            board[i][j] = 0; // Backtrack
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int board[50][50];
    int count = 0;
    int i = 0;
    NQueen(board, i, n, count);

    cout << count;

    return 0;
}