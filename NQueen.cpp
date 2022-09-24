// Question: To sucessfully placing N Queens
#include <iostream>
using namespace std;

// Approach 1-->To print first Possible Solution/Pattern
//  bool IsSafe(int board[][100], int i, int j, int n)
//  {
//      int l = i, m = j;
//      for (int k = 0; k < n; k++)
//      {
//          if (board[k][j] == 1 || board[i][j] == 1)
//          {
//              return false;
//          }
//      }

//     // Check upper right diagonal
//     while (i >= 0 and j < n)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//         i--;
//         j++;
//     }

//     // Check upper left diagonal
//     while (l >= 0 and m >= 0)
//     {
//         if (board[l--][m--])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// bool NQueen(int board[][100], int i, int n)
// {
//     // Base Case
//     if (i == n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 // cout << board[i][j] << " ";
//                 board[i][j]==1?cout<<"Q ":cout<<"- ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//         return true;    //return true if only want to print one correct solution and false if want to print out all the correct possible solution for this Question
//     }

//     // Recursive Case
//     // Har Column par jao i'th row ke
//     for (int j = 0; j < n; j++)
//     {
//         // Check krlo jis cell  par ho waha queen rakhna safe hai ya nhi
//         if (IsSafe(board, i, j, n) == true)
//         {
//             board[i][j] = 1; // Agar safe nhi hai tho rakhdo

//             // Ab baki N-1 queens recursion ko pucho usne rakhi hai ya nhi?
//             bool kyaBakiPlaceHui = NQueen(board, i + 1, n);
//             // agar Place ho gyi tho bas ban gai baat
//             if (kyaBakiPlaceHui == true)
//             {
//                 return true;
//             }

//             //Agar Place Nhi ho payi Queens tho jo rakhi thi tho uski position galat h
//             board[i][j]=0;//Backtracking

//         }
//     }
//     return false;// Har Column par check kr lia kahin nahi place hui, ab return false
// }



// Approach 2-->To print all the Possible Solutions/Patterns
bool IsSafe(int board[][100], int i, int j, int n)
{
    int l = i, m = j;
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

bool NQueen(int board[][100], int i, int n)
{
    // Base Case
    if (i == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout << board[i][j] << " ";
                board[i][j] == 1 ? cout << "Q " : cout << "- ";
            }
            cout << endl;
        }
        cout << endl;
        return false; // return true if only want to print one correct solution and false if want to print out all the correct possible solution for this Question
    }

    // Recursive Case
    // Har Column par jao i'th row ke
    for (int j = 0; j < n; j++)
    {
        // Check krlo jis cell  par ho waha queen rakhna safe hai ya nhi
        if (IsSafe(board, i, j, n) == true)
        {
            board[i][j] = 1; // Agar safe nhi hai tho rakhdo

            // Ab baki N-1 queens recursion ko pucho usne rakhi hai ya nhi?
            bool kyaBakiPlaceHui = NQueen(board, i + 1, n);
            // agar Place ho gyi tho bas ban gai baat
            if (kyaBakiPlaceHui == true)
            {
                return true;
            }

            // Agar Place Nhi ho payi Queens tho jo rakhi thi tho uski position galat h
            board[i][j] = 0; // Backtracking
        }
    }
    return false; // Har Column par check kr lia kahin nahi place hui, ab return false
}

int main()
{
    int board[100][100];
    cout << "The patterns possible are :" << endl;
    NQueen(board, 0, 5);

    return 0;
}