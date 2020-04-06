#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void power(double);
void power(float);
void power(int);
void power(char);
void power(long);

int main()
{

    double doub; float floa; int i; char ch; long lon;

    cout << "Enter the number with '.': "; cin >> doub;
    cout << "The second number with '.': "; cin >> floa;
    cout << "Enter int number: "; cin >> i;
    cout << "Enter simvol: "; cin >> ch;
    cout << "Enter int number: "; cin >> lon;
    cout << endl;

    power(doub);
    power(floa);
    power(i);
    power(ch);
    power(lon);

}

void power(double x) {
    cout << "You are enter: " << x << endl;
}

void power(float x) {
    cout << "You are enter: " << x << endl;
}

void power(int x) {
    cout << "You are enter: " << x << endl;
}

void power(char x) {
    cout << "You are enter: " << x << endl;
}

void power(long x) {
    cout << "You are enter: " << x << endl;
}

