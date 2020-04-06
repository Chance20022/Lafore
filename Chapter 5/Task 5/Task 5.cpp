#include <iostream>

using std::cout;
using std::cin;
using std::endl;

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
    cout << "If you want to leave enter 0/0/0" << endl;

    while (1) {

        cout << "Enter your time (hours:minutes:senconds): ";
        cin >> time.hour >> ch >> time.minute >> ch >> time.second;

        if (time.hour == 0 && time.minute == 0 && time.second == 0)
            break;

        long sec = seconds(time);

        cout << "Your time in second: " << sec << endl;
    }

    return 0;
}

long seconds(time x) {
    long answer = (x.hour * 3600) + (x.minute * 60) + x.second;
    return answer;
}