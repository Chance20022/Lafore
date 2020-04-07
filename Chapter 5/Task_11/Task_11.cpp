#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct sterling {
    int pence;
    int shilling;
    int pound;
};

sterling return1(sterling);
sterling addition(sterling, sterling);
void ciout(sterling);

int main()
{
    sterling s1, s2, s3;
    char ch = '.';

    cout << "1) Enter pound.shillings.pence: ";
    cin >> s1.pound >> ch >> s1.shilling >> ch >> s1.pence;
    cout << "2) Enter pound.shillings.pence: ";
    cin >> s2.pound >> ch >> s2.shilling >> ch >> s2.pence;

    s1 = return1(s1);
    s2 = return1(s2); //1

    s3 = addition(s1, s2); //2

    ciout(s3);
}

sterling return1(sterling x) {
    return x;
}

sterling addition(sterling s1, sterling s2) {
    s1.pence = s1.pence + s2.pence;
    s1.shilling = (s1.pence / 12) + s1.shilling + s2.shilling;
    s1.pound = (s1.shilling / 20) + s1.pound + s2.pound;
    s1.pence = s1.pence % 12;
    s1.shilling = s1.shilling % 20;

    return s1;
}

void ciout(sterling s3) {
    cout << "Your answer: " << s3.pound << "." << s3.shilling << "." << s3.pence;
}