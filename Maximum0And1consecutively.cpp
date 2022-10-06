//For Question Refer   :  https://www.geeksforgeeks.org/maximum-length-sub-array-which-satisfies-the-given-conditions/

#include <iostream>

using namespace std;

int Minofcnt(int cnt_0,int cnt_1)
{
    if(cnt_1<cnt_0)
    {
        return cnt_1;
    }
    else
    {
        return cnt_0;
    }
}

// int Maxofcnt(int cnt_0,int cnt_1)
// {
//     if(cnt_1)
// }

int main()
{
    int arr[100],zeros[100],breaking_indexes_for_zeros[100],final[100];
    int size,i,counter_for_zeros=0,l=0;
    cin>>size;
    int cnt_0=0;
    int cnt_1=0;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            cnt_0++;
        }
        if(arr[i+1]!=0)
        {
            zeros[counter_for_zeros]=cnt_0;
            breaking_indexes_for_zeros[counter_for_zeros]=i;
            counter_for_zeros++;
            cnt_0=0;
        }
    }
    
    for(i=0;i<counter_for_zeros;i++)
    {
        cout<<breaking_indexes_for_zeros[i]<<"-->"<<zeros[i]<<endl;
    }
    
    int k=0;
    l=counter_for_zeros;
    while(counter_for_zeros>0)
    {
        i=breaking_indexes_for_zeros[k]+1;
        while(arr[i]!=0)
        {
            cnt_1++;
            i++;
        }
        int temp=Minofcnt(zeros[k],cnt_1);
        final[k]=temp;
        k++;
        cnt_1=0;
        counter_for_zeros--;
    }
    
    int max=final[0];
    for(i=0;i<k;i++)
    {
    	if(final[i]>max)
    	{
    		max=final[i];
    	}
    }
    cout<<endl;
    
    for(i=0;i<max;i++)
    {
        cout<<"0";
    }
    for(i=0;i<max;i++)
    {
        cout<<"1";
    }
    return 0;
}




// #include <iostream>
 
// using namespace std;
 
// int Minofcnt(int cnt_0,int cnt_1)
// {
//     if(cnt_1<cnt_0)
//     {
//         return cnt_1;
//     }
//     else
//     {
//         return cnt_0;
//     }
// }
 
// // int Maxofcnt(int cnt_0,int cnt_1)
// // {
// //     if(cnt_1)
// // }
 
// int main()
// {
//     int arr[100],zeros[100],breaking_indexes_for_zeros[100],final[100];
//     int size,i,counter_for_zeros=0,l=0;
//     cin>>size;
//     int cnt_0=0;
//     int cnt_1=0;
//     for(i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
 
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]==0)
//         {
//             cnt_0++;
//         }
//         if(arr[i+1]!=0)
//         {
//             zeros[counter_for_zeros]=cnt_0;
//             breaking_indexes_for_zeros[counter_for_zeros]=i;
//             counter_for_zeros++;
//             cnt_0=0;
//         }
//     }
 
//     for(i=0;i<counter_for_zeros;i++)
//     {
//         cout<<breaking_indexes_for_zeros[i]<<"-->"<<zeros[i]<<endl;
//     }
 
//     int k=0;
//     l=counter_for_zeros;
//     while(counter_for_zeros>0)
//     {
//         i=breaking_indexes_for_zeros[k]+1;
//         while(arr[i]!=0)
//         {
//             cnt_1++;
//             i++;
//         }
//         int temp=Minofcnt(zeros[k],cnt_1);
//         final[k]=temp;
//         k++;
//         cnt_1=0;
//         counter_for_zeros--;
//     }
 
//     int max=final[0];
//     for(i=0;i<k;i++)
//     {
//     	if(final[i]>max)
//     	{
//     		max=final[i];
//     	}
//     }
//     cout<<endl;
 
//     for(i=0;i<max;i++)
//     {
//         cout<<"0";
//     }
//     for(i=0;i<max;i++)
//     {
//         cout<<"1";
//     }
//     return 0;
// }