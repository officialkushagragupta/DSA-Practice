// 2 pointer problem - to be revised
/*
    Question:

            Deepak has a limited amount of money that he can spend on his girlfriend. So he decides to buy two roses for her. Since roses are of varying sizes, their prices are different. Deepak wishes to completely spend that fixed amount of money on buying roses for her.
            As he wishes to spend all the money, he should choose a pair of roses whose prices when summed up are equal to the money that he has.
            Help Deepak choose such a pair of roses for his girlfriend.

            NOTE: If there are multiple solutions print the solution that minimizes the difference between the prices i and j. After each test case, you must print a blank line.

            Input Format
            The first line indicates the number of test cases T.
            Then, in the next line, the number of available roses, N is given.
            The next line will have N integers, representing the price of each rose, a rose that costs less than 1000001.
            Then there is another line with an integer M, representing how much money Deepak has.
            There is a blank line after each test case.

            Constraints
            1≤ T ≤100
            2 ≤ N ≤ 10000
            Price[i]<1000001

            Output Format
            For each test case, you must print the message: ‘Deepak should buy roses whose prices are i and j.’, where i and j are the prices of the roses whose sum is equal do M and i ≤ j. You can consider that it is always possible to find a solution. If there are multiple solutions print the solution that minimizes the difference between the prices i and j.

            Sample Input
            2
            2
            40 40
            80

            5
            10 2 6 8 4
            10
            Sample Output
            Deepak should buy roses whose prices are 40 and 40.
            Deepak should buy roses whose prices are 4 and 6.
            Explanation
            Find two such kinds of price of roses which has sum up to equal to Deepak's Money.
*/


// Failed try 1-->
//  #include<iostream>
//  using namespace std;
//  int main() {

// 	int test_cases,test_case,current_case=0,difference;
// 	int prices[1000][1000],budget[1000],number_of_available_roses[1000],ans[2];
//     cout<<"Enter test case: ";
// 	cin>>test_cases;

// 	test_case=test_cases;

// 	while(test_case>0)
// 	{
// 		cin>>number_of_available_roses[current_case];//currenr_case is initialized with 0
// 		for(int i=0;i<number_of_available_roses[current_case];i++)
// 		{
// 			cin>>prices[current_case][i];
// 		}
// 		current_case++;
// 		cin>>budget[current_case];
// 		cout<<endl;

// 	}

// 	for(int i=0;i<current_case;i++)
// 	{
// 		difference=0;
// 		if(number_of_available_roses[i]==2)
// 		{
// 			ans[0]=prices[i][0];
// 			ans[1]=prices[i][1];

// 		}
// 		else
// 		{
// 			for(int j=i+1;j<number_of_available_roses[i];j++)
// 			{
// 				if(prices[i][i]+prices[i][j]==budget[i])
// 				{
// 					ans[0]=prices[i][i];
// 					ans[1]=prices[i][j];

// 					//edge case
// 					if(prices[i][i]-prices[i][j]>0)
// 					{
// 						int mag1=prices[i][i]-prices[i][j];
// 						if(mag1<difference)
// 						{
// 							ans[0]=prices[i][i];
// 							ans[1]=prices[i][j];
// 						}
// 					}
// 					else
// 					{
// 						int mag2=prices[i][j]-prices[i][i];
// 						if(mag2<difference)
// 						{
// 							ans[1]=prices[i][i];
// 							ans[0]=prices[i][j];
// 						}
// 					}
// 				}
// 			}
// 		}
// 	}

// 	cout<<"Deepak should buy roses whose prices are "<<ans[0]<<" and "<<ans[1]<<"."<<endl;

// 	return 0;
// }



// TRY 2-->2 pointer algorithm;
#include <iostream>
using namespace std;

class roses
{
public:
    int prices[100], temp, ans[2];
    int number_of_available_roses, budget;

    void input()
    {
        cin >> number_of_available_roses;
        for (int i = 0; i < number_of_available_roses; i++)
        {
            cin >> prices[i];
        }
        cin >> budget;



        // insertion sort

        for (int i = 1; i < number_of_available_roses; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (prices[i] < prices[j])
                {
                    temp = prices[i];
                    prices[i] = prices[j];
                    prices[j] = temp;
                }
            }
        }

        // cout << "Sorted array is : \n";
        // for (int i = 0; i < number_of_available_roses; i++)
        // {
        //     cout << prices[i] << endl;
        // }
    }

    void target()
    {

        // for (int i = 0; i < number_of_available_roses-1; i++)
        // {
        //     for(int j=i+1;j<number_of_available_roses;j++)
        //     {
        //         if(arr)
        //     }
        // }

        int left = 0, right = number_of_available_roses - 1, difference, flag = 0;
        while (right > left)
        {

            if (prices[left] + prices[right] == budget)
            {

                if (prices[right] - prices[left] <= difference || flag == 0)
                {
                    ans[0] = prices[left];
                    ans[1] = prices[right];
                    difference = prices[right] - prices[left];
                    flag = 1;
                    left++;
                }
            }
            else if (prices[left] + prices[right] > budget)
            {
                right--;
            }
            else
            {
                left++;
            }
        }

        // output statement
        cout << "Deepak should buy roses whose prices are " << ans[0] << " and " << ans[1] << "." << endl;
    }
};

int main()
{
    int number_of_test_cases, temp, counter = 0;
    roses test_case_objects[1000];

    cin >> number_of_test_cases;

    temp = number_of_test_cases;

    while (number_of_test_cases > 0)
    {
        test_case_objects[counter].input();
        number_of_test_cases--;
        counter++;
        cout << endl;
    }

    for (int k = 0; k < counter; k++)
    {
        test_case_objects[k].target();
    }

    return 0;
}