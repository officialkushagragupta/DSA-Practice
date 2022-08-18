
/*
Question:
            A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a Boston number.

            Input Format
            There will be only one line of input:N , the number which needs to be checked.

            Constraints
            1 < N < 2,147,483,647 (max value of an integer of the size of 4 bytes)

            Output Format
            1 if the number is a Boston number. 0 if the number is a not Boston number.

            Sample Input
            378
            Sample Output
            1
            Explanation
            Self Explanatory

*/
//2 test case still fails because of MLE
#include <iostream>

using namespace std;

int main()
{
    int FactorSeive[1000000]={0};
    int factors[1000000]={0};
    long long int num,temp;
    int counter=0,sumOfFators=0,SumOfDigits=0;
    cin>>num;
    temp=num;
    for(long long int i=2;i<=num;i++)
    {
        if(FactorSeive[i]==0)
        {
             FactorSeive[i]=i;
        
            for(long long int j=i*i;j<=num;j=j+i)
            {
                if(FactorSeive[j]==0)
                {
                    // cout<<"i="<<i<<" and j="<<j<<endl;
                   FactorSeive[j]=i;
                }
            }
        }  

    }

    // cout<<"num :"<<num<<endl;

    // cout<<"Beore while counter="<<counter<<endl;
    while(num!=0)
    {
        if(num==1)
        {
            break;
            
        }
        factors[counter]=FactorSeive[num];
        
        num=num/FactorSeive[num];
        // cout<<"counter :"<<counter<<"\tnum:"<<num<<endl;
        counter++;

    }
    // cout<<"counter :"<<counter<<endl;
    for(long long int i=0;i<counter;i++)
    {
        sumOfFators+=factors[i];
    }
    // cout<<"SumOfFactors :"<<sumOfFators<<endl;
    
    while(temp>0)
    {
        SumOfDigits=SumOfDigits+temp%10;
        temp=temp/10;
    }
    // cout<<"SumOfDigits:"<<SumOfDigits<<endl;
    if(sumOfFators==SumOfDigits)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
    
    
    return 0;
}

