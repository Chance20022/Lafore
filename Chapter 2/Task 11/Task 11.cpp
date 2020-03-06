#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setiosflags(ios::left) << setw(17) << "Surname" << setw(17) << "name" << setw(17) << "Adress" << "City" << endl
        << setiosflags(ios::right) << setfill('-') << setw(63) << "-" << setfill (' ')<< endl;
    cout << setiosflags(ios::right) << "Petrov" << setw(18) << "Wasiliy" << setw(22) << "Klenovaya 16" << setw(17) << "St-Peterburg" << endl
        << "Ivanov" << setw(17) << "Sergey" << setw(22) << "Osinovaya 3" << setw(13) << "Nahodka" << endl
        << "Sidorov" << setw(14) << "Ivan" << setw(26) << "Berezovaya 21" << setw(15) << "Kaliningrad";
}
