#include<iostream.h>
#include<conio.h>
#include<process.h>

class node
{
    public:
    int data;
    node* next;
}; 

class list
{
    private:
    node *head;

    public:
    list()
    {
        head = NULL;
    }

    void insertbeg(int item);
    void display();
    void insertend(int item);
    void intermediate(int key,int item);
    void deletebeg();
    void deleteend();
    void deleteintermediate(int key);
};

//*******************************INSERTION AT BEGINNING **************************************
void list::insertbeg(int item)
{
    node* newnode = new node();
    if (head == NULL)
    {
        head = newnode;
        newnode->data = item;
        newnode->next = NULL;
    }
    else
    {
        newnode->data = item;
        newnode->next = head;
        head = newnode;
    }
}

//*******************************INSERTION AT END **************************************
void list::insertend(int item)
{
    node * temp=new node();
     node * newnode=new node();
     if(head==NULL)
     {
         newnode->data=item;
         newnode->next=NULL;
         head=newnode;
     }
     else
     {
         temp=head;
         
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         newnode->next=NULL;
         newnode->data=item;
         temp->next=newnode;
     }
}

//******************************INSERTION AT INTERMEDIATE*************************************

void list::intermediate(int key, int item)
{
    node *temp = head;

    if (head == NULL)
    {
        node *newnode = new node();
        newnode->data = item;
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        while (temp!=NULL&&temp->data!=key)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "\nKey not found. Insertion operation cannot be performed.\n";
            return;
        }

        node *newnode = new node();
        newnode->next = temp->next;
        newnode->data = item;
        temp->next = newnode;
    }
}

//******************************DELETION AT BEGINNING*************************************

void list::deletebeg()
{
    node *temp = new node();
    if (head == NULL)
    {
        cout << "\n List is empty \n";
        return;
    }
    else
    {
        temp = head;
        if (temp->next == NULL)
        {
            head = NULL;
        }
        else
        {
            head = temp->next;
        }
        cout << "\n deleted node data is " << temp->data;
        delete(temp);
    }
}

//******************************DELETION AT END*************************************
void list::deleteend()
{
    if (head == NULL)
    {
        cout << "\n List is empty \n";
        return;
    }

    node *temp1 = head;
    node *temp2 = NULL;

    while (temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    if (temp2 == NULL)
    {
        
        head = NULL;
    }
    else
    {
        temp2->next = NULL;
    }

    cout << "\n Deleted node is " << temp1->data;
    delete (temp1);
}



//******************************DELETION AT INTERMEDIATE*************************************

void list::deleteintermediate(int key)
{
    if (head == NULL)
    {
        cout << "\n List is empty \n";
        return;
    }

    node *temp1 = head;
    node *temp2 = NULL;

    while (temp1 != NULL && temp1->data != key)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    if (temp1 == NULL)
    {
        cout << "\nKey not found. Deletion operation cannot be performed.\n";
        return;
    }

    if (temp2 == NULL)
    {
        head = temp1->next;
    }
    else
    {
        temp2->next = temp1->next;
    }

    cout << "\n Deleted node is " << temp1->data;
    delete (temp1);
}


//*******************************DISPLAY *********************************************

void list::display()
{
    if (head == NULL)
    {
        cout << "\n List is empty; cannot display.";
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
    list obj;
    int num, choice,key;
    clrscr();
    
   do
{
    cout << "\n1.Insertion at  beginning\n2. Insertion at end of the list\n3. Insertion at intermediate\n4.Deletion at beginning\n5>Deletion at end\n6.Deletion at intermediate\n7. display\n8. exit\n";
    cout << "\n Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "\n Enter the number to be inserted: ";
        cin >> num;
        obj.insertbeg(num);
        break;
    case 2:
        cout<<"\n enter the number to be inserted :";
        cin>>num;
        obj.insertend(num);
        break;
    case 3:
        cout<<"\n enter the key to be inserted : ";
        cin>>key;
        cout<<"\n enter the element to be inserted : ";
        cin>>num;
        obj.intermediate(key,num);
        break;
    case 4:
        obj.deletebeg();
        break;
    case 5:
        obj.deleteend();
        break;
    case 6:
        cout<<"\n enter the node to be deleted :";
        cin>>num;
        obj.deleteintermediate(num);
        break;
    case 7:
        obj.display();
        break;
    case 8:
        exit(0);
        break;
    default:
        cout<<"\n invalide choice :";
    }
   
} while (choice != 8);

getch();
   
}
