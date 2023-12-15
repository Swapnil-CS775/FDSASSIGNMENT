/*
Assignment 9(b):  b) Write a Python program to store roll numbers of student array who attended training
program in sorted order. Write function for searching whether particular student
attended training program or not, using Binary search and Fibonacci search

Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include<iostream>
using namespace std;;

class myclass
{
    private:
    int array[100],n;
    
    public:
    void input_roll();
    void binary_search();
    void fibonachii_search();
};

void myclass::input_roll()
{
    cout<<"Number of student:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter roll number of student "<<i+1<<"th who attain the program:";
        cin>>array[i];
    }
}

void myclass::binary_search()
{
    int key,L=0,H=n-1,mid;
    cout<<"Enter a roll number you want to search:";
    cin>>key;

    while(L<=H)
    {
        mid=(L+H)/2;
        if(key==array[mid])
        {
            cout<<key<<" roll number is attain the program"<<endl;
            break;
        }
        else if(key<array[mid])
        {
            H=mid-1;
        }
        else
        {
            L=mid+1;
        }

    if(L>H)
    {
        cout<<key<<" roll number not attain the program"<<endl;
    }
    }
    
}

void myclass::fibonachii_search()
{

}

int main()
{
    myclass obj;
    
    while(1)
    {
        int ch;
        cout<<"*********MENU************"<<endl;
        cout<<"1 Enter roll number of student who attain the program"<<endl;
        cout<<"2 Search student(BINARY SEARCH)"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                obj.input_roll();
                break;
            case 2:
                obj.binary_search();
                break;
            case 3:
                obj.fibonachii_search();
                break;
            default:
                cout<<"Please enter valid choice"<<endl;
        }
    }
return 0;
}