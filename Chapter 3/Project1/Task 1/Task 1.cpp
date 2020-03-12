#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << "Enter your number ";

    cin >> number;

    cout << endl;

    for (int i = 1, counter = 10; i < 200; i++) {
        cout << i * number;
        if (i == counter) {
            cout << endl;
            counter = counter + 10;
        }
    }
}
