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
        head = NULL; // Use the assignment operator
    }

    void insert(int item);
    void display();
    void concatenate(linkedlist& list2);
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

void linkedlist::concatenate(linkedlist& list2) 
{
    if (head == NULL) 
    {
        head = list2.head;
    }
    else
    {
        node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = list2.head;
    }
    list2.head = NULL;
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

    linkedlist obj1, obj2, concatenatedList;
    int num, choice;
    clrscr();
    do 
    {
        cout << "\n1. Insert in list 1 \n2. Insert in list 2\n3. List 1 display\n4. List 2 display\n5. Concatenate lists\n6. Display concatenated list\n7. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n ****List 1*******";
            cout << "\nEnter the data: ";
            cin >> num;
            obj1.insert(num);
            break;
        case 2:
            cout << "\n ****List 2*******";
            cout << "\nEnter the data: ";
            cin >> num;
            obj2.insert(num);
            break;
        case 3:
            cout << "\nElements in List 1 are :\n";
            obj1.display();
            break;
        case 4:
            cout << "\nElements in List 2 are :\n";
            obj2.display();
            break;
        case 5:
            obj1.concatenate(obj2);
            cout << "\nLists concatenated.\n";
            break;
        case 6:
            cout << "\nConcatenated list:\n";
            obj1.display();
            break;
        case 7:
            exit(0);
            break;
        }
    } while (choice != 7);

getch();
}


