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
    employee people1 [3];
    char ch1 = '/';

    for (int i = 0; i < 3; i++) {
        cout << "Enter information about the employee (his number, salary, his position and date ofemployment): ";
        cin >> people1[i].numb >> people1[i].money >> people1[i].ch >> people1[i].time.days >> ch1 >> people1[i].time.month >> ch1 >> people1[i].time.year;

        switch (people1[i].ch) {
        case 'l':
            people1[i].type = laborer;
            break;
        case 's':
            people1[i].type = secretary;
            break;
        case 'm':
            people1[i].type = manager;
            break;
        case 'a':
            people1[i].type = accountant;
            break;
        case 'e':
            people1[i].type = executive;
            break;
        case 'r':
            people1[i].type = researcher;
            break;
        }

        
    }

    for (int i = 0; i < 3; i++) {
        switch (people1[i].type) {
        case laborer:
            cout << "Number op employee - " << people1[i].numb << ", sakary - " << people1[i].money << ", position - " << "laborer, " << "date - " << people1[i].time.days << ch1 << people1[i].time.month << ch1 << people1[i].time.year << endl;
            break;
        case secretary:
            cout << "Number op employee - " << people1[i].numb << ", sakary - " << people1[i].money << ", position - " << "secretary, " << "date - " << people1[i].time.days << ch1 << people1[i].time.month << ch1 << people1[i].time.year << endl;
            break;
        case manager:
            cout << "Number op employee - " << people1[i].numb << ", sakary - " << people1[i].money << ", position - " << "manager, " << "date - " << people1[i].time.days << ch1 << people1[i].time.month << ch1 << people1[i].time.year << endl;
            break;
        case accountant:
            cout << "Number op employee - " << people1[i].numb << ", sakary - " << people1[i].money << ", position - " << "accountant, " << "date - " << people1[i].time.days << ch1 << people1[i].time.month << ch1 << people1[i].time.year << endl;
            break;
        case executive:
            cout << "Number op employee - " << people1[i].numb << ", sakary - " << people1[i].money << ", position - " << "executive, " << "date - " << people1[i].time.days << ch1 << people1[i].time.month << ch1 << people1[i].time.year << endl;
            break;
        case researcher:
            cout << "Number op employee - " << people1[i].numb << ", sakary - " << people1[i].money << ", position - " << "researcher, " << "date - " << people1[i].time.days << ch1 << people1[i].time.month << ch1 << people1[i].time.year << endl;
            break;
        }
    }
}
