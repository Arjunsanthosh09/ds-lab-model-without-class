#include<iostream.h>
#include<conio.h>
#include<conio.h>
class node
{
    public:
    int data;
    node *next;
    node *top;
    node()
    {
        top=NULL;
    }
    void push();
    void pop();
    void display();
};
void node::push()
{
    node *newnode=new node;
    cout<<"\n enter the data :";
    cin>>newnode->data;
    newnode->next=top;
    top=newnode;
}
void node::pop()
{
    if(top==NULL)
    {
        cout<<"\n stack is empty ";
        return;
    }
    else
    {
        cout<<"\n deleted element is "<<top->data;
        node* temp=top;
        top=top->next;
        delete(temp);
    }
}

void node::display()
{
    if(top==NULL)
    {
        cout<<"\n stack is empty\n";
        return;
    }
    cout << "The elements int the stack are : ";
    node* temp = top;
    while (temp != NULL) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<"\t";
}

void main()
{
    node obj;
    int choice;
    clrscr();
    do{
        cout<<"\n1.push\n2.pop\n3.display\n4.exit\n\n";
        cout<<"\n enter your choice :";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
                obj.push();
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"\n invalid choice .....";
                break;
                
        }
    }while(choice !=4);
    getch();
}
