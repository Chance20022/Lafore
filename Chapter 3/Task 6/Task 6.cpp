#include <iostream>

using namespace std;

int main()
{
    int factorial = 1, counter = 0, choice = 0;

    while (true) {

        cout << "Enter number for factorial (if you want to leave press '0'): ";

        cin >> choice;

        if (choice == 0)
            return 0;

        do {

            counter++;

            factorial = factorial * counter;

        } while (counter <= choice - 1);

        cout << "Your factorial: " << factorial << endl;

        counter = 0;
        factorial = 1;
    }
}