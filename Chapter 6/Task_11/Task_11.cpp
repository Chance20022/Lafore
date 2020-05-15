#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class fraction {
private:
    int num;
    int den;
    char ch;
    char op;
public:
    fraction() : num(0), den(0), ch('/')
    {    /*   */    }

    void cin_data() {
        cin >> num >> ch >> den;
    }

    void cin_char() {
        cin >> op;
    }

    fraction operation(fraction x) {

        switch (op) {
        case'+':
            x.num = (num * x.den) + (x.num * den);
            x.den = den * x.den;
            x.lowterms();
            return x;
        case'-':
            x.num = (num * x.den) - (x.num * den);
            x.den = den * x.den;
            x.lowterms();
            return x;
        case'*':
            x.num = num * x.num;
            x.den = den * x.den;
            x.lowterms();
            return x;
        case'/':
            x.num = num * x.den;
            x.den = den * x.num;
            x.lowterms();
            break;
        }

    }

    void display() {
        cout << "Your answer: " << num << "/" << den;
    }

    void lowterms();
};

int main()
{
    char op;
    fraction f1, f2, answer;

    cout << "Enter the first fraction: ";
    f1.cin_data();
    cout << "Enter the operation: ";
    f1.cin_char();
    cout << "Enter the second fraction: ";
    f2.cin_data();

    answer = f1.operation(f2);
    answer.display();
}

void fraction::lowterms() {
    long tnum, tden, temp, gcd;
    tnum = labs(num);
    tden = labs(den);
    if (tden == 0) {
        cout << "Invalid denominator";
        exit(1);
    }
    else if (tnum == 0) {
        num = 0;
        den = 1;
        return;
    }

    while (tnum != 0) {
        if (tnum < tden) {
            temp = tnum;
            tnum = tden;
            tden = temp;
        }
        tnum = tnum - tden;
    }
    gcd = tden;
    num = num / gcd;
    den = den / gcd;
}
