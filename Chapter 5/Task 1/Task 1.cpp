#include <iostream>

using namespace std;

float circarea(float);

int main()
{
    float rad;

    cout << "Enter circle radius: ";
    cin >> rad;

    rad = circarea(rad);

    cout << "The area is: " << rad;
}

float circarea(float x) {

    const float PI = 3.14;

    return PI * x * x;
}