#include <iostream>
#include <process.h>

using std::cout;
using std::cin;
using std::endl;

const int size = 12;

int foobi(int mas[], int numb) {

	int start = 0;
	int end = size - 1;
	int ave = end / 2;

	while (mas[start + 1] != mas[end]) {
		if (numb == mas[0]) {
			return 1; //отдельный случай, если число ровняется первому элементу массива
		}
		else if (numb < mas[ave]) {
			end = ave;
		}
		else if (numb > mas[ave]) {
			start = ave;
		}
		else if (numb == mas[ave]) {
			return ave + 1; // +1 потому что в программе элементы в массиве начинаются считаться с 0, а нужно, чтобы с единицы
		}
		ave = (end + start) / 2;
	}

	return end + 1; // это единственный возможный вариант, поэтому написал отдельно. Он сработает в тот момент, когда цикл прекратится 

}

int main()
{
	int mas[size] = { 1, 4, 5, 7, 10, 11, 16, 21, 22, 32, 44, 50 };
	int numb = 0;

	cin >> numb;

	int answer = foobi(mas, numb);

	cout << "The " << numb << " is " << answer;

	return 0;

}