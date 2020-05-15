#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class angle {
private:
    int grLa;
    float minLa; 
    char chLa; 
public:

    angle() : grLa(0), minLa(0), chLa(0)
    {    /*   */    }

    void cin_data(int x, float y, char z) {

        grLa = x;
        minLa = y;
        chLa = z;

    }

    void cout_data() {
        cout << grLa << '\xF8' << minLa << "' " << chLa << " ";
    }

};

int main()
{
    int gr = 0;
    float min = 0;
    char ch = ' ';

    angle la, lo;

    while (1) {
        
        cout << "Enter your latitude: ";
        cin >> gr >> min >> ch;
        la.cin_data(gr, min, ch);

        cout << "Enter your longitude: ";
        cin >> gr >> min >> ch;
        lo.cin_data(gr, min, ch);

        cout << "Your latitude: ";
        la.cout_data();
        cout << endl;
        cout << "Your latitude: ";
        lo.cout_data();

        cout << endl << endl;

        cout << "Do you whant next? (y/n):  ";
        cin >> ch;
        
        if (ch == 'y')
            cout << "You are next" << endl << endl;
        else
            return 0;

    }
}