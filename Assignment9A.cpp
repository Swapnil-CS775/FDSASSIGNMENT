/*
Assignment 9:  a) Write a Python program to store roll numbers of student in array who attended
training program in random order. Write function for searching whether particular
student attended training program or not, using Linear search and Sentinel search.

Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include<iostream>
using namespace std;

class myclass
{
    private:
    int array[100],n;
    int key;
    
    public:
    void input_roll();
    void sentinal_serch();
    void linear_search();
};

void myclass::input_roll()
{
    cout<<"Number of student:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter roll number of student "<<i+1<<"th randomaly who attain the program:";
        cin>>array[i];
    }
}

void myclass::linear_search()
{
    
    cout<<"Enter a roll number of student you want to search:";
    cin>>key;

    int i,count=0;

    for(i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            count++;
            cout<<key<<" roll number attain program"<<endl;
            break;
        }
    }
    if(count==0)
    {
        cout<<key<<" roll number not attain the programm"<<endl;
    }
}

void myclass::sentinal_serch()
{
     cout<<"Enter a roll number of student you want to search:";
    cin>>key;
    int last=array[n-1];
    array[n-1]=key;
    int i=0;
    while(array[i]!=key)
    {
        i++;
    }
    array[n-1]=last;
    if(i<n-1 ||array[n-1]==key)
    {
        cout<<key<<" roll no. attain the program !!"<<endl;
    }
    else
    {
        cout<<key<<" roll number not attain the programm"<<endl;
    }

}

int main()
{
    myclass obj;
    
    while(1)
    {
        int ch;
        cout<<"*********MENU************"<<endl;
        cout<<"1 Enter roll number of student who attain the program"<<endl;
        cout<<"2 Search student"<<endl;
        cout<<"3 Sentinal  search"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                obj.input_roll();
                break;
            case 2:
                obj.linear_search();
                break;
            case 3:
                obj.sentinal_serch();
                break;
            default:
                cout<<"Please enter valid choice"<<endl;
        }
    }
}