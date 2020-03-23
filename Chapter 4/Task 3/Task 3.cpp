#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Volume
{
    Distance length; // Длина
    Distance width; // Ширина
    Distance height; // Высота

};

int main()
{
    Volume volume = { {10,2.12}, {5,3.32}, {2,12} };

    float a1 = volume.length.feet + volume.length.inches / 12;
    float a2 = volume.width.feet + volume.width.inches / 12;
    float a3 = volume.height.feet + volume.height.inches / 12;

    cout << a1 * a2 * a3;
}