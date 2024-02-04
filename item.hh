#ifndef ITEM_HH
#define ITEM_HH
#include<iostream>
#include <string>
using namespace std;
class Item {
private:
    string name;
    int quantity;

public:
    void setName(string n);
    void setQuantity(int q);
    string getName() const;
    int getQuantity() const;
    void addQuantity(int q);
    void removeQuantity(int q);
};

#endif // ITEM_H
