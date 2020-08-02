//Данная программа перевораивает слово задом на перёд

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int count = 0;
const int max = 80;

char reversit(char re[]) {

    char temp = ' ';

    for (int i = 0; i < count/2; i++) {

        temp = re[i];
        re[i] = re[count - i];
        re[count - i] = temp;

    }

    return re[max];
}

int main() {
    char rev[80];

    cout << "Enter your word" << endl;

    for (int i = 0; i < max; i++) { //считываю какое-то слово или цифры

        rev[i] = _getche();

        if (rev[i] == 13 || rev[i] == '\n') {

            for (int z = max - count; i < max; i++)
                rev[z] = ' ';
            break;
        }

        count++;
    }

    count--;

    //отправляем в функцию массив, где будет происходить смена букв

    rev[max] = reversit(rev);

    cout << "Your sentence: ";

    for (int i = 0; i < count+1; i++) {

        cout << rev[i];

    }

    return 0;

}

