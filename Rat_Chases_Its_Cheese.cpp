
/*
Question:
You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from a position towards left, right, up or down on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M) where it's cheese is waiting for. There exits a unique path in the grid . Find that path and help the rat reach its cheese.

Input Format
First line contains 2 integers N and M denoting the rows and columns in the grid.
Next N line contains M characters each. An 'X' in position (i,j) denotes that the cell is blocked and ans 'O' denotes that the cell is empty.

Constraints
1 <= N , M <= 10

Output Format
Print N lines, containing M integers each. A 1 at a position (i,j) denotes that the (i,j)th cell is covered in the path and a 0 denotes that the cell is not covered in the path.
If a path does not exits then print "NO PATH FOUND"

Sample Input
5 4
OXOO
OOOX
XOXO
XOOX
XXOO
Sample Output
1 0 0 0 
1 1 0 0 
0 1 0 0 
0 1 1 0 
0 0 1 1 
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
    
//     if(RatinMaze(maze,sol,0,0,row,col))
// 	{
// 		// cout<<endl<<"Mil gya";
// 	}
// 	else{
// 		cout<<"NO PATH FOUND";
// 	}
    
   
// }


#include<iostream>
using namespace std;
bool ratInMaze(char maze[10][10],int soln[10][10],int i,int j,int n,int m){
     if(i>n||j>m||i<0||j<0 || soln[i][j]){
        return false;
    }
    if(maze[i][j]=='X'){
        return false;
    }

    if(i==n&&j==m){
        soln[n][m]=1;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<soln[i][j]<<" ";
        }
        cout<<endl;
    }        

        return true;
    }
    
   
    
    bool right=false,down=false,up=false,left=false;
    soln[i][j] = 1;
    
    if(i+1<=n && soln[i+1][j]==0){
        down = ratInMaze(maze,soln,i+1,j,n,m);
    }
    //Modiificatons:
    if(j+1<=m && soln[i][j+1]==0 && !down){
        right = ratInMaze(maze,soln,i,j+1,n,m);
    }
    if(i-1>=0 && soln[i-1][j]==0 && !down && !right){
        up = ratInMaze(maze,soln,i-1,j,n,m);
    }
    if(j-1>=0 && soln[i][j-1]==0 && !down && !right && !up){
        left = ratInMaze(maze,soln,i,j-1,n,m);
    }

    if(right||down||left||up){
        return true;
    }
    //Modification:
    soln[i][j] = 0;
    
    return false;
}
int main() {
    int n,m;
    cin>>n>>m;
    char maze[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>maze[i][j];
        }
    }
    int soln[10][10]={0};
    
    bool ans = ratInMaze(maze,soln,0,0,n-1,m-1);
    
    if(ans==false){
        cout<<"NO PATH FOUND";
    }
    
	return 0;
}