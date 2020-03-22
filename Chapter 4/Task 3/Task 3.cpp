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
    Volume volume;
}
