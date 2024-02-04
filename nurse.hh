#ifndef NURSE
#define NURSE
using namespace std;
#include <string>

#include "person.hh"

class nurse : public person
{
private:
    string type;

public:
    nurse();
    void fillMap();
    void saveMap();
    void addPerson();
    void printDetails();
    void getDetails();
    void removePerson();
};
#endif // !NURSE