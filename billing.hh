#ifndef BILLING
#define BILLING
using namespace std;
# include "patient.hh"
class Billing : public patient{
private:
    double hospitalizationBill;
    double nonHospitalizationBill;
string temp;
public:
    Billing() ;
    void GenerateBill();
    double GetHospitalizationBill() const ;
    double GetNonHospitalizationBill() const ;
};
#endif 