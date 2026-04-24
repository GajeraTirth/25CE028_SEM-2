#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
using namespace std;

class Inventory
{
private:
    string filename;

public:
    Inventory(string fname);
    void addItem();
    void viewItems();
    void searchItem();
};

#endif
