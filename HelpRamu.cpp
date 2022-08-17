
/*
Question:
			Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

			Public transport is not free. There are 4 types of tickets:

			A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
			A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
			A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
			A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.

			Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.

			Input Format
			Each Test case has 4 lines which are as follows:

			The first line contains four integers c1, c2, c3, c4 (1 ≤ c1, c2, c3, c4 ≤ 1000) — the costs of the tickets.
			The second line contains two integers n and m (1 ≤ n, m ≤ 1000) — the number of rickshaws and cabs Ramu is going to use.
			The third line contains n integers ai (0 ≤ ai ≤ 1000) — the number of times Ramu is going to use the rickshaw number i.
			The fourth line contains m integers bi (0 ≤ bi ≤ 1000) — the number of times Ramu is going to use the cab number i.

			Constraints
			1 <= T <= 1000 , where T is no of testcases
			1 ≤ c1, c2, c3, c4 ≤ 1000
			1 ≤ n, m ≤ 1000
			0 ≤ ai , bi ≤ 1000

			Output Format
			For each testcase , print a single number - the minimum sum of rupees Ramu will have to spend on the tickets in a new line.

			Sample Input
			2
			1 3 7 19
			2 3
			2 5
			4 4 4
			4 3 2 1
			1 3
			798
			1 2 3
			Sample Output
			12
			1
			Explanation
			For the first testcase ,
			The total cost of rickshaws = min( min(2 * 1, 3) + min(5 * 1, 3), 7) = min(5, 7) = 5
			The total cost of cabs = min( min(4 * 1, 3) + min(4 * 1, 3) + min(4 * 1, 3) , 7) = min ( 9, 7) = 7
			Total final cost = min( totalCabCost + totalRickshawCost , c4) = min( 5 + 7, 19) = min ( 12, 19) = 12
			We print 12.

*/

#include<iostream>
using namespace std;
int min(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}



class Soltion{
	public:
		int c1,c2,c3,c4;
		int n,m;
		int rick[10],cab[10];


	void input()
	{
		cin>>c1>>c2>>c3>>c4;
		cin>>n>>m;

		for(int i=0;i<n;i++)
		{
			cin>>rick[i];
		}

		for(int i=0;i<m;i++)
		{
			cin>>cab[i];
		}
	}

	void minimumexpense()
	{
		//For Rickshaws
		//comparing c1 and c2:
		cout<<"\n\nFor Rickshaws"<<endl;
		int prefinal_stage1_r[10];
		for(int i=0;i<n;i++)
		{
			prefinal_stage1_r[i]=min(rick[i]*c1,c2);
			cout<<"\nmin of "<<rick[i]*c1<<"\tand\t"<<c2<<" is :"<<prefinal_stage1_r;
		}

		int prefinal_stage2_r=0;
		for(int i=0;i<n;i++)
		{
			prefinal_stage2_r+=prefinal_stage1_r[i];
		}
		cout<<"\nprefinal_stage2_r :"<<prefinal_stage2_r;

		int prefinal_stage3_r=min(prefinal_stage2_r,c3);
		cout<<"\nprefinal_stage3_r  -> min of "<<prefinal_stage2_r<<"   and   "<<c3<<"is :"<<prefinal_stage2_r;
		

		//For Cabs

		//comparing c1 and c2:
		cout<<"\n\nFor Cabs"<<endl;
		int prefinal_stage1_c[10];
		for(int i=0;i<m;i++)
		{
			prefinal_stage1_c[i]=min(cab[i]*c1,c2);
			cout<<"\nmin of "<<cab[i]*c1<<"\tand\t"<<c2<<" is :"<<prefinal_stage1_c;
	
		}

		int prefinal_stage2_c=0;
		for(int i=0;i<m;i++)
		{
			prefinal_stage2_c+=prefinal_stage1_c[i];
		}
		cout<<"\nprefinal_stage2_c :"<<prefinal_stage2_c;


		int prefinal_stage3_c=min(prefinal_stage2_c,c3);
		cout<<"\nprefinal_stage3_c  -> min of "<<prefinal_stage2_c<<"   and   "<<c3<<"is :"<<prefinal_stage2_c;
		
		int prefinal=prefinal_stage3_c+prefinal_stage3_r;
		cout<<"\nprefinal_stage3_c+prefinal_stage3_r : "<<prefinal<<endl;
		int final_answer=min(prefinal,c4);
		cout<<"\nMin of "<<prefinal<<"and "<<c4<<"is : "<< final_answer<<endl;
		// cout<<final_answer<<endl;
	}



};

int main() 
{
	Soltion ramupublictransport[100];
	int test_cases,counter=0;
	cin>>test_cases;

	while(test_cases>0)
	{
		ramupublictransport[counter].input();
		counter++;
		test_cases--;
	}
	
	while(test_cases<counter)
	{
		cout<<"\n\nFor test case "<<test_cases<<endl;
		ramupublictransport[test_cases].minimumexpense();
		test_cases++;
	}
	



	return 0;
}