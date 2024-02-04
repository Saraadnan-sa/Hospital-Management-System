#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <sstream>
#include <ios>    //used to get stream size
#include <limits> //used to get numeric limits
using namespace std;


#include "global.cpp"
#include "hospital.cpp"
#include "address.cpp"
#include "person.cpp"
#include "appointment.cpp"
#include "patient.cpp"
#include "doctor.cpp"
#include "nurse.cpp"
#include "driver.cpp"
#include "ambulance.cpp"
#include "User.cpp"
#include"item.cpp"
#include"inventory.cpp"
#include"billing.cpp"
void appointmentsMenu();
void patientsMenu();
void doctorsMenu();
void nursesMenu();
void driversMenu();
void ambulancesMenu();

void appointmentsMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        cout << "\n***************\n";
        cout << "\tSelect an option:                 \n";
        cout << "***************\n";
        cout << "\t/APPOINTMENTS                      \n";
        cout << "***************\n";
        cout << "\t[01] : Get appointment details    \n";
        cout << "\t[02] : Book an appointment        \n";
        cout << "\t[03] : Show all appointments      \n";
        cout << "\t[-1] : Back                       \n";
        cout << "***************\n";
        cout << "Enter your choice: ";
        cin >> purpose;

        if (purpose == 2)
        {
            appointment a;
            a.book();
        }
        else if (purpose == 1)
        {
            appointment a;
            a.getDetails();
            a.printDetails();
        }
        else if (purpose == 3)
        {
            hospital::printAppointments();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        cout << "\nPress ENTER to continue...\n";
        cout << endl;

        getchar();
    }
    return;
}

void patientsMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        cout << "\n*********************\n";
        cout << "\tSelect an option:\n";
        cout << "*********************\n";
        cout << "\tPATIENTS\n";
        cout << "*********************\n";
        cout << "\t[01] : Register a new patient\n";
        cout << "\t[02] : Get patient details\n";
        cout << "\t[03] : Hospitalize a registered patient\n";
        cout << "\t[04] : Report a patient's death\n";
        cout << "\t[05] : Discharge a patient or their body\n";
        cout << "\t[06] : Get details of all registered patients\n";
        cout << "\t[07] : Generate Patients Bill\n";
        cout << "\t[-1] : Back\n";
        cout << "*********************\n";
        cout << "Enter your choice: ";
        cin >> purpose;

        if (purpose == 1)
        {
            patient p;
            p.addPerson();
        }
        else if (purpose == 2)
        {
            patient p;
            p.getDetails();
            p.printDetails();
        }
        else if (purpose == 3)
        {
            patient p;
            p.hospitalize();
        }
        else if (purpose == 4)
        {
            patient p;
            p.reportADeath();
        }
        else if (purpose == 5)
        {
            patient p;
            p.removePerson();
        }
        
        else if (purpose == 6)
        {
            hospital::printPatients();
        }
        else if (purpose == 7)
        {
        Billing b;  
        b.GenerateBill();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        cout << "\nPress ENTER to continue...\n";
        cout << endl;

        getchar();
    }
    return;
}

void doctorsMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        cout << "\n*********************\n";
        cout << "\tSelect an option:\n";
        cout << "*********************\n";
        cout << "\t/DOCTORS\n";
        cout << "*********************\n";
        cout << "\t[01] : Register a new doctor\n";
        cout << "\t[02] : Get doctor details\n";
        cout << "\t[03] : Remove a doctor\n";
        cout << "\t[04] : Get details of all registered doctors\n";
        cout << "\t[-1] : Back\n";
        cout << "*********************\n";
        cout << "Enter your choice: ";
        cin >> purpose;

        if (purpose == 1)
        {
            doctor d;
            d.addPerson();
        }
        else if (purpose == 2)
        {
            doctor d;
            d.getDetails();
            d.printDetails();
        }
        else if (purpose == 3)
        {
            doctor d;
            d.removePerson();
        }
       
        else if (purpose == 4)
        {
            hospital::printDoctors();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        cout << "\nPress ENTER to continue...\n";
        cout << endl;

        getchar();
    }
    return;
}

void nursesMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        cout << "\n*********************\n";
        cout << "\nSelect an option:\n";

        cout << "*********************\n";
        cout << "\t/NURSES\n";
        cout << "*********************\n";
        cout << "\t[01] : Register a new nurse\n";
        cout << "\t[02] : Get nurse details\n";
        cout << "\t[03] : Remove a nurse\n";
        cout << "\t[04] : Get details of all registered nurses\n";
        cout << "\t[-1] : Back\n";
        cout << "*********************\n";
        cout << "\tEnter your choice: ";
        cin >> purpose;

        if (purpose == 1)
        {
            nurse n;
            n.addPerson();
        }
        else if (purpose == 2)
        {
            nurse n;
            n.getDetails();
            n.printDetails();
        }
        else if (purpose == 3)
        {
            nurse n;
            n.removePerson();
        }
        
        else if (purpose == 4)
        {
            hospital::printNurses();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        cout << "\nPress ENTER to continue...\n";
        cout << endl;

        getchar();
    }
    return;
}

void driversMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        cout << "\n*********************\n";
        cout << "\tSelect an option:\n\n";

        cout << "*********************\n";
        cout << "\t/DRIVERS\n";
        cout << "*********************\n";
        cout << "\t[01] : Register a new driver\n";
        cout << "\t[02] : Get driver details\n";
        cout << "\t[03] : Remove a driver\n";
        cout << "\t[04] : Get details of all registered drivers\n\n";
        cout << "\t[-1] : Back\n";
        cout << "*********************\n\n";
        cout << "\tEnter your choice: ";
        cin >> purpose;

        if (purpose == 1)
        {
            driver d;
            d.addPerson();
        }
        else if (purpose == 2)
        {
            driver d;
            d.getDetails();
            d.printDetails();
        }
        else if (purpose == 3)
        {
            driver d;
            d.removePerson();
        }
      
        else if (purpose == 4)
        {
            hospital::printDrivers();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        cout << "\nPress ENTER to continue...\n";
        cout << endl;

        getchar();
    }
    return;
}

void ambulancesMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        cout << "\n*********************\n";
        cout << "\tSelect an option:\n";
        cout << "*********************\n";
        cout << "\t/AMBULANCES\n";
        cout << "*********************\n";
        cout << "\t[01] : Add an ambulance\n";
        cout << "\t[02] : Send an ambulance\n";
        cout << "\t[03] : Get ambulance details\n";
        cout << "\t[04] : Report ambulance arrival\n";
        cout << "\t[05] : Remove an ambulance\n";
        cout << "\t[06] : Get details of all registered ambulances\n";
        cout << "\t[-1] : Back\n";
        cout << "*********************\n";
        cout << "\tEnter your choice: ";
        cin >> purpose;

        if (purpose == 1)
        {
            ambulance a;
            a.addAmbulance();
        }
        else if (purpose == 2)
        {
            ambulance a;
            a.send();
        }
        else if (purpose == 3)
        {
            ambulance a;
            a.getDetails();
            a.printDetails();
        }
        else if (purpose == 4)
        {
            ambulance a;
            a.reportArrival();
        }
        else if (purpose == 5)
        {
            ambulance a;
            a.removeAmbulance();
        }
       
        else if (purpose == 6)
        {
            hospital::printAmbulances();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        cout << "\nPress ENTER to continue...\n";
        cout << endl;

        getchar();
    }
    return;
}
void inventoryMenu(Inventory& inventory) {
    int choice;
    do {
        cout << "*************************" << endl;
        cout << "     INVENTORY MENU      " << endl;
        cout << "*************************" << endl;
        cout << "[1]. Add item" << endl;
        cout << "[2]. Remove item" << endl;
        cout << "[3]. Display inventory" << endl;
        cout << "[4]. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                int quantity;

                cout << "Enter item name: ";
                cin >> name;
                cout << "Enter quantity: ";
                cin >> quantity;

                Item item;
                item.setName(name);
                item.setQuantity(quantity);
                inventory.addItem(item);

                break;
            }
            case 2: {
                string name;

                cout << "Enter item name to remove: ";
                cin >> name;

                inventory.removeItem(name);

                break;
            }
            case 3:
                cout<<endl<<endl;
                inventory.displayInventory();
                cout<<endl<<endl;
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return;
}



  string getDateTime()
    {
        time_t now = time(0);
        char *date = ctime(&now);
        return date;
    }
int main()
{
      User user("HMS", "123");
again:

    if (user.Authentication())
    {

        cout << "Access granted" << endl;

    fstream f;
    f.open("./data/appointments.csv", ios::in);
    string temp, s, header;
    getline(f, header);
    getline(f, temp);
    f.close();
    stringstream str(temp);
    getline(str, s, ',');
    getline(str, s, ',');
     
cout<<"Today's date and time is "<<getDateTime()<<endl;
    Inventory I("./data/item.csv");
    // filling maps with data from csv files;
    {
        doctor d1;
        patient p;
        nurse n;
        driver d2;
        ambulance a1;
        appointment a2;
        d1.fillMap();
        p.fillMap();
        n.fillMap();
        d2.fillMap();
        a1.fillMap();
        a2.fillMap();
    }
    while (1)
    {
        int category = 0;
        cout << "\n******************************\n";
        cout << "\t\t           Select a category:\n";
        cout << "******************************\n";
        cout << "\t\t        HOME\n";
        cout << "******************************~\n";
        cout << "\t\t[01] : APPOINTMENTS\n";
        cout << "\t\t[02] : PATIENTS\n";
        cout << "\t\t[03] : DOCTORS\n";
        cout << "\t\t[04] : NURSES\n";
        cout << "\t\t[05] : DRIVERS\n";
        cout << "\t\t[06] : AMBULANCES\n";
        cout << "\t\t[07] : INVENTORY\n\n";
        cout << "\t\t[-1] : EXIT\n";
        cout << "******************************\n";
        cout << "\t\tEnter your choice: ";
        cin >> category;
        cout << "\n******************************\n";
        cout << "\n";
        if (category == -1)
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\nShutting Down System...\n";
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            break;
        }
        else if (category == 1)
        {
            appointmentsMenu();
        }
        else if (category == 2)
        {
            patientsMenu();
        }
        else if (category == 3)
        {
            doctorsMenu();
        }
        else if (category == 4)
        {
            nursesMenu();
        }
        else if (category == 5)
        {
            driversMenu();
        }
        else if (category == 6)
        {
            ambulancesMenu();
        }
        else if (category == 7)
        {
            inventoryMenu(I);
        }
        else
        {
            cout << "\nInvalid Choice!\n";
        }

        cout << endl;
    }
    // saving data inside maps by overwriting it on the files
    {
        doctor d1;
        patient p;
        nurse n;
        driver d2;
        ambulance a1;
        appointment a2;
        d1.saveMap();
        p.saveMap();
        n.saveMap();
        d2.saveMap();
        a1.saveMap();
        a2.saveMap();
    }
    }
      else
    {
        cout << "Access denied" << endl;
        goto again;
    }
    return 0;
}