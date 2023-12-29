#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
    public:
    int data;
    node *next;
    node *prev;
};
class doublylist
{
    node *head;
    public:
    doublylist()
    {
        head=NULL;
    }
    void insertbeg(int item);
    void insertend(int item);
    void insertintermediate(int key,int item);
    void delbeg();
    void delend();
    void display();
    void delintermediate(int key);
};

//**********************************************************INSERTION AT BEGINNING********************************************************

void doublylist::insertbeg(int item)
{
    node *newnode=new node;
    newnode->data=item;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
        return;
    }
    else
    {
        node *temp=head;
        newnode->next=head;
        newnode->prev=NULL;
        temp->prev=newnode;
        head=newnode;
        
    }
}

//************************************************************INSERTION AT END********************************************************

void doublylist::insertend(int item)
{
    node *newnode=new node;
    newnode->data=item;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
        return;
    }
    else
    {
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            
        }
        temp->next=newnode;
        newnode->next=NULL;
        newnode->prev=temp;
        
    }
}

//************************************************************************INSERTION AT INTERMEDIATE**************************************

void doublylist::insertintermediate(int key, int item)
{
    node *newnode = new node;
    newnode->data = item;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = NULL;
        newnode->prev = NULL;
        return;
    }
    else
    {
        node *temp1 = head;
        while (temp1 != NULL && temp1->data != key)
        {
            temp1 = temp1->next;
        }

        if (temp1 == NULL)
        {
            cout << "\n Key is not found....";
            return;
        }
        newnode->next = temp1->next;
        if (temp1->next != NULL)
        {
            temp1->next->prev = newnode;
        }
        newnode->prev = temp1;
        temp1->next = newnode;
    }
}

//************************************************************************DELETION AT BEGINNING******************************************

void doublylist::delbeg()
{
    if(head==NULL)
    {
        cout<<"\n list is empty.........";
        return;
    }
    else
    {
        node *temp=head;
        if(temp->next==NULL)
        {
            cout<<"\n deleted node is "<<temp->data;
            head=NULL;
            delete(temp);
            return;
        }
        else
        {
            head=temp->next;
            head->prev=NULL;
            cout<<"\n deleted node is "<<temp->data;
            delete(temp);
        }
    }
}

//************************************************************************DELETION AT END*************************************************

void doublylist::delend()
{
    if(head==NULL)
    {
        cout<<"\n list is empty.........";
        return;
    }
    else
    {
        node *temp=head;
        if(temp->next==NULL)
        {
            cout<<"\n deleted node is "<<temp->data;
            head=NULL;
            delete(temp);
            return;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->prev->next=NULL;
            cout<<"\n deleted node is "<<temp->data;
            delete(temp);
        }
    }
}

//************************************************************************DELETION AT INTERMEDIATE***************************************

void doublylist::delintermediate(int key)
{
    if (head == NULL)
    {
        cout << "\n List is empty...";
        return;
    }
    else
    {
        node *temp = head;
        while (temp != NULL && temp->data != key)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "\n Given node not found in the list! Deletion not possible!!!";
            return;
        }
        if (temp == head)
        {
            if (temp->next == NULL)
            {
                cout << "\n Deleted node is " << temp->data;
                delete temp;
                head = NULL;
            }
            else
            {
                head = temp->next;
                head->prev = NULL;
                cout << "\n Deleted node is " << temp->data;
                delete temp;
            }
        }
        else
        {
            if (temp->next == NULL)
            {
                temp->prev->next = NULL;
                cout << "\n Deleted node is " << temp->data;
                delete temp;
            }
            else
            {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                cout << "\n Deleted node is " << temp->data;
                delete temp;
            }
        }
    }
}


//************************************************************************DISPLAY********************************************************

void doublylist::display()
{
    if(head==NULL)
    {
        cout<<"\n list is empty ....";
        return;
    }
    else
    {
        node* temp=head;
       while(temp!=NULL)
       {
           cout<<temp->data<<"\t";
           temp=temp->next;
       }
    }
}
void main()
{
    doublylist obj;
    int choice,num,key;
    clrscr();
    do
    {
        cout<<"\n1.insertion at beginning\n2.insertion at end\n3.insertion at intermediate\n4.deletion at beginning\n5.deletion at end \n6.deletion at intermediate\n7.display\n8.exit\n";
        cout<<"\n enter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
               cout<<"\n enter the data :";
               cin>>num;
               obj.insertbeg(num);
               break;
            case 2:
               cout<<"\n enter the data :";
               cin>>num;
               obj.insertend(num);
               break;
            case 3:
               cout<<"\n enter the key :";
               cin>>key;
               cout<<"\n enter the data :";
               cin>>num;
               obj.insertintermediate(key,num);
               break;
            case 4:
               obj.delbeg();
               break;
            case 5:
               obj.delend();
               break;
            case 6:
               cout<<"\n enter the key :";
               cin>>key;
               obj.delintermediate(key);
               break;
            case 7:
               obj.display();
               break;
            case 8:
               exit(0);
               break;
            
        }
    }while(choice!=8);
    getch();
}


