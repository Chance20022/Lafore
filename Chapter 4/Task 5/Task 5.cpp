#include <iostream>

using namespace std;

struct date {

    int days, month, year;

};

int main()
{
    date date, mem;
    char ch = '/';

    cout << "Enter days/month/year: ";
    cin >> date.days >> ch >> date.month >> ch >> date.year;

    mem = { {date.days}, {date.month}, {date.year} };

    cout << mem.days << ch << mem.month << ch << mem.year;
}
