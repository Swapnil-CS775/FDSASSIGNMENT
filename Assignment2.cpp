/*
Assignment 2:  Implementation of following matrix operations : addition of two matrices, subtraction of two  matrices, multiplication & to find a saddle point of a matrix

Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include<iostream>
using namespace std;

class myclass
{
    private:
    int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],ar,ac,br,bc,s[10][10],sr,sc,big[10],small[10],maximum,minimum;

    public:
    void get_matrix();
    void addition();
    void substraction();
    void multiplication();
    void saddle_point();
};

void myclass::get_matrix()
{
    cout<<"Enter a number of rows and column in first matrix:";
    cin>>ar>>ac;
    cout<<"Enter first matrix:";
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix 1 is:"<<endl;
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Enter a number of rows and column in second matrix:";
    cin>>br>>bc;
    cout<<"Enter second matrix:";
    for(int i=0;i<br;i++)
    {
        for(int j=0;j<bc;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix 2 is:"<<endl;
    for(int i=0;i<br;i++)
    {
        for(int j=0;j<bc;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}

void myclass::addition()
{
    if(ar==br && ac==bc)
    {
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<endl;
    cout<<"Addition of matrix is:"<<endl;
    for(int i=0;i<br;i++)
    {
        for(int j=0;j<bc;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    {
                cout<<"Matrix is not in propper format of rows and column!!"<<endl;
    }
}

void myclass::substraction()
{
    if(ar==br && ac==bc)
    {
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<endl;
    cout<<"Substraction of matrix is:"<<endl;
    for(int i=0;i<br;i++)
    {
        for(int j=0;j<bc;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    {
        cout<<"Matrix is not in propper format of rows and column!!"<<endl;
    }
    
}

void myclass::multiplication()
{
    int i,j,k;
    if(ac==br && ar==bc)
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

        cout<<"Multiplication of matrix is:"<<endl;
        for(int i=0;i<ar;i++)
        {
        for(int j=0;j<ac;j++)
        {
            cout<<e[i][j]<<" ";
        }
        cout<<endl;
        }
    }
    else
    {
        cout<<"Matrix is not in propper format of rows and column!!"<<endl;
    }
}

void myclass::saddle_point()
{
    int i,j;
    cout<<"Enter number of rows and column in your matrix:";
    cin>>sr>>sc;
    cout<<"Enter your matrix:";
    {
        for( i=0;i<sr;i++)
        {
            for(j=0;j<sc;j++)
            {
                cin>>s[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Matrix is:"<<endl;
    {
        for(int i=0;i<sr;i++)
        {
            for(int j=0;j<sc;j++)
            {
                cout<<s[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    for(i=0;i<sr;i++)
    {
        big[i]=s[i][1];
        for(j=0;j<sc;j++)
        {
            if(s[i][j]>big[i])
            {
                big[i]=s[i][j];
            }
        }
    }

    minimum=big[0];
    for(i=0;i<sr;i++)
    {
        if(big[i]<minimum)
        {
            minimum=big[i];
        }
    }

     for(i=0;i<sc;i++)
    {
        small[i]=s[i][1];
        for(j=0;j<sc;j++)
        {
            if(s[i][j]>small[i])
            {
                small[i]=s[i][j];
            }
        }
    }

    maximum=small[0];
    for(i=0;i<sr;i++)
    {
        if(small[i]<maximum)
        {
            maximum=small[i];
        }
    }
    if(maximum==minimum)
    {
        cout<<"Saddle point is:"<<minimum<<endl;
    }
    else
    {
        cout<<"Saddle point is absent"<<endl;
    }
}
int main()
{
    myclass obj;

    while(1)
    {
        int ch;

        cout<<"***************MENU*******************"<<endl;
        cout<<"1 Enter two matrix"<<endl;
        cout<<"2 Addition"<<endl;
        cout<<"3 Substraction"<<endl;
        cout<<"4 Multiplication"<<endl;
        cout<<"5 Find saddle point"<<endl;


        cout<<"Enter your choice:";
        cin>>ch;

        switch (ch)
        {
        case 1:
            obj.get_matrix();
            break;
        case 2:
            obj.addition();
            break;
        case 3:
            obj.substraction();
            break;
        case 4:
            obj.multiplication();
            break;
        case 5:
            obj.saddle_point();
            break;

        default:
            cout<<"Pleaase enetr valid choice!!"<<endl;
            break;
        }
    }
    return 0;
}