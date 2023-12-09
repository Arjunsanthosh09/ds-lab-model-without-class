#include<iostream.h>
#include<conio.h>
#include<process.h>

void quicksort(int a[20], int start, int end)
{
    if (start < end)
    {
        int pivot = start;
        int i = start;
        int j = end - 1;

        while (i < j)
        {
            while (a[i] <= a[pivot])
            {
                i++;
            }
            while (a[j] > a[pivot])
            {
                j--;
            }

            if (i < j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        int temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        quicksort(a, start, j);
        quicksort(a, j + 1, end);
    }
}

int main()
{
    int i, a[20], n;
clrscr();
    cout << "\n Enter the size of the array: ";
    cin >> n;

    cout << "\n Enter the elements into the array:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "\n Elements before quicksort:\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    quicksort(a, 0, n - 1);

    cout << "\n\n Elements after quicksort:\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

 getch();
}
