#include <iostream>

class tollBoth {
private:
    unsigned int count;
    double sum;
public:
    tollBoth() : count(0), sum(0.0)
    {    /*   */    }

    void payingCar() {
        count++;
        sum += 0.50;
    }

    void nopayCar() {
        count++;
    }

    void display() {
        std::cout << "Daily totals: " << count << " cars and " << sum << "money";
    }
};

int main()
{
    char ch;
    tollBoth t;

    std::cout << "If you will want to leave tap any key." << std::endl;

    while (1) {

        std::cout << "Car will pay? (y/n): ";
        std::cin >> ch;

        if (ch == 'y')
            t.payingCar();
        else if (ch == 'n')
            t.nopayCar();
        else {
            t.display();
            return 0;
        }
    }
}
