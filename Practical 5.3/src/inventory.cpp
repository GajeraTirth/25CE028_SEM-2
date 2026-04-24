#include <iostream>
#include <fstream>
#include "inventory.h"
using namespace std;

Inventory::Inventory(string fname)
{
    filename = fname;
}

void Inventory::addItem()
{
    ofstream file(filename, ios::app);

    if (!file)
    {
        cout << "Error opening file\n";
        return;
    }

    string name;
    int quantity;
    float price;

    cout << "Enter item name: ";
    cin >> name;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price: ";
    cin >> price;

    file << name << " " << quantity << " " << price << endl;

    file.close();

    cout << "Item added successfully\n";
}

void Inventory::viewItems()
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error opening file\n";
        return;
    }

    string name;
    int quantity;
    float price;

    cout << "\nInventory List:\n";

    while (file >> name >> quantity >> price)
    {
        cout << "Name: " << name << " | Quantity: " << quantity << " | Price: " << price << endl;
    }

    file.close();
}

void Inventory::searchItem()
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error opening file\n";
        return;
    }

    string searchName;
    cout << "Enter item name to search: ";
    cin >> searchName;

    string name;
    int quantity;
    float price;
    bool found = false;

    while (file >> name >> quantity >> price)
    {
        if (name == searchName)
        {
            cout << "\nItem Found:\n";
            cout << "Name: " << name << " | Quantity: " << quantity << " | Price: " << price << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Item not found\n";
    }

    file.close();
}
