#include <iostream>

using namespace std;

struct employee
{
    int numb;
    float money;
};

int main()
{
    employee people1, people2, people3;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "Insert number and money the first employee: ";
    cin >> people1.numb >> people1.money;
    cout << "Insert number and money the second employee: ";
    cin >> people2.numb >> people2.money;
    cout << "Insert number and money the third employee: ";
    cin >> people3.numb >> people3.money << endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "Employee " << people1.numb << " has benefit " << people1.money << endl;
    cout << "Employee " << people2.numb << " has benefit " << people2.money << endl;
    cout << "Employee " << people3.numb << " has benefit " << people3.money << endl;
}
