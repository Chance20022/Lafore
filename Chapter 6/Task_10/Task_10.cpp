#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class counter {
private:
    static int count;
    int x;
public:
    counter() {
        count++;
        x = count;
    }

    void cout_data() {
        cout << x << endl;
    }
};

int counter::count = 0;

class angle {
private:
    int grLa; 
    float minLa; 
    char chLa; 
public:

    angle() : grLa(0), minLa(0), chLa(0)
    {    /*   */    }

    void cin_data() {

        cin >> grLa >> minLa >> chLa;

    }

    void cout_data() {
        cout << grLa << '\xF8' << minLa << "' " << chLa << " ";
    }

};

class ship {
private:
    angle a1, a2; // долгота и ширина
    counter c;
public:

    void cin_data() {
        c.cout_data();
        cout << "Enter your latitude: ";
        a1.cin_data();
        cout << "Enter your longitude: ";
        a2.cin_data();
    }

    void display() {
        c.cout_data();
        a1.cout_data();
        a2.cout_data();
    }


};

int main()
{
    ship s1, s2, s3;

    cout << "The ship number ";
    s1.cin_data();
    cout << endl;
    
    cout << "The ship number ";
    s2.cin_data();
    cout << endl;

    cout << "The ship number ";
    s3.cin_data();
    cout << endl;
    cout << endl;


    cout << "The ship number ";
    s1.display();
    cout << endl << endl;

    cout << "The ship number ";
    s2.display();
    cout << endl << endl;

    cout << "The ship number ";
    s3.display();
    cout << endl << endl;

}
