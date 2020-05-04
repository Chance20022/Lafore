#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

class tollBooth {
private:
    unsigned int count_car;
    double cost;
public:
    tollBooth() : count_car(0), cost(0)
    {   /* */   }

    void payingCar() { // увеличивает на 0.50
        count_car++;
        cost = cost + 0.50;
    }

    void nopayCar() { //увеличивает кол-во машин, которые проехаи бесплатно
        count_car++;
    }

    void display() {
        cout << "tTotal cars drove: " << count_car << endl; // t две потому что в консоли не отображается первая буква
        cout << "Amount of revenue: " << cost << endl;
    }

};

int main()
{
    tollBooth toll;

    char choice = ' ';

    cout << "Hi, we are strat." << endl;
    cout << "q - conscientious drivers," << endl;
    cout << "e - unscrupulous drivers." << endl;
    cout << "If you will want to leave press ESC." << endl << endl;

    while (1){
        cout << "Did the driver pay? ";
        choice = _getche();

        cout << endl;

        if (choice == 27) {
            toll.display();
            cout << "You are exit";
            return 0;
        }

        switch (choice)
        {
        case 'q':
            toll.payingCar();
            break;
        case 'e':
            toll.nopayCar();
            break;
        default:
            cout << "Please enter the keys that ask you." << endl;
            break;
        }
    }

}