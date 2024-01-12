#include<iostream.h>
#include<conio.h>
#include<process.h>

class node
{
public:
    int data;
    node* next;
};

class linkedlist 
{
    node* head;

public:
    linkedlist()
    {
        head = NULL; 
    }

    void insert(int item);
    void interchange(int n1,int n2);
    void display();
   
};

void linkedlist::insert(int item)
{
    node* newnode = new node;
    newnode->data = item;
    if (head == NULL)
    {
        newnode->next = NULL;
        head = newnode;
        return;
    }
    else 
    {
        node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
}

void linkedlist::interchange(int n1, int n2)
{
    node *temp1 = head;
    node *temp2 = head;

    while (temp1->next != NULL && temp1->data != n1)
    {
        temp1 = temp1->next;
    }

    while (temp2->next != NULL && temp2->data != n2)
    {
        temp2 = temp2->next; // Corrected line: changed temp1 to temp2
    }

    if (temp1->next == NULL && temp1->data != n1 || temp2->next == NULL && temp2->data != n2)
    {
        cout << "\n nodes are not found ....";
        return;
    }
    else
    {
        temp1->data = n2;
        temp2->data = n1;
    }
}


void linkedlist::display() 
{
    if (head == NULL)
    {
        cout << "\nList is empty ......";
        return;
    }
    else
    {
        node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
    }
}

void main()
{
    linkedlist obj;
    int num,choice,node1,node2;
    clrscr();
    do
    {
        cout<<"\n1.insert\n2.interchange two node\n3.display\n4.exit\n";
        cout<<"\n enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\n enter your data : ";
                cin>>num;
                obj.insert(num);
                break;
            case 2:
                cout<<"\n enter the node 1 to interchange : ";
                cin>>node1;
                cout<<"\n enter the node 2 to interchange : ";
                cin>>node2;
                obj.interchange(node1,node2);
                cout<<"\n node after interchange is \n";
                obj.display(); // Corrected line: display the list after interchange
                break;
            case 3:
                obj.display();
                break;
            case 4:
                 obj.display();
                 break;
        }
    } while (choice!=4);

    getch();
}

