#include <iostream>

using namespace std;

int main()
{
    float pounds = 0; //7
    float shillings = 0; // 17
    float pence = 0; // 9
    int Modpunds = 0;

    cout << "Enter the number of pounds: ";
    cin >> pounds;
    cout << "Enter the number of shillings: ";
    cin >> shillings;
    cout << "Enter the number of pence: ";
    cin >> pence;
    cout << endl;

    Modpunds = ((shillings * 12) + pence) / 2.4;

    cout << "Decimal pounds: " << pounds << "." << Modpunds+1;

}