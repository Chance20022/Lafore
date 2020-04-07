
#include <iostream>

using namespace std;

struct fraction {

    double a, b;
    char op1, op2;

};
int main()
{
    fraction a, b;

    cin >> a.a >> a.op1 >> a.b >> a.op2 >> b.a >> a.op1 >> b.b;

    switch (a.op2)
    {
    case '+':
        cout << "Your answer: " << (a.a * b.b) + (a.b * b.a) << "/" << (a.b * b.b);
        break;
    case '-':
        cout << "Your answer: " << (a.a * b.b) - (a.b * b.a) << "/" << (a.b * b.b);
        break;
    case '*':
        cout << "Your answer: " << (a.a * b.a) << "/" << (a.b * b.b);
        break;
    case '/':
        cout << "Your answer: " << (a.a / b.b) << "/" << (a.b / b.a);
        break;
    default:
        cout << "Error!";
        break;
    }
}
