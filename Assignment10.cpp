/*
Assignment 10: Write a Python program to store first year percentage of students in array. Write
function for sorting array of floating point numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores.

Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include<iostream>
using namespace std;

class student
{
    private:
    float array[100];
    int n;

    public:
    void input_marks();
    void sel_sort();
    void bubble_sort();
    void display();
    void display_top5();
};

void student::input_marks()
{
    cout<<"Enter no. of students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter a marks of "<<i+1<<"th student:";
        cin>>array[i];
    }
}

void student::sel_sort()
{
    int i,j;
    float temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

void student::bubble_sort()
{
    int i,j;
    float temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void student::display()
{
    cout<<"Sorted marks of student is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;
    }
}

void student::display_top5()
{
    cout<<"Top 5 student marks are:"<<endl;
    for(int i=n-1;i>=n-5;i--)
    {
        cout<<array[i]<<endl;
    }
}
int main()
{
    student obj;
    while(1)
    {
        int ch;
        cout<<"****************MENU********************"<<endl;
        cout<<"1 Enter a marks of first year student"<<endl;
        cout<<"2 Sort using selection sort"<<endl;
        cout<<"3 Sort using bubble sort"<<endl;
        cout<<"4 Display sorted marks"<<endl;
        cout<<"5 print marks of top 5 student"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                obj.input_marks();
                break;
            case 2:
                obj.sel_sort();
                break;
            case 3:
                obj.bubble_sort();
                break;
            case 4:
                obj.display();
                break;
            case 5:
                obj.display_top5();
                break;
            default:
                cout<<"Please enter correct choice"<<endl;

        }
    }

    return 0;
}