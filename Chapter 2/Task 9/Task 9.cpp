#include <iostream>

using namespace std;

int main()
{
    float a = 0;
    char op = ' ';
    float b = 0;
    float c = 0;
    float d = 0;
    float sum1 = 0;
    float sum2 = 0;

    cout << "Inter the first fraction:";
    cin >> a >> op >> b;
    cout << "Enter the second fraction:";
    cin >> c >> op >> d;

    if (op != '/') {
        cout << "Bullshit";
        return 0;
    }
    else {
        sum1 = ((a * d) + (b * c));
        sum2 = (b * d);
        cout << "Amount equal = " << sum1 << "/" << sum2;
        
    }

    return 0; 
}
