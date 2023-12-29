#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
    public:
    int data;
    node *next;
    node *front;
    node *rear;
    node()
    {
        rear=front=NULL;
    }
    void enqueue();
    void dequeue();
    void display();
    
};
void node::enqueue()
{
    node *newnode=new node;
    cout<<"\n enter the data :";
    cin>>newnode->data;
    newnode->next=NULL;
    
    
    if(rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    cout<<"\n enqueue sucessfull ";
}
void node::dequeue()
{
    if (front == NULL)
    {
        cout << "\nQueue underflow, cannot perform deletion operation.";
        return;
    }

    node *temp = front;
    cout << "\nDeleted item is " << temp->data;
    front = front->next;
    delete(temp);

    if (front == NULL)
    {
        rear = NULL;
    }
}

void node::display()
{
    if (front == NULL)
    {
        cout << "\n******** queue is empty********** ";
    }
    else
    {
        cout << "\n elements in the queue are :\n";

        node *temp = front; 

        while (temp != NULL)
        {
            cout << temp->data << "\t\t";
            temp = temp->next;
        }
    }
}


void main()
{
    node obj;
    int choice;
    clrscr();
    do
    {
        cout<<"\n1.enqueue\n2.dequeue\n3.display\n4.exit";
        cout<<"\n enter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                obj.enqueue();
                break;
            case 2:
                obj.dequeue();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"\n invalid option ";
                break;
                
        }
    }while(choice!=4);
    getch();
}
