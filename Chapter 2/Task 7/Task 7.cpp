#include <iostream>

using namespace std;

int main()
{
    float celsius = 0;

    cout << "Enter a celsius - ";
    cin >> celsius;
    cout << endl;

    celsius = (celsius * 9 / 5) + 32;

    cout << "Celsius in Farangate - " << celsius;
}
