#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main() 
{
    int choice;
    int a[20],n,inspos;
        cout << "\n enter the size of the array :";
        cin >> n;
        cout << "\n enter the elements in the array \n";
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
    
    
    do {
        cout << "\n 1.insertion \n 2.deletion \n 3.traversing \n 4.exit\n\n";
        cout<<"\n enter your choice :";
        cin >> choice;

        switch (choice) 
        {

//insertion

            case 1:
            cout << "\n enter the position of the item to be inserted : ";
            cin >> inspos;
            if (inspos < 0 || inspos > n) 
            {
               cout << "\n index is not found, we cannot insert an item \n";
               return 0;
            }
            cout << "\n enter the item to be inserted : ";
            int item;
            cin >> item;

             for (int i = n; i > inspos; i--) 
              {
                 a[i] = a[i - 1];
              }
            a[inspos] = item;
             n++;

             cout << "\n insertion has successfully done \n";
            break;
            
//deletioin

            case 2:
                cout << "\n enter the position of the element to be deleted : ";
                int delpos;
                cin >> delpos;
                if (delpos<0 || delpos>=n) 
                {
                    cout << "\n index is not found, we cannot delete an item \n";
                    return 0;
                }

                for (int i = delpos; i < n - 1; i++) 
                {
                   a[i] = a[i + 1];
                }

                 n--;
                cout << "\n Element at position " <<delpos<<" deleted successfully \n";
                break;

//traversing

            case 3:
                cout << "\n successfully traversed \n";
                cout << "\n elements in the array are : \n";
                for (int i = 0; i < n; i++)
                {
                     cout << a[i] << "\t";
                }
                break;

            case 4:
                exit(0); 
                break;

            default:
                cout << "\n Invalid choice! Please enter a valid option.\n";
        }
    
    } while (choice != 4);

}
