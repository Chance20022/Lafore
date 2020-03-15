#include <iostream>

using namespace std;

int main()
{
    int visitors = 0, counter = 1, chairs = 0;

    cout << "Enter number of visitors: ";
    cin >> visitors;
    cout << "Enter number of chairs: ";
    cin >> chairs;

    for (int i = 0; i < chairs; i++) {

        counter = counter * visitors;
        visitors--;

    }

    cout << counter;
}
