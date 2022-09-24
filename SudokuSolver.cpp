// Question:Solve soduku to fill empty cells

#include <iostream>
#include <math.h>
using namespace std;
bool IsSafe(int board[][9], int i, int j, int no, int n)
{
    // row and column mei nhi hona chahiye no
    for (int k = 0; k < n; k++)
    {
        if (board[i][k] == no || board[k][j] == no)
        {
            return false;
        }
    }

    // Lets iterate over the smaller box
    n = sqrt(n); // N=3
    int si = (i / n) * n;
    int sj = (j / n) * n;

    for (int k = si; k < n + si; k++)
    {
        for (int l = sj; l < n + sj; l++)
        {
            if (board[k][l] == no)
            {
                return false;
            }
        }
    }
    return true;
}

bool SudokuSolver(int board[][9], int i, int j, int n)
{
    // Base Case
    if (i == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }

    // Recursive Case

    // if we reach column ke end pe
    if (j == n)
    {
        return SudokuSolver(board, i + 1, 0, n); // tho next row pe bhej do and column ko 0 se initialize kr denge again
    }

    // Agar already filled up hai cell tho aage badh jayenge
    if (board[i][j] != 0)
    {
        return SudokuSolver(board, i, j + 1, n);
    }

    // Ek Empty cell ka kaam yahan kar rahe hai sabse pahele
    for (int no = 1; no <= n; no++)
    {
        if (IsSafe(board, i, j, no, n))
        {
            board[i][j] = no;
            bool KyaBakiSolveHua = SudokuSolver(board, i, j + 1, n);
            if (KyaBakiSolveHua == true)
            {
                return true;
            }
            board[i][j] = 0; // Backtracking
        }
    }
    return false;
}

int main()
{
    int mat[9][9] =
        {{5, 3, 0, 0, 7, 0, 0, 0, 0},
         {6, 0, 0, 1, 9, 5, 0, 0, 0},
         {0, 9, 8, 0, 0, 0, 0, 6, 0},
         {8, 0, 0, 0, 6, 0, 0, 0, 3},
         {4, 0, 0, 8, 0, 3, 0, 0, 1},
         {7, 0, 0, 0, 2, 0, 0, 0, 6},
         {0, 6, 0, 0, 0, 0, 2, 8, 0},
         {0, 0, 0, 4, 1, 9, 0, 0, 5},
         {0, 0, 0, 0, 8, 0, 0, 7, 9}};
    SudokuSolver(mat, 0, 0, 9);
    return 0;
}