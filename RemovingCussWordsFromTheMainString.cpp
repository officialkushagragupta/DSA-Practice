/*

    Question: Removing cuss words from the main string

*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	
	int i,j,k,temp=0,flag=0,l;
	string main_str;
	char cuss_word[2][100]={"hello","is"};
	string new_str[1000];
	getline (cin, main_str);
	
	for(i=0;i<main_str.length();i++)
	{
		// cout<<i<<"\n";
		for(j=0;j<2;j++)
		{
			if(main_str[i]==cuss_word[j][0])
			{
				for(k=i,l=0;l<strlen(cuss_word[j]);l++,k++)
				{
					if(main_str[k]!=cuss_word[j][l])
					{
						break;
					}

				}
				if(l==strlen(cuss_word[j]))
				{
					for(k=0,l=i;k<strlen(cuss_word[j]);k++,l++)
						main_str[l]='*';
					//cout<<"\nfound at "<<cuss_word[j]<<"    "<<i;
				}
			}
		}
	}	
	cout<<main_str;
	// for(i=0;i<main_str.length();)
	// {
	// 	if(main_str[i-1]==' ' || i==0)
	// 	{
	// 		for(j=0;j<2;j++)
	// 		{
	// 			temp=i;
	// 			for(k=0;cuss_word[j][k]!='\0';k++)
	// 			{
	// 				if(main_str[i]!=cuss_word[j][k])
	// 				{
	// 					flag++;
	// 				}
	// 				i++;
	// 			}
	// 			if(flag==0)
	// 			{
	// 				for(int l=temp;l<i;l++)
	// 				{
	// 					main_str[l]='*';	
                        
	// 				}
	// 			}
	// 			else
	// 			{
	// 			    i=temp;
	// 			}
	
	// 		}
			
	// 	}
		
	// 	i++;
	// }
    // main_str[i]='\0';
	// for(i=0;i<main_str.length();)
	// {
	// 	cout<<main_str[i];
	// }
	return 0;
}