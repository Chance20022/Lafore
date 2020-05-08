#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class ship {
    static int ScountShip;
    int count;
    int degrees;
    float min;
    char direction;
public:

    ship() {
        ScountShip++;
        count = ScountShip;
        degrees = 0;
        min = 0;
        direction = ' ';
    }

    void cin_coor() {

        cout << "You are now entering ship information " << count << endl << endl;
        cout << "The degrees: ";
        cin >> degrees;
        cout << "The minutes: ";
        cin >> min;
        cout << "Your direction: ";
        cin >> direction;
        cout << endl;
    }

    void cout_data() {
        cout << "The " << count <<" ship have the next coordinates: " << degrees << '\xF8' << " " << min << " " << direction << endl << endl;
    }


};

int ship::ScountShip = 0;

int main()
{
    ship s1, s2, s3;

    s1.cin_coor();
    s2.cin_coor();
    s3.cin_coor();

    s1.cout_data();
    s2.cout_data();
    s3.cout_data();
}
