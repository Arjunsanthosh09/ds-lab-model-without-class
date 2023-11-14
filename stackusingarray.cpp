#include<iostream.h>
#include<conio.h>
#include<process.h>


void main()
{
    int a[20],n,top=-1,num,choice,item;
    clrscr();
    cout<<"\n enter the size of the array :";
    cin>>n;
    
    
   
    
    do{
        
        cout<<"\n\nenter for operation ";
        cout<<"\n***************\n";
        cout<<"\n\n1.push";
        cout<<"\n2.pop";
        cout<<"\n3.display";
        cout<<"\n4.exit";
        
         cout<<"\n enter your choice : ";
          cin>>choice;
    
        
        switch(choice)
        {
            //pop operation
            case 1:
            cout<<"\n enter the element in to the array : ";
            cin>>num;
            
            if(top==n-1)
            {
                cout<<"\n stack overflow \n";
            }
            else
            {
                top++;
                a[top]=num;
            }
            break;
            //push operation
            
            case 2:
            if(top==-1)
            {
                cout<<"\n stack is empty ";
            }
            else
            {
                item=a[top];
                top--;
                cout<<"\n deleted element from the stack is  "<<item;
            }
            break;
           // display
            case 3:
            if(top==-1)
            {
                cout<<"\n stack is empty";
                
            }
            else
            {
                cout<<"\n elements in the stack are :\n";
                for(int i=top;i>=0;i--)
                {
                    cout<<a[i]<<"\t";
                }
            }
            break;
            
            //exit
            
            case 4:
            exit(1);
            break;
            
            
             cout<<"\n enter your choice : ";
          cin>>choice;
        }
    }while(choice!=0);
    getch();
}