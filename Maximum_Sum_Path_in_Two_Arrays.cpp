
/*
Question: 
			You are provided two sorted arrays. You need to find the maximum length of bitonic subsequence. You need to find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. You can switch from one array to another array only at common elements.

			Input Format
			First line contains integer t which is number of test case. For each test case, it contains two integers n and m which is the size of arrays and next two lines contains n and m space separated integers respectively.

			Constraints
			1<=t<=100 1<=n,m<=100000

			Output Format
			Print the maximum path.

			Sample Input
			1
			8 8
			2 3 7 10 12 15 30 34
			1 5 7 8 10 15 16 19
			Sample Output
			122
			Explanation
			122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34
*/
#include <iostream>
using namespace std;
int maxof(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int maxsum,temp=0,sum1 = 0, sum2 = 0, ans = 0,flag, i, j, n[1000], m[1000], test_cases, counter = 0, arr1[1000], arr2[1000];
	cin >> test_cases;
	while (test_cases > 0)
	{
		cin >> n[counter] >> m[counter];
		for (i = 0; i < n[counter]; i++)
		{
			cin >> arr1[i];
		}
		for (i = 0; i < m[counter]; i++)
		{
			cin >> arr2[i];
		}
		counter++;
		test_cases--;
	}


	cout << "n[0]=" << n[0] << " m[0] =" << m[0] << "and test_cases =" << test_cases << endl;

	cout << "\narr1:\n";
	for (i = 0; i < n[0]; i++)
	{
		cout <<arr1[i]<<" ";
	}
	cout<<"\narr2:\n";
	for (i = 0; i < m[0]; i++)
	{
		cout<< arr2[i]<<" ";
	}
	cout<<endl;

redo:
	i = 0;
	j = 0;
	ans = 0;
	temp=0;
	// while (i < n[test_cases] and j < m[test_cases])
	// {
	// 	cout<<"in while loop where, i="<<i<<"\t"<<"j="<<j<<endl;
	// 	if (arr1[i] < arr2[j])
	// 	{
	// 		cout<<"in arr1["<<i<<"]<arr2["<<j<<"]"<<endl;
	// 		sum1 = sum1 + arr2[j];
	// 		cout<<"Now sum1 is"<<sum1<<endl;
	// 		j++;
	// 	}
	// 	else if (arr1[i] > arr2[j])
	// 	{
	// 		cout<<"in arr1["<<i<<"]>arr2["<<j<<"]"<<endl;
	// 		sum2 = sum2 + arr1[i];
	// 		cout<<"Now sum1=2 is"<<sum2<<endl;
	// 		i++;
	// 	}
	// 	else // when elements are same
	// 	{
	// 		cout<<"in arr1["<<i<<"]=arr2["<<j<<"]"<<endl;
	// 		// ans+=maxof(sum1,sum2)+arr1[i];
	// 		int maxsum = maxof(sum1, sum2);
	// 		cout << " \nmaxsum :" << maxsum << endl;
	// 		ans += maxsum + arr1[i];
	// 		cout << "Answer is :" << ans << endl;
	// 		sum1 = sum2 = 0;
	// 		i++;
	// 		j++;
	// 	}
	// }

	while (i < n[test_cases] and j < m[test_cases])
	{
		cout<<"in while loop where, i="<<i<<"\t"<<"j="<<j<<endl;
		if (arr1[i] > arr2[j])
		{
			flag=1;
			cout<<"in arr1["<<i<<"]>arr2["<<j<<"]"<<endl;
			sum1 = sum1 + arr2[j];

			int k=i;
			temp=temp+arr1[k];
			cout<<"Now sum1 is"<<sum1<<endl;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			flag=1;
			cout<<"in arr1["<<i<<"]<arr2["<<j<<"]"<<endl;
			sum2 = sum2 + arr1[i];
			int k=j;
			temp=temp+arr2[k];

			cout<<"Now sum2= is"<<sum2<<endl;
			i++;
		}
		else // when elements are same
		{
			cout<<"in arr1["<<i<<"]=arr2["<<j<<"]"<<endl;
			// ans+=maxof(sum1,sum2)+arr1[i];
			maxsum = maxof(sum1, sum2);
			cout << " \nmaxsum i.e.maxof(sum1,sum2):" << maxsum << endl;
			ans += maxsum + arr1[i];
			cout << "Answer is :" << ans << endl;
			sum1 = 0;
			sum2 = 0;
			temp=0;
			i++;
			j++;
			flag=0;
		}
	}

	if(flag==1)
	{
		maxsum = maxof(sum1, sum2);
		maxsum=maxof(maxsum,temp);
			cout << " \nmaxsum i.e.maxof(sum1,sum2):" << maxsum << endl;
			ans += maxsum + arr1[i];
			cout << "Answer is :" << ans << endl;

	}

	test_cases++;

	cout<<"Final answer is :";
	cout << ans;
	if (test_cases < counter)
	{
		test_cases++;
		goto redo;
	}

	return 0;
}