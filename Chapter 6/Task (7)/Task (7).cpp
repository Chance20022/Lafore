#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class angle {
private:
    int degrees;
    float min;
    char direction;
public:

    angle() : degrees(0), min(0), direction('Q')
    {   /*  */   }

    angle(int d, float m, char da)
    {
        degrees = d;
        min = m;
        direction = da;
    }

    void cin_coor() {
        cout << "The degrees: ";
        cin >> degrees;
        cout << "The minutes: ";
        cin >> min;
        cout << "Your direction: ";
        cin >> direction;
        cout << endl;
    }
    
    void cout_data(){
        cout << "You are have the next coordinates: " << degrees << '\xF8' << " " << min << " " << direction << endl << endl;
    }
};

int main()
{
    char choice;

    angle a(11, 3, 'W');
    a.cout_data();

    while (1) {

        a.cin_coor();
        a.cout_data();

        cout << "Do yoy want to next? (y/n): ";
        cin >> choice;

        if (choice == 'y') { cout << "You are next. " << endl << endl; }
        else { 

            cout << "You are leave" << endl;

            return 0; 
        }

    }

    return 0;

}
