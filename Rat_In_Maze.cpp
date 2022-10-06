
/*
Question:You are given a grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from position (i,j), down or right on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M). Find the rightmost path through which, rat can reach this position. A path is rightmost, if the rat is at position (i,j), it will always move to (i,j+1), if there exists a path from (i,j+1) to (N,M).

Input Format
First line has N and M : Next N lines have M columns representing grid.

Constraints
N,M<=1000 GRID(i,j)='X' or 'O'

Output Format
You have to print the path representing the path using 0 and 1.

Sample Input
5 4
OXOO
OOOX
OOXO
XOOO
XXOO
Sample Output
1 0 0 0 
1 1 0 0 
0 1 0 0 
0 1 1 1 
0 0 0 1 
Explanation
This path with 1 is available to reach to the end

*/

// #include <iostream>
// using namespace std;

// bool RatinMaze(char maze[1000][1000], int sol[1000][1000], int i, int j, int n, int m)
// {
//     // Base Case
//     if (i == n - 1 and j == m - 1)
//     {
//         sol[i][j] = 1;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cout << sol[i][j] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//         return true;
//     }

//     // Recursive Case
//     sol[i][j] = 1; 

//     // 1.Check Right se Raasta Mila? --->(i,j+1)
//     if (j + 1 < m and maze[i][j + 1] != 'X')
//     {
//         bool KyaRightSeRaastaMilla = RatinMaze(maze, sol, i, j + 1, n, m);
//         if (KyaRightSeRaastaMilla == true)
//         {
//             return true;
//         }
//     }
//     // 2.Check Neeche se Raasta Mila? --->(i+1,j)
//     if (i + 1 < n and maze[i + 1][j] != 'X')
//     {
//         bool KyaNicheSeRaastaMilla = RatinMaze(maze, sol, i + 1, j, n, m);
//         if (KyaNicheSeRaastaMilla == true)
//         {
//             return true;
//         }
//     }

//     sol[i][j] = 0; // Backtracking to undo the changes if it is unable to fulfil KyaRightSeRaastaMilla and KyaNicheSeRaastaMilla both
//     return false;
// }



// int main() {
//     char maze[1000][1000];
//     int sol[1000][1000];
//     int row,col;

//     cin>>row;
//     cin>>col;

//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cin>>maze[i][j];
//         }
//     }
    
//     RatinMaze(maze,sol,0,0,row,col);
    
   
// }
#include <iostream>
using namespace std;
bool ratInMaze(char maze[][1005],int sol[][1005],int i,int j,int m,int n)
{
    if(i==m && j==n)
    {
        sol[i][j] = 1;
        for(int row=0;row<=m;row++)
        {
            for(int col=0;col<=n;col++)
            {
                cout<<sol[row][col]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    //Rat should be inside the maze
    if(i>m || j>n)
        return false;
    //Should not encounter a blocked cell
    if(maze[i][j] == 'X')
        return false;
    //Recursive case
    //Assume solution exists through current cell
    sol[i][j] = 1;
    bool rightSuccess = ratInMaze(maze,sol,i,j+1,m,n);
    if(rightSuccess){
        return true ;
    }
    bool downSuccess  = ratInMaze(maze,sol,i+1,j,m,n);
    if(downSuccess){
        return true ;
    }

    //Backtrack
    sol[i][j] = 0;

    return false;
}
int main() 
{
    char maze[1005][1005];
    int sol[1005][1005]= {0};
    int m ;     //No of rows
    int n ;     //No of cols
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> maze[i][j];
        }
    }
    bool ans = ratInMaze(maze,sol,0,0,m-1,n-1);
    if(!ans)
        cout<<"-1";
    return 0;
}