#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class fraction {
private:
    int a1, b1, a2, b2;
    char ch;
public:

    fraction() : a1(0), b1(0), ch(' '), a2(0), b2(0)
    {   /*   */   }

    void cin_fraction1() {

        cout << "Enter your the first fraction: ";
        cin >> a1 >> ch >> b1;
        cout << "Enter your the second fraction: ";
        cin >> a2 >> ch >> b2;

    }

    void addition() {

        a1 = (a1 * b2) + (a2 * b1);
        b1 = b1 * b2;

    }

    void cout_data() {
        cout << "Your answer: " << a1 << "/" << b1 << endl;
    }

};

int main()
{
    char choice;

    fraction f;

    while (1) {

        f.cin_fraction1();
        f.addition();
        f.cout_data();

        cout << "Do you want next? (y/n): ";
        cin >> choice;

        if (choice == 'y')
            cout << "You are next." << endl << endl;
        else {
            cout << "You are exit.";
            return 0;
        }
        
    }
}
