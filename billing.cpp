#include <iostream>
#include <string>
#include "billing.hh"
#include "patient.hh"

Billing::Billing()
{
    hospitalizationBill = 5000.0;
    nonHospitalizationBill = 2500.0;
}

void Billing::GenerateBill()
{
    getDetails();
    temp=((hospitalized) ? "Y" : "N");
    if (temp=="Y")
    {   
            cout<<"Bill for Hospitalized patient is "<<GetHospitalizationBill()<<endl;
    }
    else if (temp=="N")
    {
      cout<<"Bill for Non Hospitalized patient is "<<GetNonHospitalizationBill()<<endl;
    }
}

double Billing::GetHospitalizationBill() const
{
    return hospitalizationBill;
}

double Billing::GetNonHospitalizationBill() const
{
    return nonHospitalizationBill;
}