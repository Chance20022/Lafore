#include <iostream>

using std::cout;
using std::cin;

struct time {

    int hours, minutes, seconds;

};

long secs_to_time(time);
time secs_to_time(long);

int main()
{
    time time;
    char ch = '/';

    cout << "Enter your time (hours/minutes/senconds): ";
    cin >> time.hours >> ch >> time.minutes >> ch >> time.seconds;

    long sec = secs_to_time(time);
    time = secs_to_time(sec);

    cout << "Your time in seconds: " << sec << std::endl;
    cout << "Your the first time: " << time.hours << ch << time.minutes << ch << time.seconds;

    return 0;
}

long secs_to_time(time x) {
    long answer = (x.hours * 3600) + (x.minutes * 60) + x.seconds;
    return answer;
}

time secs_to_time(long x) {
    time t1;
    t1.hours = x / 3600;
    t1.minutes = (x - (t1.hours * 3600)) / 60;
    t1.seconds = x - (t1.hours * 3600) - (t1.minutes * 60);

    return t1;
}
