#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class fraction {
private:
    char op1, op2;
    int a, b, c, d;

    void fadd() { // Сложение
        a = (a * d) + (b * c);
        b = b * d;
        lowterms();
    }

    void fsub() { //Вычитание 
        a = (a * d) - (b * c);
        b = b * d;
        lowterms();
    }

    void fmul() { // Умножение
        a = a * c;
        b = b * d;
        lowterms();
    }

    void fdiv() { // Деление
        a = a * d;
        b = b * c;
        lowterms();
    }

    void lowterms();

public:

    void cin_data() {
        cout << "Your math example: ";
        cin >> a >> op1 >> b >> op2 >> c >> op1 >> d;

        switch (op2)
        {
        case'+':
            fadd();
            break;
        case '-':
            fsub();
            break;
        case '*':
            fmul();
            break;
        case '/':
            fdiv();
            break;
        }
    }

    void cout_data() {
        cout << "Your answer: " << a << "/" << b;
    }

};

int main()
{
    fraction f;

    f.cin_data();
    f.cout_data();

}

void fraction::lowterms() {

    long tnum, tden, temp, gcd;
    tnum = labs(a);
    tden = labs(b);
    if (tden == 0) {
        cout << "Invalid denominator"; exit(1);
    }
    else if (tnum == 0) {
        a = 0;
        b = 0;
        return;
    }

    while (tnum != 0) {
        if(tnum < tden){
            temp = tnum;
            tnum = tden;
            tden = temp;
        }
        tnum = tnum - tden;
    }

    gcd = tden;
    a = a / gcd;
    b = b / gcd;
}