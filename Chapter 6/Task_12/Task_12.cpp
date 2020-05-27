#include <iostream>
#include <iomanip> 
#include "fraction.h"

using std::cout;
using std::cin;
using std::endl;

void line(int x) {
    if (x < 10)
    cout << std::setfill('-') << std::setw(x * 10) << " " << endl;
    else
        cout << std::setfill('-') << std::setw(x * 10) << " " << endl;
}

int main()
{
    int den, num;
    fraction f1, f2;

    cout << "Enter your denominator: ";
    cin >> den;

    cout << "         ";

    for (num = 1; num < den; num++) {
        f1 = { num, den };
        f1.lowterms();
        f1.display();
    }

    cout << endl;
    line(den);

    for (num = 1; num < den; num++) {
        f1 = { num, den };
        f1.lowterms();
        f2 = f1;
        f2.display();
        for (int numb = 1; numb < den; numb++) {
            f1 = { numb, den };
            f1 = f1.fmul(f2);
            f1.lowterms();
            f1.display();
        }
        cout << endl;
    }

}