#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class queue {
private:
    enum { MAX = 10 };
    int st[MAX];
    int head, tail;
public:
    queue() : head(-1), tail(0) {}
    void put(int var) {
        st[tail] = var;
        tail++;
    }
    int get() { 
        head++;
        return st[head];
    }
};

int main()
{
    queue qu1;

    qu1.put(11);
    qu1.put(22);
    cout << "1: " << qu1.get() << endl;
    cout << "2: " << qu1.get() << endl;
    qu1.put(33);
    qu1.put(44);
    qu1.put(55);
    qu1.put(66);
    cout << "3: " << qu1.get() << endl;
    cout << "4: " << qu1.get() << endl;
    cout << "5: " << qu1.get() << endl;
    cout << "6: " << qu1.get() << endl;

    return 0;
}