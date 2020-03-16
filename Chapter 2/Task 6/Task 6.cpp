#include <iostream>

using namespace std;

int main()
{
    float dollar = 0;

    cout << "Enter the amount in dollar: ";
    cin >> dollar;
    cout << endl;
    cout << "The amount in the round - " << dollar / 1.487 << endl;
    cout << "The anount in the franc - " << dollar / 0.172 << endl;
    cout << "The anoumt in the german mark - " << dollar / 0.584 << endl;
    cout << "The anoumt in the yen - " << dollar / 0.00955;
}
