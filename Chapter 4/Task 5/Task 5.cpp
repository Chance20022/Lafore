#include <iostream>

using namespace std;

struct date {

    int days, month, year;

};

int main()
{
    date date;
    char ch = '/';

    cout << "Enter days/month/year: ";
    cin >> date.days >> ch >> date.month >> ch >> date.year;

    cout << date.days << ch << date.month << ch << date.year;
}
