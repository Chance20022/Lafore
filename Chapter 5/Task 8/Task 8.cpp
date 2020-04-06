#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swap(int&, int&);

int main()
{
    int x1 = 0, x2 = 0;

    cout << "Enter two number: ";
    cin >> x1 >> x2;

    swap(x1, x2);

    cout << "Right now you have " << x1 << " and " << x2;

    return 0;

}

void swap(int& x1, int& x2) {

    int swap = x2;
    x2 = x1;
    x1 = swap;

}
