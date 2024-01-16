#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <string.h>

voi main()
{
    char postfix[20];
    char c;
    clrscr();
    int stack[20], i, top = 0;

    cout << "\nEnter the postfix operation: ";
    cin >> postfix;

    for (i = 0; postfix[i]!='\0'; i++)
    {
         

        switch (postfix[i])
        {
        case '+':
            stack[top - 1] = stack[top - 1] + stack[top];
            top--;
            break;
        case '-':
            stack[top - 1] = stack[top - 1] - stack[top];
            top--;
            break;
        case '/':
            stack[top - 1] = stack[top - 1] / stack[top];
            top--;
            break;
        case '^':
            stack[top - 1] = pow(stack[top - 1], stack[top]);
            top--;
            break;
        case '*':
            stack[top - 1] = stack[top - 1] * stack[top];
            top--;
            break;
        default:
            top++;
            stack[top] = postfix[i] - 48; 
        }
    }

    cout << "\nResult is: " << stack[top];

    getch(); 
   
}

