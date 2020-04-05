#include <iostream>

using namespace std;

void zeroSmaller(int&, int&);

int main()
{
    int first, second;

    cout << "Enter two number: ";
    cin >> first >> second;

    zeroSmaller(first, second);
}

void zeroSmaller(int& x, int& y) {

    if (x < y) {
        x = 0;
        cout << x << " and " << y;
    }
    else if (x == y)
        cout << "X == Y";
    else {
        y = 0;
        cout << x << " and " << y;
    }
}