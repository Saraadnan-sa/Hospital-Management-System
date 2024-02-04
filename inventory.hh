#ifndef INVENTORY_HH
#define INVENTORY_HH

#include <string>
#include <fstream>
#include "Item.hh"
using namespace std;
class Inventory {
private:
    string filename;

public:
    Inventory(string fname);
    void addItem(Item item);
    void removeItem(string name);
    void displayInventory();
};

#endif // INVENTORY_H
