#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class counter {
private:
    static int count;
    int x;
public:
    counter() {
        count++;
        x = count;
    }

    void cout_data() {
        cout << "My number is " << x << endl;
    }
};

int counter::count = 0;

int main()
{
    counter x1, x2, x3;

    x1.cout_data();
    x2.cout_data();
    x3.cout_data();
}
