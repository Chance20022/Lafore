#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char simv;
    long number = 0;

    simv = getche(); // Я не знаю, не работает

    number = number * 10 + simv - '0';

    cout << number;
}
