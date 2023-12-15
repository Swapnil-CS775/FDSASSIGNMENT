/*
Assignment 7:Write C++ program for simulating circular queue.
Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include<iostream>
using namespace std;

class queue
{
	private:
	int q[5],r,f,x;
	
	public:
	queue()
	{
		r=-1;
		f=-1;
	}
	int isfull();
	int isempty();
	void display();
	void enqueue();
	void dequeue();
};

int queue::isfull()
{
	if((f==0 && r==4)||(f==r+1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int queue::isempty()
{
	if(r==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void queue::enqueue()
{
	cout<<"Enter a element:";
	cin>>x;
	if(f==-1)
	{
		f=0;
	}
	
	r=(r+1)%5;
	q[r]=x;
	
}

void queue::display()
{
	int i;
	for(i=f;i!=r;i=(i+1)%5)
	{
		cout<<q[i]<<endl;
	}
	cout<<q[i]<<endl;
}

void queue::dequeue()
{
	cout<<"deleted element is:"<<q[f]<<endl;
	
	if(f==r)
	{
		f=-1;
		r=-1;
	}	
	else
	{
		f=(f+1)%5;
	}
}


int main()
{
	queue obj;
	
	while(1)
	{
		int ch;
		cout<<"1 enqueue"<<endl;
		cout<<"2 display"<<endl;
		cout<<"3 dequeue"<<endl;
		
		cout<<"Enter your choice:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			if(obj.isfull())
			{
				cout<<"Queue is full unable to enqueue!!"<<endl;
			}
			else
			{
				obj.enqueue();
			}
				break;	
			case 2:
			if(obj.isempty())
			{
				cout<<"queue is empty unable to display!!"<<endl;
			}
			else
			{
				obj.display();
			}
			
				break;
			case 3:
			if(obj.isempty())
			{
				cout<<"queue is empty unable to dequeue!!"<<endl;
			}
			else
			{
				obj.dequeue();
			}
				break;
			default:
			cout<<"Enter correct choice!!!!"<<endl;
			
		}
	
	}
	return 0;
}
























