#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, ab;
    char op1, op2, op3;

    cin >> a >> op1 >> b;

    if (op1 == '/') {
        ab = a / b;
        cout << "Your answer - " << ab << endl;
    }
    else {
        cout << "Error!";
        return 0;
    }

    cout << "Do you want to next? (y/n) ";
    cin >> op1;

    if (op1 == 'n')
        return 0;

    cout << "Enter your expression: " << a << "/" << b << " ";
    cin >> op2 >> c >> op3 >> d;

    switch (op2)
    {
    case '+':
        cout << "Your answer: " << (a * d) + (b * c) << "/" << (b * d) << " or " << ab + (c/d);
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