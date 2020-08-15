#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
const int size = 18;

class money {
private:
    char stmoney[size];
    long double save[size];
    int twonum[2];
    int count = 0; //колличество символов 
public:

    void cin_money() {
        cin >> stmoney;
        for (int i = 0; i < size; i++) {//для того, чтобы определить, сколько символов записал пользователь для дальшейшего упрощения в коде
            if (stmoney[i] == 'M' || stmoney[i] == -52) { //все неиспользованные ячейки массива инициализирутся 'M', поэтому будет +1 до момента встречи с 'M'
                break;
            }
            else count++;
        }
    }

    void cout_data() {
        for (int i = 0, z = count - 2; i < count-4; i++) {
            cout << save[i];

            if (z <= -3) { goto g; }
            if (z % 3 == 0) { 
                cout << " "; 
                z = z - 3; 
            }
            g:
            z--;
            /* Объясню логику. Так как мы пишем слева на право, мы должны изначально просчитать, где будет нужный пробел.
            В начале будет ничего страшного, если мы напишем первый символ, но вот потом нужно будет узнать, когда нужно поставить пробел.
            Для этого я подумал и принял решение, что числа очень похожи, если рассматривать остаток. Т.е. 
            3/3 = 1/0
            4/3 = 0.3
            5/3 = 0.6
            6/3 = 0.0
            7/3 = 0.3
            8/3 = 0.6
            как видно, остатки повторяются, от этого и стоит отталкиваться, что я и сделал*/
        }

        cout << ".";

        for (int i = count - 3; i < count - 1; i++) {
            cout << save[i];
        }
    }

    void convert_money();
};

void _cout() {

}

int main()
{
    money m[size];
    char choice;
    int n = 0; // сколько всего в колличестве написал вариантов
    for (int i = 0; i < size; i++) {
        cout << "Enter your money: ";
        m[i].cin_money();
        n++;

        if (i == 17) {
            cout << "You enterd more than possible ( > 18 ).";
            break;
        }

        cout << "Do you wnat to next? (y/n): ";
        cin >> choice;
        if (choice == 'y') {  }
        else break;
    }

    for (int i = 0; i < n; i++) {
        m[i].convert_money();
    }

    for (int i = 0; i < n; i++) {
        m[i].cout_data();
        cout << endl;
    }

    return 0;

}

void money::convert_money() {
    for (int i = 0; i < count; i++) {
        switch (stmoney[i]){
        case '0':
            save[i] = 0;
            break;
        case '1':
            save[i] = 1;
            break;
        case'2':
            save[i] = 2;
            break;
        case'3':
            save[i] = 3;
            break;
        case'4':
            save[i] = 4;
            break;
        case'5':
            save[i] = 5;
            break;
        case'6':
            save[i] = 6;
            break;
        case'7':
            save[i] = 7;
            break;
        case'8':
            save[i] = 8;
            break;
        case'9':
            save[i] = 9;
            break;
        case'.':
            break;
        }
    }
};