#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

#include "global.hh"
#include "person.hh"

person::person()
{
    id = -1;
}
void person::addPerson()
{
    //getting basic details of the person from the user side;
    cout << "\nEnter name: \nFirst name:\n";
    getline(cin >> ws, firstName);
    cout << "\nLast name:\n";
    getline(cin, lastName);
 
     while (true) {
        try {
            cout << "Enter the Age:\n";
            
            age=0;
            if (age < 0|| age>100 || !(cin >> age)) {
                throw invalid_argument("Enter valid age.");
            }

            break; // Break out of the loop if the input is valid
        } catch (exception& e) {
            cout << "Exception occurred: " << e.what() << endl;
            cin.clear();              // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining input
        }
    }
    
    cout << "\nGender (M = Male  || F = Female ): \n";
    cin >> gender;
    while (gender != 'M' && gender != 'F'){
        cout << "M or F?\n", cin >> gender;}
cout << "\nEnter mobile number (with country code): \n";
cin.ignore();
getline(cin, mobNumber);

while (mobNumber.length() != 11 || mobNumber.substr(0, 2) != "03") {
    cout << "\nInvalid mobile number. Please enter a valid mobile number: \n";
    getline(cin, mobNumber);
}

    add.takeInput();
    return;
}
void person::printDetails()
{
    if (id == -1)
        return;
    cout << "\nDetails:\n";
    cout << "ID              : " << id << "\n";
    cout << "Full Name       : " << firstName << " " << lastName << "\n";
    cout << "Gender          : " << gender << "\n";
    cout << "Age             : " << age << "\n";
    cout << "Mobile          : " << mobNumber << "\n";
    cout << "Address         : ";
    add.print();
    return;
}