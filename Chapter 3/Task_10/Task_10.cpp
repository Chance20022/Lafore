#include <iostream>

using namespace std;

int main()
{
    double contrib = 0, amount = 0, percent = 0, x1;
    int years = 0, counter = 0;

    cout << "Enter initial contribution: ";
    cin >> contrib;
    cout << "Enter the number of final amount: ";
    cin >> amount;
    cout << "Enter interest rate: ";
    cin >> percent;

    while(contrib < amount) {

        x1 = (contrib * percent) / 100;
        contrib = contrib + x1;
        counter++;

    }

    cout << "You will need " << counter << " years";
}