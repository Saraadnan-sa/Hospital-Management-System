#ifndef PERSON
#define PERSON
using namespace std;
#include <string>

#include "address.hh"

class person //abstract class
{
protected:
    int id;
    string firstName, lastName;
    char gender;
    int16_t age;
    string mobNumber;
    address add;//object of address class
    string cat;
    int category;
    //category: 1:doctor; 2:patient; 3:nurse; 4:driver;

public:
    person();
    virtual void fillMap() = 0;
    virtual void saveMap() = 0;
    virtual void addPerson();
    virtual void printDetails();
    
    virtual void getDetails() = 0;
  
    virtual void removePerson() = 0;
};
#endif // !PERSON
