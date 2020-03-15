#include <iostream>

using namespace std;

int main()
{
    double contrib = 0, years = 0, percent = 0, x1;

    cout << "Enter initial contribution: ";
    cin >> contrib;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Enter interest rate: ";
    cin >> percent;

    for (int i = 0; i < years; i++) {

        x1 = (contrib * percent) / 100;
        contrib = contrib + x1;

    }
    
    cout << "Your will get: " << contrib;
}