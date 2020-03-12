#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number = 0;

    cout << "Enter your number ";

    cin >> number;

    cout << endl;

    for (int i = 1, counter = 10; i < 201; i++) {
        cout << setw (7) << i * number;
        if (i == counter) {
            cout << endl;
            counter = counter + 10;
        }
    }
}
