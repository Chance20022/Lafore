﻿#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string x = "X";
    int counter = 0;

    for (int i = 40; i > 0; i = i - 2) {
        counter = i / 2;
        cout << setfill(' ') << setw(counter);
        for (int z = 40; (z < i) <= 0; z--) {
            cout << x;
        }
        cout << endl;
    }
}
