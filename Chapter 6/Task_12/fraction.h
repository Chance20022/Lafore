#pragma once
#include <iostream>
#include <iomanip>

class fraction {
private:
    int num, den;
public:
    fraction() : num(0), den(0)
    {    /*   */    }

    fraction(int tx, int th) : num(tx), den(th)
    {    /*   */    }

    fraction fadd(fraction x) {
        fraction temp;

        temp.num = (num * x.den) + (x.num * den);
        temp.den = den * x.den;

        return temp;
    }
    fraction fsub(fraction x) {
        fraction temp;

        temp.num = (num * x.den) - (x.num * den);
        temp.den = den * x.den;

        return temp;
    }
    fraction fmul(fraction x) {
        fraction temp;

        temp.num = num * x.num;
        temp.den = den * x.den;

        return temp;
    }
    fraction fdiv(fraction x) {
        fraction temp;

        temp.num = num * x.den;
        temp.den = den * x.num;

        return temp;
    }

    void display() {
        int count = 0;
        int countx = num; //числитель

        while (countx / 10 != 0) {
            countx = countx / 10;
            count++;
        }

        countx = den;

        while (countx / 10 != 0) {
            countx = countx / 10;
            count++;
        }

        count++;
        count = 7 - count;

        for (int i = 0; i < count; i++) {
            std::cout << " ";
        }

        std::cout << num << "/" << den;
        
    }

    void lowterms() {
        long tnum, tden, temp, gcd;
        tnum = labs(num);
        tden = labs(den);
        if (tden == 0) {
            std::cout << "Invalid denominator";
            exit(1);
        }
        else if (tnum == 0) {
            num = 0;
            den = 1;
            return;
        }

        while (tnum != 0) {
            if (tnum < tden) {
                temp = tnum;
                tnum = tden;
                tden = temp;
            }
            tnum = tnum - tden;
        }
        gcd = tden;
        num = num / gcd;
        den = den / gcd;
    }
};