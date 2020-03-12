#include <iostream>

using namespace std;

int main()
{
    char choice = ' ';
    double number = 0;

    cout << "Press 1 to convert Celsius to Fahrenheit" << endl
        << "Press 2 to convert Fahrenheit to Celsius: ";

    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case '2':
        cout << "Enter Fahrenheit temperature: ";
        cin >> number;
        cout << "Value of Celsius: " << (number - 32) * 5 / 9;
        break;
    case '1':
        cout << "Enter Celsius temperature: ";
        cin >> number;
        cout << "Value of Celsius: " << (number * (9 / 5)) + 32;
        break;
    default:
        break;
    }
}
