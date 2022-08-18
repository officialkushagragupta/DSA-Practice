//Must Revise
/*
Question:
            Take as input a two-d array. Wave print it column-wise.

            Input Format
            Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

            Constraints
            Both M and N are between 1 to 10.

            Output Format
            All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).

            Sample Input
            4 4
            11 12 13 14
            21 22 23 24
            31 32 33 34
            41 42 43 44
            Sample Output
            11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END

*/
#include <bits/stdc++.h>
using namespace std;

void input(int arr[10][10],int rows,int coloumns)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            cout << "\nEnter (" << i << "," << j << ") th element :";
            cin >> arr[i][j];
        }
    }
}

void wavePrint(int arr[10][10],int rows,int columns)

{
    cout<<"The pattern printed would be :";
    for(int col=0;col<columns;col++)
    {
        if(col%2==0)
        {
            for(int ro=0;ro<rows;ro++)
            {
                cout<<arr[ro][col]<<", ";
            }
        }
        else

        {
            for(int ro=rows-1;ro>=0;ro--)
            {
                cout<<arr[ro][col]<<", ";
            }
        }
    }
}

void PrintArray(int arr[10][10],int rows,int coloumns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
}


int main()
{
    int arr[10][10];
    int rows, coloumns, key;
    cout << "Inputting a Matrix " << endl;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    cout << "\nEnter Number of Columns : ";
    cin >> coloumns;

    input(arr, rows, coloumns);

    cout<<"\nEntered array is :"<<endl;

    PrintArray(arr, rows, coloumns);

    wavePrint(arr, rows, coloumns);
	cout<<"END";
    
    return 0;
}