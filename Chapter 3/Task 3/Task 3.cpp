#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char simv;
    long number = 0;

    cout << "Enter your number: ";

    for (int i = 0; i < 6; i++) {

        simv = _getche();

        number = number * 10 + simv - '0';

    }

    cout << endl;
    cout << "You war write the number: " << number;
  

}
