#include <iostream>

using namespace std;

float operation1(float x1, char op, float x2) {

    float x = 0;

    if (op == '/') {
        x = x1 / x2;
        return x;
    }
    else {
        cout << "Bullshit with operation";
        return false;
    }

}

int main()
{
    float x1 = 0;
    char op = ' ';
    float x2 = 0;
    cout << "Inter the first fraction:";
    cin >> x1 >> op >> x2;

    float sum1 = operation1(x1, op, x2);

    cout << "Enter the second fraction:";
    cin >> x1 >> op >> x2;

    float sum2 = operation1(x1, op, x2);

    x1 = sum1 + sum2;

    for (int i = 0; true; i++) {
        if (x1 - static_cast<int>(x1) != 0) {

        }
    }

    cout << "Sum = " << x1;
}
