#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct time {

    int hours, minutes, seconds;

};

void swap(time&);

int main()
{
    time time;

    cout << "Enter two number: ";
    cin >> time.hours >> time.minutes;

    swap(time);

    cout << "Right now you have " << time.hours << " and " << time.minutes;

    return 0;
}

void swap(time& time) {
    double sw = time.hours;
    time.hours = time.minutes;
    time.minutes = sw;
}