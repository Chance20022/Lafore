#include <iostream>

using namespace std;

// Да бл, опять эти фунты
// ((shillings * 12) + pence) / 2.4
/*  pence in mill = shillings * 12
     = aaa + pence 
    aaa1 / 2.4 */

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