#include <iostream>

using namespace std;

struct fraction {
    int a, b;
};

int main()
{
    fraction a, b;
    char ch = '/';

    cout << "Enter the first fraction: ";
    cin >> a.a >> ch >> a.b;
    cout << "Enter the second fraction: ";
    cin >> b.a >> ch >> b.b;

    a.a = (a.a * b.b) + (a.b * b.a);
    a.b = a.b * b.b;

    cout << "Amaunt = " << a.a << ch << a.b;
}