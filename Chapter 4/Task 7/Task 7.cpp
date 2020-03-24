#include <iostream>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct days {

    int days, month, year;

};

struct employee
{
    int numb;
    char ch;
    float money;
    days time;
    etype type;
};

int main()
{
    employee people1, people2, people3;
    char ch1 = '/';

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "Enter information about the employee (his number, salary, his position and date ofemployment): ";
    cin >> people1.numb >> people1.money >> people1.ch >> people1.time.days >> ch1 >> people1.time.month >> ch1 >> people1.time.year;
    cout << "Enter information about the employee (his number, salary, his position and date ofemployment): ";
    cin >> people2.numb >> people2.money >> people2.ch >> people2.time.days >> ch1 >> people2.time.month >> ch1 >> people2.time.year;
    cout << "Enter information about the employee (his number, salary, his position and date ofemployment): ";
    cin >> people3.numb >> people3.money >> people3.ch >> people3.time.days >> ch1 >> people3.time.month >> ch1 >> people3.time.year;
    cout << endl;

///////////people1//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    switch (people1.ch) {
    case 'l':
        people1.type = laborer;
        break;
    case 's':
        people1.type = secretary;
        break;
    case 'm':
        people1.type = manager;
        break;
    case 'a':
        people1.type = accountant;
        break;
    case 'e':
        people1.type = executive;
        break;
    case 'r':
        people1.type = researcher;
        break;
    }

    switch (people1.type) {
    case laborer:
        cout << "Number op employee - " << people1.numb << ", sakary - " << people1.money << ", position - " << "laborer, " << "date - " << people1.time.days << ch1 << people1.time.month << ch1 << people1.time.year << endl;
        break;
    case secretary:
        cout << "Number op employee - " << people1.numb << ", sakary - " << people1.money << ", position - " << "secretary, " << "date - " << people1.time.days << ch1 << people1.time.month << ch1 << people1.time.year << endl;
        break;
    case manager:
        cout << "Number op employee - " << people1.numb << ", sakary - " << people1.money << ", position - " << "manager, " << "date - " << people1.time.days << ch1 << people1.time.month << ch1 << people1.time.year << endl;
        break;
    case accountant:
        cout << "Number op employee - " << people1.numb << ", sakary - " << people1.money << ", position - " << "accountant, " << "date - " << people1.time.days << ch1 << people1.time.month << ch1 << people1.time.year << endl;
        break;
    case executive:
        cout << "Number op employee - " << people1.numb << ", sakary - " << people1.money << ", position - " << "executive, " << "date - " << people1.time.days << ch1 << people1.time.month << ch1 << people1.time.year << endl;
        break;
    case researcher:
        cout << "Number op employee - " << people1.numb << ", sakary - " << people1.money << ", position - " << "researcher, " << "date - " << people1.time.days << ch1 << people1.time.month << ch1 << people1.time.year << endl;
        break;
    }

//////////////people2///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    switch (people2.ch) {
    case 'l':
        people2.type = laborer;
        break;
    case 's':
        people2.type = secretary;
        break;
    case 'm':
        people2.type = manager;
        break;
    case 'a':
        people2.type = accountant;
        break;
    case 'e':
        people2.type = executive;
        break;
    case 'r':
        people2.type = researcher;
        break;
    }

    switch (people2.type) {
    case laborer:
        cout << "Number op employee - " << people2.numb << ", sakary - " << people2.money << ", position - " << "laborer, " << "date - " << people2.time.days << ch1 << people2.time.month << ch1 << people2.time.year << endl;
        break;
    case secretary:
        cout << "Number op employee - " << people2.numb << ", sakary - " << people2.money << ", position - " << "secretary, " << "date - " << people2.time.days << ch1 << people2.time.month << ch1 << people2.time.year << endl;
        break;
    case manager:
        cout << "Number op employee - " << people2.numb << ", sakary - " << people2.money << ", position - " << "manager, " << "date - " << people2.time.days << ch1 << people2.time.month << ch1 << people2.time.year << endl;
        break;
    case accountant:
        cout << "Number op employee - " << people2.numb << ", sakary - " << people2.money << ", position - " << "accountant, " << "date - " << people2.time.days << ch1 << people2.time.month << ch1 << people2.time.year << endl;
        break;
    case executive:
        cout << "Number op employee - " << people2.numb << ", sakary - " << people2.money << ", position - " << "executive, " << "date - " << people2.time.days << ch1 << people2.time.month << ch1 << people2.time.year << endl;
        break;
    case researcher:
        cout << "Number op employee - " << people2.numb << ", sakary - " << people2.money << ", position - " << "researcher, " << "date - " << people2.time.days << ch1 << people2.time.month << ch1 << people2.time.year << endl;
        break;
    }

///////////people3//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    switch (people3.ch) {
    case 'l':
        people3.type = laborer;
        break;
    case 's':
        people3.type = secretary;
        break;
    case 'm':
        people3.type = manager;
        break;
    case 'a':
        people3.type = accountant;
        break;
    case 'e':
        people3.type = executive;
        break;
    case 'r':
        people3.type = researcher;
        break;
    }

    switch (people3.type) {
    case laborer:
        cout << "Number op employee - " << people3.numb << ", sakary - " << people3.money << ", position - " << "laborer, " << "date - " << people3.time.days << ch1 << people3.time.month << ch1 << people3.time.year << endl;
        break;
    case secretary:
        cout << "Number op employee - " << people3.numb << ", sakary - " << people3.money << ", position - " << "secretary, " << "date - " << people3.time.days << ch1 << people3.time.month << ch1 << people3.time.year << endl;
        break;
    case manager:
        cout << "Number op employee - " << people3.numb << ", sakary - " << people3.money << ", position - " << "manager, " << "date - " << people3.time.days << ch1 << people3.time.month << ch1 << people3.time.year << endl;
        break;
    case accountant:
        cout << "Number op employee - " << people3.numb << ", sakary - " << people3.money << ", position - " << "accountant, " << "date - " << people3.time.days << ch1 << people3.time.month << ch1 << people3.time.year << endl;
        break;
    case executive:
        cout << "Number op employee - " << people3.numb << ", sakary - " << people3.money << ", position - " << "executive, " << "date - " << people3.time.days << ch1 << people3.time.month << ch1 << people3.time.year << endl;
        break;
    case researcher:
        cout << "Number op employee - " << people3.numb << ", sakary - " << people3.money << ", position - " << "researcher, " << "date - " << people3.time.days << ch1 << people3.time.month << ch1 << people3.time.year << endl;
        break;
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}