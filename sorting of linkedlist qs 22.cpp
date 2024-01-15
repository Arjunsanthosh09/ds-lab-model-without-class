#include<iostream>
#include<conio.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *head;
    node()
    {
        head=NULL;
    }
    void insert(int item);
    void display();
    void ascending(int n);
    void  decending(int n);
};

void node::insert(int item)
{
    node *newnode=new node;
    newnode->data=item;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        
    }
    temp->next=newnode;
    newnode->next=NULL;
    
}

void node::ascending(int n)
{
    node *temp;
    node *dummy;
    int item;
    if(head==NULL)
    {
        cout<<"\n list is empty..";
        return;
    }
    if(head->next==NULL)
    {
        cout<<"\n only one node cannot perfrom sorting...";
        return;
    }
    for(int i=0;i<n;i++)
    {
        temp=head;
        while(temp->next!=NULL)
        {
            dummy=temp;
            temp=temp->next;
            if(temp->data < dummy->data)
            {
                item=temp->data;
                temp->data=dummy->data;
                dummy->data=item;
                
            }
        }
    }
}

void node::decending(int n)
{
    node *temp;
    node *dummy;
    int item;
    if(head==NULL)
    {
        cout<<"\n list is empty..";
        return;
    }
    if(head->next==NULL)
    {
        cout<<"\n only one node cannot perfrom sorting...";
        return;
    }
    for(int i=0;i<n;i++)
    {
        temp=head;
        while(temp->next!=NULL)
        {
            dummy=temp;
            temp=temp->next;
            if(temp->data > dummy->data)
            {
                item=temp->data;
                temp->data=dummy->data;
                dummy->data=item;
                
            }
        }
    }
}
void node::display()
{
    node *temp=head;
    if(head==NULL)
    {
        cout<<"\n lsit is empty..";
        return;
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t\t";
            temp=temp->next;
        }
    }
    
}
int main()
{
    node obj;
    int num,choice,count=0;
    do 
    {
        cout<<"\n1.insert\n2.ascending\n3.descending\n4.display\n5.exit";
        cout<<"\n enter your chocie:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\n enter your data :";
            cin>>num;
            obj.insert(num);
            if(choice==1)
            {
                count++;
            }
            break;
            case 2:
            obj.ascending(count);
            cout<<"\n list after sorted in ascending order : \n";
            obj.display();
            break;
            case 3:
            obj.decending(count);
            cout<<"\n list after sorted in decending order : \n";
            obj.display();
            break;
            
            case 4:
            cout<<"\n elements in the list are :";
            obj.display();
            break;
            case 5:
            exit(0);
            break;
            
        }
    }while(choice!=5);
   
}





