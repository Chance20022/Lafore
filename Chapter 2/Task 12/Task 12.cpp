#include <iostream>

using namespace std;

int main()
{
    float decpounds = 0; //Сумма в десятичных фунтах
    int pounds = 0;      //Сумма в старых фунтах
    float decfrac = 0;   //Десятичная дробная часть

    cout << "Enter decimal pounds: ";
    cin >> decpounds;

    pounds = static_cast<int>(decpounds);

    decfrac = (decpounds - pounds) * 20;

    cout << "Equivalent amount in the old notation: " << pounds << "." << decfrac << endl;

}