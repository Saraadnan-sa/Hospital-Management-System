#ifndef PATIENT
#define PATIENT
using namespace std;

#include "person.hh"

class appointment;
class patient : public person
{
private:
    int height; //in cms;
    int weight; //in pounds;
    
    bool alive;
    friend class appointment;
protected:
    bool hospitalized;
public:
    patient();
    void fillMap();
    void saveMap();
    void addPerson();
    void printDetails();
  
    void getDetails();

    void hospitalize();
    void reportADeath();
    void removePerson();
};
#endif // !PATIENT