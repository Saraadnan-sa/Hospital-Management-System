#ifndef AMBULANCE
#define AMBULANCE
using namespace std;
#include <string>

#include "driver.hh"
#include "address.hh"

class ambulance
{
private:
    int id;
    string model;
    string manufacturer;
    string vrn; //vehicle registration number;
    bool idle;
    address add;
    driver D;

public:
    ambulance();
    void fillMap();
    void saveMap();
    void addAmbulance();
    void printDetails();

    void getDetails();
  
    void send();
    void reportArrival();
    void removeAmbulance();
};
#endif // !AMBULANCE