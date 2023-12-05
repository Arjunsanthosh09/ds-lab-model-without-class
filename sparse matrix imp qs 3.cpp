#include<iostream.h>
#include<conio.h>
void main()
{
    int k=1;
     int a[10][10];
    int c[10][3];
    
    int row, col;
    clrscr();
    cout << "\nEnter the number of rows and columns in the  matrix: ";
     cin >> row >> col;

        cout << "\n enter the elements into the matrix : \n";

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (a[i][j] != 0)
                {
                    c[k][0] = i;
                    c[k][1] = j;
                    c[k][2] = a[i][j];
                    k++;
                }
            }
        }
        c[0][0] = row;
        c[0][1] = col;
        c[0][2] = k;

  

    cout << "\n\nSparse matrix of the  matrix is: \n";
    
   for (int i = 1; i < k; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << c[i][j] << "\t";
            }

            cout << "\n\n";
        }

  
getch();

   
}