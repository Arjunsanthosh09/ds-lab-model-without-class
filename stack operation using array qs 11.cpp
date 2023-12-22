#include<iostream.h>
#include<conio.h>
#include<process.h>
class Stack 
{
    public:
    int a[20],top,n,num;
    void push();
    void pop();
    void display();
    
};

void Stack::push()
{
    if(top==-n-1)
    {
        cout<<"\n stack overflow... cannot perform push operation";
        
    }
    else
    {
        top++;
        cout<<"\n enter the element to be inserted : ";
        cin>>a[top];
        cout<<"\n\n push operation sucessfull";
        
        
    }
}
void Stack::pop()
{
    if(top==-1)
    {
        cout<<"\n\n stack underflow...cannot perform push operation\n";
    }
    else
    {
        int temp;
        temp=a[top];
        cout<<"\n element deleted is "<<a[top];
        top--;
    }
}
void Stack::display()
{
    cout<<"\n elements in the stack are :\n";
    for(int i=0;i<=top;i++)
    {
        cout<<a[i]<<"\t";
    }
}
void main()
{
    Stack obj;
    obj.top=-1;
    int choice;
    clrscr();
    cout<<"\n enter the size of the array : ";
    cin>>obj.n;
  
    do{
          cout<<"\n\npress any \n\n 1.push \n 2.pop \n 3.display \n 4.exit";
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
            exit;
            break;
            default:
            cout<<"\n invalid option \n\n";
            break;
            
        }
        
  }while(choice!=4);      
    getch();    
}
