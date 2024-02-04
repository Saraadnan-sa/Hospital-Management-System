#include "Item.hh"
#include<string>
#include<iostream>
using namespace std;
void Item::setName(string n) {
    name = n;
}

void Item::setQuantity(int q) {
    quantity = q;
}

string Item::getName() const {
    return name;
}

int Item::getQuantity() const {
    return quantity;
}

void Item::addQuantity(int q) {
    quantity += q;
}

void Item::removeQuantity(int q) {
    quantity -= q;
    if (quantity < 0) {
        quantity = 0;
    }
}
