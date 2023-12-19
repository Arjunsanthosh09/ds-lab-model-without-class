#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10], n,i;
    clrscr();
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements into the array:" << endl;
    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "before insertion  sort :";
    for ( i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    
    for (i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }

       
        a[j + 1] = key;
    }

    cout << "\nafter insertion sort :";
    for ( i = 0; i < n; i++)
    {
        cout <<a[i]<<"\t\t";
    }

   getch();
}