#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
    public:
    int data;
    node *next;
};
class linkedlist
{
    node *head;
    public:
    linkedlist()
    {
        head=NULL;
    };
    void insert(int item);
    void display();
    void ascending();
    void descending();
};
void linkedlist::insert(int item)
{
    if(head==NULL)
    {
        node *newnode=new node;
        newnode->data=item;
        newnode->next=NULL;
        head=newnode;
        return;
    }
    else
    {
        node *temp=head;
        node *newnode=new node;
        newnode->data=item;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode->next=NULL;
        temp->next=newnode;
        
    }
}

void linkedlist::display()
{
    if(head==NULL)
    {
        cout<<"\n list is empty ......";
        return;
    }
    else
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
}

void linkedlist::ascending()
{
    if (head == NULL || head->next == NULL)
    {
        cout << "\n list is empty...";
        return;
    }

    bool swapped;
    node *current;
    node *nextNode = NULL;

    do
    {
        swapped = false;
        current = head;

        while (current->next != nextNode)
        {
            if (current->data > current->next->data)
            {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
        nextNode = current;

    } while (swapped);
}

void linkedlist::descending()
{
    if (head == NULL || head->next == NULL)
    {
        cout << "\n list is empty...";
        return;
    }

    bool swapped;
    node *current;
    node *nextNode = NULL;

    do
    {
        swapped = false;
        current = head;

        while (current->next != nextNode)
        {
            if (current->data < current->next->data)
            {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
        nextNode = current;

    } while (swapped);
}

void main()
{
    linkedlist obj;
    int num,choice;
    clrscr();
    do
    {
        cout<<"\n1.Linked list insertion \n2.list in ascending order\n3.list in descending order\n4.display\n5.exit\n\n";
        cout<<"\n enter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                 cout<<"\n enter the data :";
                 cin>>num;
                 obj.insert(num);
                 break;
            case 2:
                obj.ascending();
                cout<<"\n LIST IN ASCENDING ORDER IS :\n";
                obj.display();
                break;
            case 3:
                obj.descending();
                cout<<"\n LIST IN DESCENDING ORDER IS :\n";
                obj.display();
                break;
            case 4:
                 obj.display();
                 break;
            case 5:
                 exit(0);
                 break;
            default:
                 cout<<"\n invalid option";
                 break;
        }
    }while(choice!=5);
    getch();
}
