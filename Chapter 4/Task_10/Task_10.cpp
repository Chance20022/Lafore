#include <iostream>

using namespace std;

struct sterling
{
    int pound, shillings, pence;
};

int main()
{
    sterling m = { {0}, {0}, {0} };
    double money = 0, mem = 0;

    cout << "Enter your money: ";
    cin >> money;

    m.pound = static_cast<int>(money); // Т.к. не меняются
    money = money - static_cast<int>(money); //отсекаю фунты, т.к. не нужны.
    money *= 100; // Избавляюсь от не целой части для удобного счёта
    money = money * 2.4; // Перевод новых пенсов в старые
    mem = money / 12; // Для подсчёта pence, т.к. дальше не получится с цифрами
    m.shillings = money / 12; // В 1 шиллинге 12 пенс. Узнаем сколько у нас шилингов
    mem = mem - static_cast<int>(mem); // вычитаем целую часть из шилингов для подсчёта пенсов
    m.pence = mem * 12; // в 1 шилинге 12 пенс

    cout << "You have: " << m.pound << "." << m.shillings << "." << m.pence;
    
}
