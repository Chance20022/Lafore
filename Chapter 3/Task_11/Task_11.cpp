#include <iostream>

// Сложно, завтра выпилю

using namespace std;

int main()
{
	int pounds = 0, shillings = 0, pence = 0;
	int pound2 = 0, shillings2 = 0, pence2 = 0;
	char answer = ' ', op = ' ';

	while (true) {
		cout << "Enter the first amount: ";
		cin >> pounds >> shillings >> pence;
		cout << "Enter your operation: ";
		cin >> op;
		cout << "Enter the second amount: ";
		cin >> pound2 >> shillings2 >> pence2;

		switch (op) {
		case '+':
			pence = pence + pence2;
			shillings = (pence / 12) + shillings + shillings2;
			pounds = (shillings / 20) + pounds + pound2;
			pence = pence % 12;
			shillings = shillings % 20;
			break;
		case '-':
			pence = pence - pence2;
			shillings = (pence / 12) - shillings - shillings2;
			pounds = (shillings / 20) - pounds - pound2;
			pence = pence % 12;
			shillings = shillings % 20;
			break;
		case '*':
			pence = pence + pence2;
			shillings = (pence / 12) * shillings * shillings2;
			pounds = (shillings / 20) * pounds * pound2;
			pence = pence % 12;
			shillings = shillings % 20;
			break;
		}

		cout << "Your amount: " << pounds << "." << shillings << "." << pence << endl;

		cout << "Do you want to next? (y/n) ";
		cin >> answer;
		if (answer == 'n') {
			return 0;
		}
		else if (answer == 'y')
			cout << "You are next." << endl;
		else {
			cout << "Error!" << endl;
		}
	}
}
