#include<iostream.h>
#include<conio.h>
using namespace std;
void main()
{
   int a[20],n,key,choice;
   clrscr();
   cout<<"\n enter the size of the array :";
   cin>>n;
   cout<<"\n enter the elements into the array :\n";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   
   cout<<"\n elements before sorting :\n";
    for(int i=0;i<n;i++)
   {
       cout<<a[i]<<"\t";
   }
  
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   cout<<"\n elements before sorting :\n";
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<"\t";
   }
   
   int left=0,right=n-1;
   
   cout<<"\n enter the value to be searched :";
   cin>>key;
   
   int mid=0;
   
   while(left<=right)
   {
        mid=left+(right-left)/2;
       if(a[mid]==key)
       {
           cout<<"\n\n element found at index  "<<mid;
           exit(1);
       }
       else if(a[mid]<key)
       {
           left=mid+1;
           
        }
        else 
        {
            right=mid-1;
        }
        
         
       
   }
   cout<<"\n element not found";
   
   getch();
}
