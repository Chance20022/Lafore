#include <iostream>

using namespace std;

int main()
{
    float x1 = 0, x2 = 0;
    float pence = 0;

    cout << "Enter pounds: ";
    cin >> x1;
    cout << "Enter pence: ";
    cin >> x2;

    pence = (x2 * 2.4) / 12;

    cout << "Your ponds: " << x1 << "." << pence + 0.1;
}