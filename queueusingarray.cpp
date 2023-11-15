#include<iostream.h>
#include<conio.h>

void main()

{
    int a[20],n,rear=-1,front=-1,choice;
    clrscr();
    
    cout<<"\n enter the size of the array :";
    cin>>n;
   
    
    do
    {
         cout<<"\n\n\n 1. enqueue";
    cout<<"\n 2. dequeue";
    cout<<"\n 3. display";
    cout<<"\n 4. exit";
    
    cout<<"\n enter your choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        int num;
        cout<<"\n\n enter the elements into the queue : ";
        cin>>num;
        
        
        if(rear==n-1)
        {
           cout<<"\n stack underflow\n"; 
        }
        else if(rear==-1&& front ==-1)
        {
            front=rear=0;
            a[rear]=num;
        }
        else
        {
            rear++;
            a[rear]=num;
        }
        break;
        
        case 2:
        
        if(rear==-1 && front==-1)
        {
            cout<<"\n stack is empty ";
            
        }
        else if(rear==front)
        {
            rear=front=-1;
            
        }
        else
        {
            front++;
        }
        break;
        
        //display
        
        case 3:
        if(rear==-1 & front==-1)
        {
            cout<<"\n stack is empty ";
        }
        else
        {
        cout<<"\n elements in the stack are :\n";
        
        for(int i=front;i<rear+1;i++)
        {
           cout<<a[i]<<"\t"; 
        }
        cout<<"\n\n";
        }
        break;
        //exit
        
        case 4:
        exit(1);
        break;
        
        cout<<"\n enter your choice : ";
      cin>>choice;
    }//switch close
    
    
    }while(choice!=0);
    getch();
}



