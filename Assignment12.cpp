/*
Assignment 12: Write C++ program to operation on linked list
Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next,*head;   //here node is the return type of pointer

    node()
    {
        head=NULL;   
    }
    void createhead();
    void insert_end();
    void insert_front();
    void insrt_middle();
    void display();
    void delete_front();
    void delete_end();
    void delete_mid();
    void reverse();


};

void node::createhead()
{
    node *ne;
    ne=new node;
    cout<<"Enter a data for head node:";
    cin>>ne->data;
    ne->next = NULL;
    if(head==NULL)
    {
        head=ne;
    }
    else
    {
        cout<<"Head is already created."<<endl;
    }
}

void node::insert_end()
{
    node *ne,*temp;
    ne=new node;
    cout<<"Enter data to insert at end:";
    cin>>ne->data;
    ne->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ne;
}

void node::insert_front()
{
    node *ne;
    ne=new node;
    cout<<"Enter a data to insert from front:";
    cin>>ne->data;
    ne->next=head;
    head=ne;
}

void node::insrt_middle()
{
    node *ne,*temp;
    int x;
    ne=new node;
    cout<<"Enetr a data you want to insert at middle:";
    cin>>ne->data;
    cout<<"enter a data you want to add after:";
    cin>>x;
    temp=head;
    while(temp->data!=x)
    {
        temp=temp->next;
    }
    ne->next=temp->next;
    temp->next=ne;
}

void node::display()
{
    node *temp;
    if(head==NULL)
    {
        cout<<"List is empty!!"<<endl;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        //cout<<temp->data<<endl;
    }
}

void node::delete_front()
{
    node *temp;
    temp=head;
    head=temp->next;
    free(temp);
}

void node::delete_end()
{
    node *temp,*prev;
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}

void node::delete_mid()
{
    node *temp,*prev;
    int x;
    cout<<"Enter a element you want to delete:";
    cin>>x;
    temp=head;
    while(temp->data!=x)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
}

void node::reverse()
{
    node *temp;
    int s[10],top=-1;
    temp=head;
    while(temp!=NULL)
    {
        top++;
        s[top]=temp->data;
        temp=temp->next;
    }
    while(top!=-1)
    {
        cout<<s[top]<<endl;
        top--;
    }
}
int main()
{
    node obj;

    while(1)
    {
        int ch;
        cout<<"1 Create head"<<endl;
        cout<<"2 Insert at the end"<<endl;
        cout<<"3 Insert from front"<<endl;
        cout<<"4 Insert at middle"<<endl;
        cout<<"5 Display element in list"<<endl;
        cout<<"6 Delete list from front "<<endl;
        cout<<"7 Delete list from end"<<endl;
        cout<<"8 Delete element from middle"<<endl;
        cout<<"9 Reverse linked list"<<endl;

        cout<<"Enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                obj.createhead();
                break;
            case 2:
                obj.insert_end();
                break;
            case 3:
                obj.insert_front();
                break;
            case 4:
                obj.insrt_middle();
                break;
            case 5:
                obj.display();
                break;
            case 6:
                obj.delete_front();
                break;
            case 7:
                obj.delete_end();
                break;
            case 8:
                obj.delete_mid();
                break;
            case 9:
                obj.reverse();
                break;
            default:
            cout<<"Please enter correct choice!!!"<<endl;
        }

    }

return 0;
}




