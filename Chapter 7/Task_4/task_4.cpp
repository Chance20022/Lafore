#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void maxint(int num[], int size);

int main()
{
    // небольшая условность, написал в массиве 10, потому что так захотел и в задании точно не указано
    const int SIZE = 10;
    int number[SIZE];

    cout << "Enter numbers (max numers 10): " << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Your integer number: "; cin >> number[i];
    }

    maxint(number, SIZE);

    for (int i = 0; i < SIZE; i++) {
        if (i < 9) {
            cout << i + 1 << ".       " << number[i] << endl;
        }
        else {
            cout << i + 1 << ".      " << number[i] << endl;
        }
    }

    return 0;

}

void maxint(int num[], int size) {

    int temp = 0;

    for (int i = 0; i < size; i++) {
        for (int z = 0; z < size-1; z++) {
            if (num[z] > num[z+1]) {
                temp = num[z];
                num[z] = num[z+1];
                num[z+1] = temp;
            }
        }
    }
}
