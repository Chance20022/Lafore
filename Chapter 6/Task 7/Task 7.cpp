#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class angle {
private:
    int grLo; //долгота
    int grLa; //широта
    float minLo; //долгота
    float minLa; //ширина
    char chLo; //долгота
    char chLa; // ширина
public:

    angle() : grLo(0), grLa(0), minLo(0), minLa(0), chLo(0), chLa(0)
    {    /*   */    }

    void cin_La(int x, float y, char z) {

        grLa = x;
        minLa = y;
        chLa = z;

    }

    void cin_Lo(int x, float z, char c) {

        grLo = x;
        minLo = z;
        chLo = c;

    }

    void cout_data() {
        cout << "Your latitude and longitude: " << grLa << '\xF8' << minLa << "' " << chLa << ", " << grLo << '\xF8' << minLo << "' " << chLo << endl << endl;
    }

};

int main()
{
    int gr = 0;
    float min = 0;
    char ch = ' ';

    angle a;

    while (1) {
        
        cout << "Enter your latitude: ";
        cin >> gr >> min >> ch;
        a.cin_La(gr, min, ch);

        cout << "Enter your longitude: ";
        cin >> gr >> min >> ch;
        a.cin_Lo(gr, min, ch);
        a.cout_data();

        cout << "Do you whant next? (y/n):  ";
        cin >> ch;
        
        if (ch == 'y')
            cout << "You are next" << endl << endl;
        else
            return 0;

    }
}