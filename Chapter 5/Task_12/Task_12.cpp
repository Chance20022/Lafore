#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct fraction {

    double a, b;
    char op1, op2;

};

fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);

int main()
{
    fraction a, b, c;

    cin >> a.a >> a.op1 >> a.b >> a.op2 >> b.a >> a.op1 >> b.b;

    switch (a.op2)
    {
    case'+':
        c = fadd(a, b);
        cout << "Your answer: " << c.a << "/" << c.b;
        break;
    case '-':
        c = fsub(a, b);
        cout << "Your answer: " << c.a << "/" << c.b;
        break;
    case '*':
        c = fmul(a, b);
        cout << "Your answer: " << c.a << "/" << c.b;
        break;
    case '/':
        c = fdiv(a, b);
        cout << "Your answer: " << c.a << "/" << c.b;
        break;
    }
}

fraction fadd(fraction a, fraction b) {
    a.a = (a.a * b.b) + (a.b * b.a);
    a.b = (a.b * b.b);
    return a;
}

fraction fsub(fraction a, fraction b) {
    a.a = (a.a * b.b) - (a.b * b.a);
    a.b = (a.b * b.b);
    return a;
}

fraction fmul(fraction a, fraction b) {
    a.a = (a.a * b.a);
    a.b = (a.b * b.b);
    return a;
}

fraction fdiv(fraction a, fraction b) {
    a.a = (a.a * b.b);
    a.b = (a.b * b.a);
    return a;
}