#include <iostream>

class Int {
private:
    int i;
public:
    Int() : i(0)
    {   /*  */   }

    Int(int x) {
        i = x;
    }

    Int opl(Int x) {
        return i + x.i;
    }

    void cout_d() {
        std::cout << "Your answer: " << i;
    }
};

int main()
{
    Int x(1);
    Int y(5);
    Int z = x.opl(y);
    z.cout_d();
}

