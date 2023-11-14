#include<iostream>
#include<conio.h>

void main()
{
    int a[10],n;
    clrscr();
    cout<<"\n enter the size of the array :" ;
    cin>>n;
    cout<<"\n enter the elemets in to the array :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     cout<<"\n before sorting :\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    //sorting
    
    int min_index;
    
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            min_index=j;
            
        }
        
        if(min_index!=i)
        {
            int temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
            
        }
    }
    
    //for displaying
    
    cout<<"\n after sorting :\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    
    getch();
}