#include<iostream>
using namespace std;

class myclass
{
    private:
    int array[100],n,T,max=-1,min=100,i;

    public:
    void get_marks();
    void get_absent();
    void get_average();
    void get_min_max();
    void frequency();
};

void myclass::get_marks()
{
    cout<<"Enetr number of student:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter marks of "<<i+1<<"th student:";
        cin>>array[i];
    }
}

void myclass::get_absent()
{
    int i,absent=0;
    for(i=0;i<n;i++)
    {
        if(array[i]==-1)
        {
            absent++;
        }
    }

    cout<<"Number of absent student are:"<<absent<<endl;
}

void myclass::get_average()
{
    float average,sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(array[i]!=-1)
        {
            sum=sum+array[i];
        }
    }
    average=sum/n;
    cout<<"Avarage marks of all student is:"<<average<<" %"<<endl;
}

void myclass::get_min_max()
{
    int i;
    for(i=0;i<n;i++)
    {
        if(array[i]!=-1 && array[i]<min)
        {
            min=array[i];
        }
    }
    cout<<"Minimum marks is:"<<min<<endl;
    for(i=0;i<n;i++)
    {
        if(array[i]!=-1 && array[i]>max)
        {
            max=array[i];
            T=i;
        }
    }
    cout<<"maximum marks is:"<<max<<endl;
}

void myclass::frequency()
{
    int freq[max+1]={NULL};
    for(int i=0;i<n;i++)
    {
        freq[array[i]]++;
    }
    int g=0;
    for(int i=0;i<max+1;i++)
    {
        if(freq[i]>g)
        {
            g=freq[i];
        }
        
    }
    
    for(int i=0;i<max+1;i++)
    {
        if(g==freq[i])
        {
            cout<<"Maximum Accuring Marks is:"<<i<<endl;
            break;
        }
    }

}

int main()
{
    myclass obj;

    while(1)
    {
        int ch;
        cout<<"************MENU************"<<endl;
        cout<<"1 Enter a marks of student(for absent enter -1)"<<endl;
        cout<<"2 display number of absent student:"<<endl;
        cout<<"3 display average"<<endl;
        cout<<"4 display minimum and maximum marks of student"<<endl;
        cout<<"5 Display frequently accuring marks"<<endl;
        cout<<"Enetr your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                obj.get_marks();
                break;
            case 2:
                obj.get_absent();
                break;
            case 3:
                obj.get_average();
                break;
            case 4:
                obj.get_min_max();
                break;
            case 5:
                obj.frequency();
                break;
            default:
                cout<<"Please enter correct choice!!"<<endl;
        }
    }
    return 0;
}


/*
int count=0;
    int mostf=array[0];
    for(int i=0;i<n;i++)
    {
        int ce=array[i];
        int cf=1;
        for(int j=i+1;j<n;j++)
        {
            if(array[j]==ce)
            {
                cf++;
            }
        }

        if(cf>count)
        {
            count=cf;
            mostf=ce;
        }
    }
    cout<<"Most frequent mark is:"<<mostf<<endl;
*/