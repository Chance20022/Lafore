#include <iostream>

using namespace std;

int main()
{
    while (true) {

        double x1 = 0, x2 = 0;
        char op = ' ';

        cout << "Enter your example: ";

        cin >> x1 >> op >> x2;

        switch (op)
        {
        case '+':
            cout << "Your answer: " << x1 + x2 << endl;
            break;
        case '-':
            cout << "Your answer: " << x1 - x2 << endl;
            break;
        case '*':
            cout << "Your answer: " << x1 * x2 << endl;
            break;
        case '/':
            cout << "Your answer: " << x1 / x2 << endl;
            break;
        default:
            cout << "Bullshit" << endl;
            break;
        }

        cout << "Would you like to next? (y/n)";

        cin >> op;

        if (op == 'y') {
            cout << "You are next" << endl;
        }
        else if (op == 'n') {
            cout << "You are exit" << endl;
            return 0;
        }
        else {
            cout << "???";
        }
    }
}