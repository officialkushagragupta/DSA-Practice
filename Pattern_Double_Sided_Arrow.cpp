// Must Revise this Question,this is tough
/*
Question:
Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1
                        2 1   1 2
                    3 2 1       1 2 3
                4 3 2 1           1 2 3 4
                    3 2 1       1 2 3
                        2 1   1 2
                            1
Input Format
Take N as input.

Constraints
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7
Sample Output
            1
        2 1   1 2
    3 2 1       1 2 3
4 3 2 1           1 2 3 4
    3 2 1       1 2 3
        2 1   1 2
            1
Explanation
Catch the pattern and print it accordingly.
*/

#include <iostream>
using namespace std;

/*
void UpperPatternIncreasing(int n,int iterator,int prespace,int midspace)
{
    // cout<<"\npres:"<<prespace<<"\tmids:"<<midspace<<"\titerator :"<<iterator<<endl;
    if(iterator>n)
    {
        return;
    }

    int line=iterator;

    //spacing first
    for(int i=0;i<prespace;i++)
    {
        cout<<" ";
    }

    //Now pattern
    for(int i=line;i>=1;i--)
    {
        cout<<i<<" ";
    }

    if(line!=1)
    {
        for(int i=0;i<midspace-1;i++)
        {
            cout<<" ";
        }

        for(int i=1;i<=line;i++)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    UpperPatternIncreasing(n,iterator+1,prespace-n,midspace+n);
}

void LowerPatternDecreasing(int a[],int n,int iterator,int prespace,int midspace)
{
    // cout<<"\npres:"<<prespace<<"\tmids:"<<midspace<<"\titerator :"<<iterator<<endl;
    if(iterator-1>=n)
    {
        return;
    }

    int line=iterator;

    //spacing first
    for(int i=0;i<prespace;i++)
    {
        cout<<" ";
    }

    //Now pattern
    for(int i=n-line;i>=1;i--)
    {
        cout<<i<<" ";
    }

    if(line!=n-1)
    {
        for(int i=0;i<a[midspace];i++)
        {
            cout<<" ";
        }

        for(int i=1;i<=n-line;i++)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    LowerPatternDecreasing(a,n,iterator+1,prespace+n,midspace-1);

}

int main()
{
    int num;
    cin>>num;

    int arr[100];
    arr[0]=num-1;
    for(int i=1;i<num-2;i++)
    {
        arr[i]=arr[i-1]+num;
    }
    // for(int i=0;i<num-2;i++)
    // {
    // 	cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    UpperPatternIncreasing(num,1,num*3,-1);
    LowerPatternDecreasing(arr,num,1,num,num-3);

    return 0;
}

*/

/*
#include<iostream>
using namespace std;


void UpperPatternIncreasing(int n,int iterator,int prespace,int midspace)
{
    // cout<<"\npres:"<<prespace<<"\tmids:"<<midspace<<"\titerator :"<<iterator<<endl;
    if(iterator>n)
    {
        return;
    }

    int line=iterator;

    //spacing first
    for(int i=0;i<prespace;i++)
    {
        cout<<" ";
    }

    //Now pattern
    for(int i=line;i>=1;i--)
    {
        cout<<i<<" ";
    }

    if(line!=1)
    {
        for(int i=0;i<midspace-1;i++)
        {
            cout<<" ";
        }

        for(int i=1;i<=line;i++)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    UpperPatternIncreasing(n,iterator+1,prespace-n,midspace+n);
}

void LowerPatternDecreasing(int a[],int n,int iterator,int prespace,int midspace)
{
    // cout<<"\npres:"<<prespace<<"\tmids:"<<midspace<<"\titerator :"<<iterator<<endl;
    if(iterator-1>=n)
    {
        return;
    }

    int line=iterator;

    //spacing first
    for(int i=0;i<prespace;i++)
    {
        cout<<" ";
    }

    //Now pattern
    for(int i=n-line;i>=1;i--)
    {
        cout<<i<<" ";
    }

    if(line!=n-1)
    {
        for(int i=0;i<a[midspace]-1;i++)
        {
            cout<<" ";
        }

        for(int i=1;i<=n-line;i++)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    LowerPatternDecreasing(a,n,iterator+1,prespace+n,midspace-1);

}

int main()
{
    int num;
    cin>>num;

    cout<<endl<<endl;

    int arr[100];
    arr[0]=num-1;
    for(int i=1;i<num-2;i++)
    {
        arr[i]=arr[i-1]+num;
    }
    for(int i=0;i<num-2;i++)
    {
// 		cout<<arr[i]<<" ";
    }
// 	cout<<endl;

    UpperPatternIncreasing(num,1,num*(num-1),-1);
    LowerPatternDecreasing(arr,num,1,num,num-3);

    return 0;
}

*/


// Correct Solution:
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        for (int j = 1; j <= (2 * (n + 1 - 2 * i)); j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        for (int j = 1; j < (4 * (i - 1) - 1); j++)
        {
            cout << " ";
        }
        if (i > 1)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    for (int i = n / 2; i > 0; i--)
    {
        for (int j = 1; j <= (2 * (n + 1 - 2 * i)); j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        for (int j = 1; j < (4 * (i - 1) - 1); j++)
        {
            cout << " ";
        }
        if (i > 1)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
