#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class fraction {
private:
    int x, y;
    char ch;
public:

    fraction() : x(0), y(0), ch('/')
    {    /*   */    }

    void cin_data() {
        cin >> x >> ch >> y;
    }

    fraction add(fraction z) {

        fraction temp;

        temp.x = (x * z.y) + (z.x * y);
        temp.y = y * z.y;

        return temp;
    }

    void cout_data() {
        cout << "Your answer: " << x << ch << y;
    }
};

int main()
{
    fraction f1, f2;
    fraction answer;

    cout << "Enter the first fraction: ";
    f1.cin_data();
    cout << "enter the second fraction: ";
    f2.cin_data();

    answer = f1.add(f2);
    answer.cout_data();

}
