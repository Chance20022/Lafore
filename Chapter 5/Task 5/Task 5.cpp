#include <iostream>

using std::cout;
using std::cin;

struct time {
    int hour;
    int minute;
    int second;
};

long seconds(time);

int main()
{
    time time;
    char ch = '/';

    cout << "Enter your time (hours/minutes/senconds): ";
    cin >> time.hour >> ch >> time.minute >> ch >> time.second;

    long sec = seconds(time);

    cout << "Your time in second: " << sec;

}

long seconds(time x) {
    long answer = (x.hour * 3600) + (x.minute * 60) + x.second;
    return answer;
}