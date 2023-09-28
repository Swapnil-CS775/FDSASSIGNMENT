// ADDITION ,SUBSTRAACTION AND MULTIPLICATION OF MATRIX

#include<iostream>
using namespace std;

class matrix
{
  int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],ar,ac,br,bc;
  public:
  void input();
  void add();
  void sub();
  void mult();
  
};
// INPUT FUNCTION 
 void matrix::input()
 {	int i,j;
 	cout<<"Enter a size of matrix 1:";
 	cin>>ar>>ac;
 	cout<<"Enter element in matrix 1:";
 	for(i=0;i<ar;i++)
 	{
 		for(j=0;j<ac;j++)
 		{
 			cin>>a[i][j];
 		}
 	}
 	// print input
 	cout<<"Matrix 1 is:"<<endl;
 	for(i=0;i<ar;i++)
 	{
 		for(j=0;j<ac;j++)
 		{
 			cout<<a[i][j]<<" ";
 		}
 	cout<<endl;
 	}
 	
 	// INPUT OF MATRIX 2
 	
 	cout<<"Enter a size of matrix 2:";
 	cin>>br>>bc;
 	cout<<"Enter element in matrix 2:";
 	for(i=0;i<br;i++)
 	{
 		for(j=0;j<bc;j++)
 		{
 			cin>>b[i][j];
 		}
 	}
 	// print input
 	cout<<"Matrix 2 is:"<<endl;
 	for(i=0;i<br;i++)
 	{
 		for(j=0;j<bc;j++)
 		{
 			cout<<b[i][j]<<" ";
 		}
 	cout<<endl;
 	}
 }
 // ADDITION FUNCTION
  void matrix:: add()
  {
  	int i,j;
  	if(ar==br && ac==bc)
  	{

  		for(i=0;i<ar;i++)
  		{
  			for(j=0;j<ac;j++)
  			{
  				c[i][j]=a[i][j]+b[i][j];
  			}
		}
		cout<<"Addition is:"<<endl;
		for(i=0;i<ar;i++)
  		{
  			for(j=0;j<ac;j++)
  			{
  				cout<<c[i][j]<<" ";
  			}
  		cout<<endl;
		}

  	
  	}

  	else
  	{
  		cout<<"Enter valid rows and columns of matrix!!"<<endl;
  	}
  }
  
  // substraction function
  
  void matrix::sub()
  {
  	int i,j;
  	if(ar==br && ac==bc)
  	{

  		for(i=0;i<ar;i++)
  		{
  			for(j=0;j<ac;j++)
  			{
  				d[i][j]=a[i][j]-b[i][j];
  			}
		}
		cout<<"Substraction is:"<<endl;
		for(i=0;i<ar;i++)
  		{
  			for(j=0;j<ac;j++)
  			{
  				cout<<d[i][j]<<" ";
  			}
  		cout<<endl;
		}

  	
  	}

  	else
  	{
  		cout<<"Enter valid rows and columns of matrix!!"<<endl;
  	}
  
  }

  // MULTIPLICATION FUNCTION
  
   void matrix::mult()
   {
   	int i,j,k;
	e[i][j]=0;
  	if(ac==br)
  	{

  		for(i=0;i<ar;i++)
  		{
  			for(j=0;j<bc;j++)
  			{
				e[i][j]=0;
  				for(k=0;k<ac;k++)
  				{
  					e[i][j]=e[i][j]+a[i][k]*b[k][j];
  				}
  			}
		}
		cout<<"Multiplication is:"<<endl;
		for(i=0;i<ar;i++)
  		{
  			for(j=0;j<ac;j++)
  			{
  				cout<<e[i][j]<<" ";
  			}
  		cout<<endl;
		}

  	
  	}

  	else
  	{
  		cout<<"Enter valid rows and columns of matrix!!"<<endl;
  	}
  
   
   
   
   }
int main()
{ 
 matrix obj;
 int n;
 while(1)
 {
 cout<<"Enter 1 for addition!!"<<endl;
 cout<<"Enter 2 for substraction!!"<<endl;
 cout<<"Enter 3 for multiplication!!"<<endl;
 
 cout<<"Enter your choice:";
 cin>>n;
 
 
 
 
 
	switch (n)
	{

		case 1:
			obj.input();
			obj.add();
			cout<<endl;
			break;
		case 2:
			obj.input();
			obj.sub();
			cout<<endl;
			break;
		case 3:
			obj.input();
			obj.mult();
			cout<<endl;
			break;
	}

}

return 0;
}
