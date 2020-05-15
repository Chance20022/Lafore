#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class fraction {
private:
    int num, den;
public:

    void cin_data() {
        char c;

        cin >> num >> c >> den;
    }

    fraction fadd(fraction x) {
        fraction temp;

        temp.num = (num * x.den) + (x.num * den);
        temp.den = den * x.den;

        return temp;
    }
    fraction fsub(fraction x) {
        fraction temp;

        temp.num = (num * x.den) - (x.num * den);
        temp.den = den * x.den;

        return temp;
    }
    fraction fmul(fraction x) {
        fraction temp;

        temp.num = num * x.num;
        temp.den = den * x.den;

        return temp;
    }
    fraction fdiv(fraction x) {
        fraction temp;

        temp.num = num * x.den;
        temp.den = den * x.num;

        return temp;
    }

    void lowterms();

    void display() {
        cout << "Your answer: " << num << "/" << den;
    }
};

int main()
{
    char op;
    fraction f1, f2, answer;

    cout << "Enter the first fraction: ";
    f1.cin_data();
    cout << "Enter the operation: ";
    cin >> op;
    cout << "Enter the second fraction: ";
    f2.cin_data();

    switch (op) {
    case'+':
        answer = f1.fadd(f2);
        answer.lowterms();
        answer.display();
        break;
    case'-':
        answer = f1.fsub(f2);
        answer.lowterms();
        answer.display();
        break;
    case'*':
        answer = f1.fmul(f2);
        answer.lowterms();
        answer.display();
        break;
    case'/':
        answer = f1.fdiv(f2);
        answer.lowterms();
        answer.display();
        break;
    }

    return 0;
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
