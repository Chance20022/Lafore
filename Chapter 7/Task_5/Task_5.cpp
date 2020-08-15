#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class fraction {
private:
    int num, den;
public:

    fraction() : num(0), den(0)
    {   /*   */   }

    void cin_data(int a, int b) {
        num = a;
        den = b;
    }

    void cout_data() {
        cout << num << "/" << den;
    }

    void ave_add(fraction frac); 
    void average(int i);
    
};

int main()
{
    int a, b, count = 0;
    char ch;
    const int MAX = 20;
    fraction fr[MAX];
    fraction ave;

    for (int i = 0; i < MAX; i++) {
        cout << "Enter your fraction: ";
        cin >> a >> ch >> b;
        fr[i].cin_data(a, b);
        count++;
        cout << "Do you want to next?: ";
        cin >> ch;
        if (ch == 'n') { break; }
    }

    for (int i = 0, z = 0; i < count; i++) {
        fr->ave_add(fr[z++]);
    }

    fr->average(count);

    cout << "Your answer: ";
    fr[0].cout_data();

    return 0;
}

void fraction::ave_add(fraction frac) {
    num = (num * frac.den) + (den * frac.num);
    den = den * frac.den;
}

void fraction::average(int i) {
    num = num / i;
    den = den / i;
}