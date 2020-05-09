#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class time {
private:
    int hour, min, sec;
public:
    time() : hour(0), min(0), sec(0)
    {    /*   */    }

    time (int x, int y, int z) : hour(x), min(z), sec(z)
    {    /*   */    }

    time add(time x) {
        
        time temp;
        temp.hour = hour + x.hour;
        temp.min = min + x.min;
        temp.sec = sec + x.sec;

        return temp;
    }

    void display() {
        cout << "Your number: " << hour << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    time t1(11, 22, 45);
    t1.display();
    time t2(2, 21, 33);
    t2.display();
    time t3 = t1.add(t2);
    t3.display();
}
