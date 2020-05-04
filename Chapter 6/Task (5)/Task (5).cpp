#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class date {
private:
    int month;
    int day;
    int year;
    char ch;
public:
    date() : month(0), day(0), year(0), ch('/') 
    {   /*  */   }

    void getdate() {
        cout << "Enter your date (mth/day/yar): "; cin >> month >> ch >> day >> ch >> year;
        cout << endl;
    }

    void showdate() {
        cout << "Your date: " << month << ch << day << ch << year << endl;
    }

};

int main()
{
    date d;

    d.getdate();
    d.showdate();

}
