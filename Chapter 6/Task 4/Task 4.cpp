#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class employee {
private:
    int numb_e;
    float money;
public:

    employee() : numb_e(0), money(0.0)
    {    /*   */    }

    void cin_data() {
        cout << "The number of employ: ";
        cin >> numb_e;
        cout << "The salary of employ: ";
        cin >> money;
    }

    void dispaly() {
        cout << "The number: " << numb_e << endl;
        cout << "The salary: " << money;
    }
};

int main()
{
    employee e1[3];

    for (int i = 0; i < 3; i++) {
        cout << "The " << i + 1 << " emloy:" << endl;
        e1[i].cin_data();
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << "The " << i+1 << " employ:" << endl;
        e1[i].dispaly();
        cout << endl;
    }

    return 0;
}
