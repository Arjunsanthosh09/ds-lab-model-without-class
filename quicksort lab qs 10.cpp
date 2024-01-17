#include<iostream.h>
#include<conio.h>
#include<process.h>
void quicksort(int a[20], int start, int end)
{
    if (start < end)
    {
	int pivotindex =( start+end)/2;
	int pivot=a[pivotindex];
	int i = start;
	int j = end ;

	while (i <= j)
	{
	    while (a[i] <pivot)
	    {
		i++;
	    }
	    while (a[j] > pivot)
	    {
		j--;
	    }

	    if (i <= j)
	    {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	    }
	}



	quicksort(a, start, j);
	quicksort(a, i, end);
    }
}
void main()
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
    for (i = 0; i <n; i++)
    {
	cout << a[i] << "\t";
    }

 getch();
}
