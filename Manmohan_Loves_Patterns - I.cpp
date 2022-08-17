
/*
    Question:
                Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

                1
                11
                111
                1001
                11111
                100001

                Input Format
                Single number N.

                Constraints
                N<=1000

                Output Format
                Pattern corresponding to N.

                Sample Input
                6
                Sample Output
                1 
                11
                111 
                1001 
                11111
                100001
                Explanation
                For every odd number row print 1, odd number of times and for every even number row , print first and last character as 1 and rest of middle characters as 0.
*/

#include <iostream>
using namespace std;

// Approach 1-->

// int main()
// {
//     int n,count=0,i,j,f=0,k=1,l;
//     cin>>n;
    
//     while(count<=n)
//     {
//         if(f==0)
//         {
//             f=1;
//             for(i=1;i<=3;i++)
//             {
//                 for(j=0;j<i;j++)
//                 {
//                     cout<<"1";
//                 }
//                 cout<<endl;
//             }
// 			count=3;
            
//         }
// 	abc:
// 		if(count%2!=0)
// 		{
// 			for(i=1;i<count;i++)
// 			{
// 				k=k*10;
// 			}
// 			cout<<(k*10)+1<<endl;
// 			count++;		//till here count=4//1001
// 		}
// 		else if(count%2==0)
// 		{
// 			for(int g=0;g<=count;g++)
// 			{
// 				cout<<"1";
// 			}
// 			cout<<endl;
// 			count++;
// 		}
// 		if(count==n)
// 		{
// 		    return 0;;
// 		}
// 		goto abc;
        
//     }


//     return 0;
// }


// Approach2-->

//After Removing one while loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,count=0,i,j,f=0,k=1,l;
//     cin>>n;
    
    
//         if(f==0)
//         {
//             f=1;
//             for(i=1;i<=3;i++)
//             {
//                 for(j=0;j<i;j++)
//                 {
//                     cout<<"1";
//                 }
//                 cout<<endl;
//             }
// 			count=3;
            
//         }
// 	abc:
// 		if(count%2!=0)
// 		{
// 			for(i=1;i<count;i++)
// 			{
// 				k=k*10;
// 			}
// 			cout<<(k*10)+1<<endl;
// 			count++;		//till here count=4//1001
// 		}
// 		else if(count%2==0)
// 		{
// 			for(int g=0;g<=count;g++)
// 			{
// 				cout<<"1";
// 			}
// 			cout<<endl;
// 			count++;
// 		}
// 		if(count==n)
// 		{
// 		    return 0;
// 		}
// 		goto abc;
        
   


//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int n,count=0,i,j,f=0,k=1,l,temp=1;
    cin>>n;
    
    if(n>3)
    {
        
            if(f==0)
            {
                f=1;
                for(i=1;i<=3;i++)
                {
                    for(j=0;j<i;j++)
                    {
                        if(temp<=n){
                        cout<<"1";}
                    }
                    temp++;
                    cout<<endl;
                }
    			count=3;
                
            }
    }
    else if(n==3)
    {
        cout<<"1"<<endl<<"11"<<endl<<"111"<<endl;
        return 0;
        
    }
    else if(n==2)
    {
        cout<<"1"<<endl<<"11"<<endl;
        return 0;
    }
    else if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else
    {
        return 0;
    }
        // cout<<"Out of 1's\n";
	abc:
		if(count%2!=0)
		{
			k=1;
			for(i=1;i<count;i++)
			{
				k=k*10;
			}
			cout<<(k*10)+1<<endl;
			count++;		//till here count=4//1001
		}
		else if(count%2==0)
		{
			for(int g=0;g<=count;g++)
			{
				cout<<"1";
			}
			cout<<endl;
			count++;
		}
		if(count==n)
		{
		    return 0;;
		}
		goto abc;
    return 0;
}