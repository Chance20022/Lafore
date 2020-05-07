#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class ser_num {
private:
     static int serialnum;
public:

    ser_num() {
        serialnum++;
    }

    void cout_data() {
        cout << "My namber is: " << serialnum << endl;
    }

};

int ser_num::serialnum = 0;

int main()
{
    ser_num s1;
    s1.cout_data();
    ser_num s2;
    s2.cout_data();
    ser_num s3;
    s3.cout_data();

}
