using namespace std;
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

#include "global.hh"
#include "address.hh"

address::address()
{
    add1 = "";
    add2 = "";
    city = "";
    country = "";
}
void address::takeInput()
{
    cout << "\nEnter address:\n";
    cout << "\nCurrent Address :\n";
    getline(cin >> ws, add1);
    cout << "\n Permanent Address 2 (optional):\n";
    getline(cin, add2);
    cout << "\nCity:\n";
    getline(cin >> ws, city);
    cout << "\nCountry:\n";
    getline(cin >> ws, country);
    return;
}
void address::print()
{
    cout << "Current address 1: " << add1 << "\n";
    if (add2 != "")
        cout << "                  "
             << "Permanent Address: " << add2 << "\n";
    cout << "                  ";
    cout << "City: " << city << "\n";
    cout << "                  ";
    cout << "Country: " << country << "\n";
    return;
}
string address::addToStr()
{
    stringstream s;
    s << add1 << "`" << add2 << "`" << city << "`" << country;
    string add;
    getline(s, add);
    for (auto &i : add)
        if (i == ',')
            i = '^';
    return add;
}
void address::strToAdd(string str)
{
    stringstream s(str);
    
    getline(s, add1, '`');
    for (auto &i : add1)
        if (i == '^')
            i = ',';

    getline(s, add2, '`');
    for (auto &i : add2)
        if (i == '^')
            i = ',';

    getline(s, city, '`');
    getline(s, country, '`');
    return;
}