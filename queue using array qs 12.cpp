#include<iostream.h>
#include<conio.h>
#include<process.h>

class Queue 
{
public:
    int a[20], n, rear, front, num;
    void enqueue();
    void dequeue();
    void display();
};

void Queue::enqueue()
{
    if (rear == n - 1)
    {
        cout << "\n Queue is full cannot perform insertion operation";
    }
    else
    {
        cout << "\n\n enter the element to be inserted :";
        cin >> num;

        if (front == -1 && rear == -1)
        {
            front = 0;
        }
        rear++;
        a[rear] = num;
        cout << "\n Enqueue successful";
    }
}

void Queue::dequeue()
{
    if (front == -1)
    {
        cout << "\n Queue is empty cannot perform deletion operation";
    }
    else
    {
        cout << "Element deleted is  " << a[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void Queue::display()
{
    if (front == -1)
    {
        cout << "\n Queue is empty";
    }
    else
    {
        cout << "\n Elements in the queue are :\n";
        for (int i = front; i <= rear; i++)
        {
            cout << a[i] << "\t";
        }
    }
}
void main()
{
    int choice;
    Queue obj;
    obj.rear = -1;
    obj.front = -1;
    clrscr();
    cout << "\n Enter the size of the array:";
    cin >> obj.n;

    do
    {
        cout << "\n Enter one of these \n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n";
        cout << "\n Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj.enqueue();
            break;

        case 2:
            obj.dequeue();
            break;

        case 3:
            obj.display();
            break;

        case 4:
            exit(0);
            break;

        default:
            cout << "\n Invalid choice ";
            break;
        }
    } while (choice != 4);

  getch();
}

