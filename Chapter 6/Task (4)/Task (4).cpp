#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class employee {
 
private:
    int numb;
    float money;
public:

    employee() : numb(0), money(0)
    {   /*  */   }

    void cin_data(int i) {
        cout << "Enter employee number and his earnings " << i + 1 << ": "; cin >> numb >> money; 
    }

    void cout_data() {
        cout << "The number of employee: " << numb << " his earnings: " << money << endl;
    }

};

int main()
{
    employee people1[3];
    char ch = '.';

    for (int i = 0; i < 3; i++) {
        people1[i].cin_data(i);
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        people1[i].cout_data();
    }

    return 0;

}
