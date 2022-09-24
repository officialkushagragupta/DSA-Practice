
#include <iostream>

using namespace std;

int main()
{
    int num=6070,digits=4,multiplicator=1,divider=10,counter=0;
    int posiibleOutcomes[10];
    
    for(int i=0;i<digits;i++)
    {
        cout<<num/divider<<"\t"<<num%multiplicator<<"\n";
        posiibleOutcomes[counter]=(num/divider)*multiplicator+num%multiplicator;
        counter++;
        multiplicator=multiplicator*10;
        divider=divider*10;
    }
    int max=posiibleOutcomes[0];
    for(int i=0;i<counter;i++)
    {
        if(max<posiibleOutcomes[i])
        {
            max=posiibleOutcomes[i];
        }
        
    }
    cout<<"Max is ="<<max;
    
    return 0;
}
