#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string x = "X";

    for (int i = 0; i < 20;) {
        cout << setfill(' ');
        for (int z = 0; z < i; z++) {
            cout << x;
        }
    }
}
