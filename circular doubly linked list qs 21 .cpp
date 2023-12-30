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
class cirdoubly
{
    node *head;
    public:
    cirdoubly()
    {
        head=NULL;
    }
    void insertbeg(int item);
    void insertend(int item);
    void insertintermediate(int key,int item);
    void display();
    void delbeg();
    void delend();
    void delintermediate(int key);
};

//**********************************************************************INSERTION AT BEGINNING***************************************************

void cirdoubly::insertbeg(int item)
{
    node *newnode = new node;
    newnode->data = item;
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
    }
    else
    {
        newnode->next = head;
        newnode->prev = head->prev;
        head->prev->next = newnode;
        head->prev = newnode;
        head = newnode;
    }
}

//************************************************************************INSERTION AT END***********************************************************

void cirdoubly::insertend(int item)
{
    node *newnode = new node;
    newnode->data = item;
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next->prev = newnode; 
        temp->next = newnode;
        newnode->prev = temp;
    }
}

//************************************************************************INSERTION AT INTERMEDIATE*************************************************
void cirdoubly::insertintermediate(int key, int item)
{
    node *newnode = new node;
    newnode->data = item;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
    }
    else
    {
        node *temp= head;
        while(temp->next!=head && temp->data!=key)
        {
            temp=temp->next;
        }
        if(temp->next == head && temp->data != key)
        {
            cout<<"\n key not found..cannot insert";
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;

    }
}

//************************************************************************DELETION AT BEGINNING******************************************************

void cirdoubly::delbeg()
{
    if (head == NULL)
    {
        cout << "\n List is empty.";
        return;
    }
    else if (head->next == head)
    {
        cout<<"\n deleted node is "<<head->data;
        head = NULL;
        return;
    }
    else
    {
        node *temp1 = head;
        node *temp2 = head->prev;
        head = head->next;
        head->prev = temp2;
        temp2->next = head;
        cout<<"\n deleted node is "<<temp1->data;
        delete(temp1);
    }
}

//************************************************************************DELETION AT END***********************************************************

void cirdoubly::delend()
{
    if (head == NULL)
    {
        cout << "\n List is empty.";
        return;
    }
    else if (head->next == head)
    {
        cout<<"\n deleted node is "<<head->data;
        head = NULL;
        return;
    }
    else
    {
        node *temp1 = head->prev;
        node *temp2 = temp1->prev; 
        temp2->next = head;
        head->prev = temp2;
        cout<<"\ndeleted node is "<<temp1->data;
        delete(temp1);
    }
}

//************************************************************************DELETION AT INTERMEDIATE***************************************************

void cirdoubly::delintermediate(int key)
{
    if (head == NULL)
    {
        cout << "\n List is empty.";
        return;
    }
    else if (head->next == head)
    {
        if (head->data == key)
        {
            cout<<"\n deleted node is "<<head->data;
            head = NULL;
            return;
        }
        else
        {
            cout << "\n Key not found. Cannot delete.";
        }
    }
    else
    {
        node *temp = head;

        do
        {
            if (temp->data == key)
            {
                if (temp == head)
                {
                    head = temp->next;
                }
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                cout<<"\n deleted node is "<<temp->data;
                delete(temp);
                return;
            }

            temp = temp->next;
        } while (temp != head);
        cout << "\n Key not found....";
    }
}

//************************************************************************DISPLAY********************************************************************

void cirdoubly::display()
{
    if (head == NULL)
    {
        cout << "\nList is empty ....";
        return;
    }
    else
    {
        node* temp = head;
        do
        {
            cout << temp->data << "\t";
            temp = temp->next;
        } while (temp != head);
    }
}

void main()
{
    cirdoubly obj;
    int num,choice,key;
    clrscr();
    do
    {
        cout<<"\n1.insertion at beginning\n2.insertion at end\n3.insertion at intermediate\n4.deletion at beginning\n5.deletion at end\n6.deletion at intermediate\n7.display\n8.exit\n";
        cout<<"\n enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                 cout<<"\nenter your data : ";
                 cin>>num;
                 obj.insertbeg(num);
                 break;
            case 2:
                 cout<<"\n enter the data :";
                 cin>>num;
                 obj.insertend(num);
                 break;
            case 3:
                 cout<<"\nenter the  key :";
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


