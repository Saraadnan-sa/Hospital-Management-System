#ifndef DOCTOR
#define DOCTOR
using namespace std;
#include <string>

#include "person.hh"

class appointment;
class doctor : public person
{
protected:
    double fees;
private:
    
    string type;
    int appointmentsBooked;
    friend class appointment;

public:
    doctor();
    void fillMap();
    void saveMap();
    void addPerson();
    void printDetails();
   
    void getDetails();
  
    void removePerson();
};
#endif // !DOCTOR