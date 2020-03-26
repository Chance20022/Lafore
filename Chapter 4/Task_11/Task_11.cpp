#include <iostream>

using namespace std;

struct time {

    int hours, minutes, seconds;

};

int main()
{
    time t1;
    char ch = ':';
    int count = 0;

    cout << "Enter your time - hourse:minutes:seconds: ";

    cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
    
    t1.hours *= 3600;
    t1.minutes *= 60;
    t1.seconds = t1.hours + t1.minutes + t1.seconds;
    
    t1.hours = t1.seconds / 3600;
    t1.minutes = (t1.seconds - (t1.hours * 3600)) / 60;
    t1.seconds = t1.seconds - (t1.hours * 3600) - (t1.minutes * 60);

    cout << "Your time: " << t1.hours << ch << t1.minutes << ch << t1.seconds;

    return 0;
}