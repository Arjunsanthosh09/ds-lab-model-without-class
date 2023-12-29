#include<iostream>
#include<conio.h>
#include<process.h>

class node
{
    public:
    int data;
    node *next;
    
};
class cirlist
{
    node* head;
    public:
     cirlist()
    {
        head=NULL;
    }
    void insertbeg(int item);
    void display();
    void insertend(int item);
    void intermediate(int key,int item);
    void deltebeg();
    void deleteend();
    void delintermediate(int key);
};

//****************************************INSERTION AT BEGINNING****************************************************

void cirlist::insertbeg(int item)
{
    node* newnode = new node;
    newnode->data = item;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        node* temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
        head = newnode;
    }
}

//****************************************INSERTION AT END***************************************************************

void cirlist::insertend(int item)
{
    node* newnode = new node;
    newnode->data = item;
    newnode->next = head;

    if (head == NULL    )
    {
        head = newnode; 
    }
    else
    {
        node* temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

//******************************************INSERTION AT INTERMEDIATE*****************************************************

void cirlist::intermediate(int key,int item)
{
    node*temp=head;
    node *newnode=new node;
    newnode->data=item;
    if(head==NULL)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        while(temp->next!=head && temp->data!=key)
        {
            temp=temp->next;
        }
        if(temp->next==head)
        {
            cout<<"\n key is not found on the list cannot perform insertion \n";
        }
        
        newnode->next=temp->next;
        temp->next=newnode;
        
    }
}

//******************************************DELETION AT BEGINNING*********************************************************

void cirlist::deltebeg()
{
    if (head == NULL)
    {
        cout << "\n list is empty";
        return;
    }
    else
    {
        node *temp1 = head;
        node *temp2 = head;
        if (temp1->next == head)
        {
            head = NULL;
        }
        else
        {
            
            while (temp1->next != head)
            {
                temp1 =temp1->next;
            }

            head = temp2->next;
            temp1->next = head; 
        }
        cout << "\n deleted node data is " << temp2->data;
        delete (temp2);
    }
}

//******************************************DELETION AT END***************************************************************

void cirlist::deleteend()
{
    node* temp1=head;
    node *temp2=new node;
    if(head==NULL)
    {
        cout<<"\n list is empty";
        return;
    }
    else
    {
        if(temp1->next==head)
        {
            head=NULL;
            return;
            
        }
        else
        {
            while(temp1->next!=head)
            {
                temp2=temp1;
                temp1=temp1->next;
            }
        }
        cout<<"\n deleted data is "<<temp1->data;
        temp2->next=head;
        delete(temp1);
    }
}

//******************************************DELETION AT INTERMEDIATE******************************************************

void cirlist::delintermediate(int key)
{
    node *temp1 = head;
    node *temp2 = new node;

    if (head == NULL)
    {
        cout << "\n list is empty";
        return;
    }
    else
    {
        if (temp1->next == head)
        {
            if (temp1->data == key)
            {
                head = NULL;
                delete temp1;
            }
            else
            {
                cout << "\n Key not found in the list.";
            }
            return;
        }
        else
        {
            while (temp1->next != head)
            {
                temp2 = temp1;
                temp1 = temp1->next;

                if (temp1->data == key)
                {
                    temp2->next = temp1->next; 
                    
                    cout << "\n Node with key " << key << " deleted.";
                    delete (temp1);
                    return;
                }
            }
            if (temp1->data == key)
            {
                temp2->next = head;
                delete temp1;
                cout << "\n Node with key " << key << " deleted.";
                return;
            }
        }
    }
}


//******************************************DISPLAY***********************************************************************

void cirlist::display()
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
    cirlist obj;
    int choice,num,key;
    clrscr();
    do
    {
        cout<<"\n1.insertion at beginning\n2.insertion at end\n3.insertion at intermediate\n4.deletion at beginning\n5.deletion at end\ndeletion at intermediate\n7.display\n8.exit\n";
        cout<<"\n enter your choice :" ;
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
                obj.intermediate(key,num);
                break;
            case 4:
                obj.deltebeg();
                break;
            case 5:
                obj.deleteend();
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
                                          
 

