#include<iostream.h>
#include<conio.h>
#include<process.h>


void main() 
{
    int a[10], i, n, key;
    clrscr();
    cout << "\n enter the limit of the array : ";
    cin >> n;

  
    cout << "\n enter the elements into the array: \n";
    
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "\n elements in the array are : \n";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    
    cout << "\n enter the element to be searched : ";
    cin >> key;
    
    for (i = 0; i < n; i++) {
        if (key == a[i]) {
            cout << "\n element is found at index " << i;
            return;
        }
    }
   
    cout << "\n element is not found in the array ";
    
   getch();
}

