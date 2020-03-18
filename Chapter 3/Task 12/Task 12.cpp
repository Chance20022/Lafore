#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, ab;
    char op1, op2, op3;

    cin >> a >> op1 >> b;
    cin >> op2;
    cin >> c >> op3 >> d;

    ab = a / b;

    switch (op2)
    {
    case '+':
        cout << "Your answer: " << (a * d) + (b * c) << "/" << (b * d) << " or " << ab + (c / d);
        break;
    case '-':
        cout << "Your answer: " << (a * d) - (b * c) << "/" << (b * d) << " or " << ab - (c / d);
        break;
    case '*':
        cout << "Your answer: " << (a * d) * (b * c) << "/" << (b * d) << " or " << ab * (c / d);
        break;
    case '/':
        cout << "Your answer: " << (a * d) / (b * c) << "/" << (b * d) << " or " << ab / (c / d);
        break;
    default:
        cout << "Error!";
        break;
    }
}