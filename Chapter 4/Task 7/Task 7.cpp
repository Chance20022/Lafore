#include <iostream>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct days {

    int days, month, year;

};

struct employee
{
    int numb;
    string position;
    float money;
    days time;
    etype type;
};

int main()
{
    employee people1, people2, people3;
    char ch1 = ' ';
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "Enter information about the employee (his number, salary, his position and date ofemployment): ";
    cin >> people1.numb >> people1.money >> people1.position >> people1.time.days >> ch1 >> people1.time.month >> ch1 >> people1.time.year;
    cout << "Enter information about the employee (his number, salary, his position and date ofemployment): ";
    cin >> people2.numb >> people2.money >> people2.position >> people2.time.days >> ch1 >> people2.time.month >> ch1 >> people2.time.year;
    cout << "Enter information about the employee (his number, salary, his position and date ofemployment): ";
    cin >> people3.numb >> people3.money >> people3.position >> people3.time.days >> ch1 >> people3.time.month >> ch1 >> people3.time.year;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       

    cout << "You did enter: " << people1.numb << " " << people1.money << " " << people1.type << " " << people1.time.days << ch1 << people1.time.month << ch1 << people1.time.year << endl <<
        people2.numb << " " << people2.money << " " << people2.type << " " << people2.time.days << ch1 << people2.time.month << ch1 << people2.time.year << endl <<
        people3.numb << " " << people3.money << " " << people3.type << " " << people3.time.days << ch1 << people3.time.month << ch1 << people3.time.year << endl;
}