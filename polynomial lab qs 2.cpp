#include <iostream>
using namespace std;
int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10]; 

    int m, n;

    cout << "Enter the number of terms for the first polynomial (m): ";
    cin >> m;
   
    for (int i = 0; i < m; i++) {
        cout << "Enter the coefficients and exponents for the first polynomial" <<i+1<<" : " ;
        cin >> a[i][0] >> a[i][1];
    }

    cout << "Enter the number of terms for the second polynomial (n): ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter the coefficients and exponents for the second polynomial "<<i+1<<" : " ;
        cin >> b[i][0] >> b[i][1];
    }

        int i = 0, j = 0, k = 0; 

    while (i < m && j < n) 
    {
        if (a[i][1] == b[j][1])
        {
            c[k][0] = a[i][0] + b[j][0];
            c[k][1] = a[i][1];
            i++;
            j++;
            k++;
        } 
        else if (a[i][1] > b[j][1])
        {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            i++;
            k++;
        }
        else
        {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            j++;
            k++;
        }
    }

    
    while (i < m)
    {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        i++;
        k++;
    }

    
    while (j < n)
    {
        c[k][0] = b[j][0];
        c[k][1] = b[j][1];
        j++;
        k++;
    }
cout << "Resultant polynomial after addition:" << endl;
for (int i = 0; i < m + n; i++) {
    if (c[i][0] != 0) {
        cout << c[i][0] << "x^" << c[i][1] << " ";
        if (i < m + n - 1 && c[i + 1][0] > 0) {
            cout << "+ ";
        }
    }
}


    return 0;
}
