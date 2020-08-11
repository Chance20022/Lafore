#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class employee {
private:
    std::string name;
    long numb;
public:

    void get_data(std::string na, long nu) {
        name = na;
        numb = nu;
    }

    void putdata() {
        cout << "The name employee: " << name << endl;
        cout << "The number employee: " << numb << endl << endl;
    }

};

int main()
{
    std::string name;
    long numb;
    employee emp[100];

    cout << "Enter the name and number of 100 emplyees." << endl;

    for (int i = 0; i < 100; i++) {
        cout << "Enter name employee: "; cin >> name;
        cout << "Enter number employee: "; cin >> numb;
        cout << endl;

        emp[i].get_data(name, numb);
    }

    for (int i = 0; i < 100; i++) {
        emp[i].putdata();
    }

    return 0;
}
