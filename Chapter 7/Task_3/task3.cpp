#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Distance {
private:
    int feet;
    double inches;
public:

    Distance() : feet(0), inches(0)
    {    /*   */    }

    void add(int i, double d) {
        feet = i;
        inches = d;
    }

    void display() {
        cout << "The feet: " << feet << endl;
        cout << "The inches: " << inches << endl;
    }

    void average(Distance d);
    void aver_div(int i);
    void div_dist();

};

int main()
{
    int feet;
    double inches;
    char answer; 
    int i = 0; // счётчик
    Distance dis[100];
    Distance ave; // среднее значение

    cout << "Enter the feet and the inches." << endl;

    for ( ; i < 100; i++) {
        cout << "The feet: "; cin >> feet;
        cout << "The inches: "; cin >> inches;
        dis[i].add(feet, inches);

        cout << "Do you want to next?";
        cin >> answer;
        if (answer == 'n')
            break;
    }

    for (int z = 0; z < i; z++) {
        ave.average(dis[z]);
    }

    ave.aver_div(i); //деление на среднее число
    ave.div_dist(); //выделение целой части
    ave.display();

}

void Distance::average(Distance d) {
    feet = feet + d.feet;
    inches = inches + d.inches;
    while (inches >= 12) {
        inches -= 12;
        feet++;
    }   
}

void Distance::aver_div(int i) {
    feet = int(feet / i);
    inches = inches / i;
}

void Distance::div_dist() {
    double d = feet + inches / 12.0;
    inches = (d - feet) * 12.0;
}
