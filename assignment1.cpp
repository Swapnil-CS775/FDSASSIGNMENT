#include <iostream>
using namespace std;

int main()
{
while(1)
{
	int n;
	cout<<"Enter a number of student:";
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
		{
		cout<<"Enter a marks of student "<<i+1<<":";
		cin>>a[i];
		}
	
	for(int i=0;i<n;i++)
		{
		cout<<"Marks of student "<<i+1<<" is:"<<a[i]<<endl;
		
		}
	
	int ab;
	ab=0;
	for(int i=0;i<n;i++)
	{
	if(a[i]==-1)
		{
		ab=ab+1;
		}
	}
	cout<<"Number of absent atudent is:"<<ab<<endl;
	
	
	int avg;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
		sum=sum+a[i];
		}
	}
	cout<<"Average is:"<<sum/n<<endl;
	
	int min,max;
	min=100;
	max=-1;
	
	for(int i=0;i<n;i++)
		{
			if(a[i]!=-1 && a[i]<min)
			{
				min=a[i];
			}	
		}
	cout<<"Minimum marks is:"<<min<<endl;
	
	for(int i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}	
		}
	cout<<"Maximum marks is:"<<max<<endl;	
	
	cout<<endl;
	cout<<endl;
	
}	

}




