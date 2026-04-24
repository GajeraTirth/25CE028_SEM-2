#include <iostream>
#include "inventory.h"
using namespace std;

int main()
{
    Inventory inv("inventory.txt");

    int choice;

    do
    {
        cout << "\n1. Add Item\n";
        cout << "2. View All Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                inv.addItem();
                break;
            case 2:
                inv.viewItems();
                break;
            case 3:
                inv.searchItem();
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}
