#include <iostream>

using namespace std;

void zeroSmaller(int&, int&);

int main()
{
    int first, second;

    cout << "Enter two number: ";
    cin >> first >> second;

    if (first == second) {
        cout << "The numbers are equal";
        return 0; 
    }

    zeroSmaller(first, second);

    cout << first << " and " << second;
}

void zeroSmaller(int& x, int& y) {

    if (x < y)
        x = 0;
    else
        y = 0;
}