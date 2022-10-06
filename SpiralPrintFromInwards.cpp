#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, temp, k = 0, counter = 1,flag=0;
    cin >> n;
    int arr[10] = {2, 4, 9, 25, 36, 49, 64, 81};

    for (i = 0; i < 7; i++)
    {
        if (arr[i - 1] < n and arr[i] > n)
        {
            i = arr[i];
            break;
        }
    }
    cout << i << endl;

    int final[1000][1000] = {0};

    int sr = sqrt(i) / 2, er = sr + 1, sc = sqrt(i) / 2, ec = sc + 1;
    temp = n;
    cout << sr << er << sc << ec << endl;

    while (n > 0)
    {
    	if(flag!=0)
    	{
    		ec++;
    	}
    	// if (arr[k + 1] == counter - 1)
     //   {
     //       sr--;
     //       sc--;
     //       er++;
     //       k++;
     //   }
        for (int l = sr; l < er; l++)
        {
            if (n <= 0)
            {
                break;
            }
            final[sc][l] = counter;
            counter++;
            n--;
        }
        
		
		for(int l=sc;l<ec;l++)
		{
		  if (n <= 0)
            {
                break;
            }
            final[l][er] = counter;
            counter++;
            n--;	
		}
		
        for (int l = ec; l >= sc; l--)
        {
            if (n <= 0)
            {
                break;
            }
            final[er][l] = counter;
            counter++;
            n--;
        }

        if (arr[k + 1] == counter - 1)
        {
            sr--;
            sc--;
            er++;
            k++;
        }
        for (int l = ec; l > sc; l--)
        {
            if (n <= 0)
            {
                break;
            }
            final[l][sr] = counter;
            counter++;
            n--;
        }
        flag=1;
        // break;
    }

    for (int a = 0; a < sqrt(i); a++)
    {
        for (int b = 0; b < sqrt(i); b++)
        {
        	
            cout << final[a][b]<<"       ";
        	
        }
        cout << endl;
    }

    cout << sr << er << sc << ec << endl;

    return 0;
}