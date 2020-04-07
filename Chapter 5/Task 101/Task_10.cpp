#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int counter = 0;
int mult = 1;
int mem = 0;

void fiba1(int&);
void fiba2(int&);

int main()
{
    cout << "Welcom, it's numbers of Fibanachi!" << endl;
    cout << "Enter would you like a number: ";

    int answer = 0;
    int choice = 0;
    cin >> choice;
    

    for (int i = 0; i < choice-2; i++) {
        fiba1(answer);
    }

    cout << endl << "Your number: " << answer << endl;

    answer = 0;

    for (int i = 0; i < choice-2; i++) {
        fiba2(answer);
    }

    cout << "Your answer: " << answer << endl;

    return 0;
}

void fiba1(int& x) {
    counter++;
    cout << "Function was called: " << counter << endl;
    x = mem + mult;
    mem = mult;
    mult = x;
}

void fiba2(int& x) {
    static int memo = 0;
    static int multi = 1;
    static int count = 1;
    cout << "Function was called: " << count << endl;
    x = memo + multi;
    memo = multi;
    multi = x;
    count++;
}