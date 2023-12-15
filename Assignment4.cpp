/*
Write C++ program using stack to check whether given expression is well parenthesized or not.
Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/

#include<iostream>
using namespace std;

int main()
{
	char ex[30];
	
	
	cout<<"Enetr your expression:";
	cin>>ex;
	
	int top=-1;
	int i=0;
	while(ex[i]!='\0')
	{
		if(ex[i]=='(' || ex[i]=='[' || ex[i]=='{')
		{
			
			top++;
		}
		else if(ex[i]==')' || ex[i]==']' || ex[i]=='}')
		{
			top--;
		}
	i++;
	}
	
	if(top==-1)
	{
	cout<<"Expression is valid!!"<<endl;
	}
	
	else
	{
		cout<<"Expression is invalid!!"<<endl;
	}
	return 0;
}








