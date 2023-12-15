/*
Assignment 11: Write a Python program to store first year percentage of students in array. Write
function for sorting array of floating point numbers in ascending order using quick sort
and display top five scores.

Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include<iostream>
using namespace std;

class myclass
{
    public:
    void quicksort(float a[],int L,int H);
    int partition(float a[],int L,int H);
};

int myclass::partition(float a[],int L,int H)
{
    int i,j;
    float key,temp;
    j=H;
    i=L+1;
    key=a[L];

    while(i<=j)
    {
        while(a[i]<=key)
        {
            i++;
        }
        while(a[j]>key)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    //key=a[L];
    a[L]=a[j];
    a[j]=key;
    return j;
}

void myclass::quicksort(float a[],int L,int H)
{
    int j;
    if(L<H)
    {
        j=partition(a,L,H);
        quicksort(a,L,j-1);
        quicksort(a,j+1,H);
    }

}

int main()
{
    myclass obj;
    while(1)
    {
        float a[100];
        int n;
        int ch;
    cout<<"*****************MENU*******************"<<endl;
    cout<<"1 Add marks of student"<<endl;
    cout<<"2 display sorted marks of student"<<endl;
    cout<<"3 display top 5 marks of student"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;

    switch(ch)
    {
        case 1:
            cout<<"How many students mark you want to add:";
            cin>>n;
            for(int i=0;i<n;i++)
            {
            cout<<"Enter a marks of "<<i+1<<"th student:";
            cin>>a[i];
            }
            break;
        case 2:
            obj.quicksort(a,0,n-1);
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<endl;
            }
            break;
        case 3:
            for(int i=n-1;i>=n-5;i--)
            {
                cout<<a[i]<<endl;
            }
            break;
        default:
            cout<<"Please enter your choice!!!"<<endl;

    }
    }
return 0;
}