#include<iostream.h>
#include<conio.h>
#include<process.h>


class SparseMatrix 
{
public:
    int a[10][10];
    int c[10][3];
    int k;
    int row, col;

    void insertMatrix();
    void sparseMatrixImp();
    void display();
    void addMatrices(SparseMatrix obj1, SparseMatrix obj2);
};

void SparseMatrix::insertMatrix() {
    cin >> row >> col;

    cout << "\nEnter the elements into the matrix:\n";

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }
}

void SparseMatrix::sparseMatrixImp() {
    k = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] != 0) {
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
}

void SparseMatrix::display() {
    cout <<c[0][0] <<"\t";
    cout << c[0][1]<<"\t";
    cout<<c[0][2]<<"\t"<<"\n";

    for (int i = 1; i <= c[0][2]; i++) {
        cout << c[i][0] << "\t" << c[i][1] << "\t" << c[i][2] << "\n";
    }
}



void SparseMatrix::addMatrices(SparseMatrix obj1, SparseMatrix obj2) {
    if (obj1.row != obj2.row || obj1.col != obj2.col) {
        cout << "Matrices cannot be added. Dimensions are not compatible.";
        return;
    }

    k = 1;
    for (int i = 0; i < obj1.row; i++) {
        for (int j = 0; j < obj1.col; j++) {
            a[i][j] = obj1.a[i][j] + obj2.a[i][j];
            if (a[i][j] != 0) {
                c[k][0] = i;
                c[k][1] = j;
                c[k][2] = a[i][j];
                k++;
            }
        }
    }
    c[0][0] = obj1.row;
    c[0][1] = obj1.col;
    c[0][2] = k - 1;
}
void main() {
    SparseMatrix obj1, obj2, result;
clrscr();
    cout << "\nEnter the number of rows and columns in the first matrix: ";
    obj1.insertMatrix();
    obj1.sparseMatrixImp();

    cout << "\nSparse matrix of the first matrix is: \n";
    obj1.display();

    cout << "\nEnter the number of rows and columns in the second matrix: ";
    obj2.insertMatrix();
    obj2.sparseMatrixImp();

    cout << "\nSparse matrix of the second matrix is: \n";
    obj2.display();

    result.addMatrices(obj1, obj2);

    cout << "\n\nSparse matrix after addition is: \n";
    result.display();

    getch();
}
