#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class time {
private:
    int hour, min, sec;
public:
    time() : hour(0), min(0), sec(0)
    {   /* */   }

    time(int x1, int x2, int x3) {
        hour = x1;
        min = x2;
        sec = x3;
    }

    void cout_data() {
        cout << "Your time: " << hour << ":" << min << ":" << sec << endl;
    }

    void sum(time, time);

    void check() { // А почему бы не ввести проверку, чисто для себя. Типа если при сложении минут или секунд
        // больше 60, то вычитаем 60 и прибавляем большему разрядую. А что, могу позволить
        do {
            if (hour >= 12)
                hour = hour - 12;
            if (min >= 60) {
                min = min - 60;
                hour++;
            }
            if (sec >= 60) {
                sec = sec - 60;
                min++;
            }
        } while (hour >= 12 && min >= 60 && sec >= 60);
    }

};

void time::sum(time t1, time t2) {
    hour = t1.hour + t2.hour;
    min = t1.min + t2.min;
    sec = t1.sec + t2.sec;
}

int main()
{
    time t1 = { 1, 23, 40 };
    time t2 = { 9, 11, 20 };
    time t3;

    t1.cout_data();
    t2.cout_data();

    t3.sum(t1, t2);
    t3.check();
    t3.cout_data();


}
