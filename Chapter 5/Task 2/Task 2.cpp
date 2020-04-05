#include <iostream>
#include <conio.h>

using namespace std;

double power(double, int = 2);

int main()
{
    double n = 0;
    char ch = ' ';

    cout << "Enter the number and degree of erection" << endl;
    cout << "The number: "; cin >> n;
    cout << "The degree of erection: "; ch = _getche();
    int p = ch - '0';
    cout << endl;

    if (p == -35 || p == -16)
        n = power(n);
    else
        n = power(n, p);
    
    cout << "Your answer: " << n;
}

double power(double n, int p) {

    double ymn = 1;

    for (int i = 0; i < p; i++) {
        ymn = ymn * n;
    }

    return ymn;
}