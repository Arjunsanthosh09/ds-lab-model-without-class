#include <iostream.h>
#include <conio.h>
using namespace std;


void main ()
{
  int a[10][10];
  int c[10][3];
  int k;
  int row, col;
  k = 1;
  clrscr();
  //insertion of sparse matrix 
  
  cout << "\nEnter the number of rows and columns in the matrix: ";
  cin >> row >> col;

  cout << "\nEnter the elements into the matrix:\n";
  for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
	{
	  cin >> a[i][j];
	}
    }
    
    //sparse matrix imp
    
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
  c[0][2] = k - 1;
  
  //displaying of sparse matrix 
  
  cout << "\nSparse matrix of the matrix is: \n";
  for (int i = 1; i <= c[0][2]; i++)
    {
      cout << c[i][0] << "\t" << c[i][1] << "\t" << c[i][2] << "\n";
    }
    
    //transpose
    
  cout << "\n transpose of the matrix is :\n";

for (int i = 0; i < c[0][2]; i++)
    {
      cout << "\n";
      for (int j = 1; j <= c[0][2]; j++)
	{
	  cout << c[j][i] << "\t";
	}
    }
getch();

}
