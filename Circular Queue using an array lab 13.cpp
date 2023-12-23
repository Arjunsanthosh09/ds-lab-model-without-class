#include<iostream.h>
#include<conio.h>
#include<process.h>

void main()
{
    int choice, a[20], n, rear, front, num;
    clrscr();
    rear = -1;
    front = -1;

    cout << "\n Enter the size of the array:";
    cin >> n;

    do {
        cout << "\n Enter one of these \n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n";
        cout << "\n Enter your choice:";
        cin >> choice;
        switch (choice)
        {
            case 1:
                if ((rear + 1) % n == front)
                {
                    cout << "\n queue is full..cannot perform insertion operation ";
                }
                else
                {
                    cout << "\n enter the elements into the queue :";
                    cin >> num;

                    if (front == -1)
                    {
                        front = 0;
                    }
                    rear = (rear + 1) % n;
                    a[rear] = num;
                }
                break;
            case 2:
                if (front == -1)
                {
                    cout << "\n queue is empty...cannot perform deletion operation ";
                }
                else
                {
                    num = a[front];
                    if (front == rear) 
                    {
                        front = rear = -1;
                    } 
                    else 
                    {
                        front = (front + 1) % n;
                    }

                    cout << "\n deleted element is " << num;
                }
                break;
            case 3:
                if (front == -1)
                {
                    cout << "\n queue is empty ";
                } 
                else
                {
                    cout << "\n elements in the queue are:\n";
                    int i = front;
                    do 
                    {
                        cout << a[i] << "\t";
                        i = (i + 1) % n;
                    } while (i != (rear + 1) % n);
                }
                break;
            case 4:
                exit(0);
            default:
                cout << "\n invalid option ";
        }

    } while (choice != 4);

   getch();
}
