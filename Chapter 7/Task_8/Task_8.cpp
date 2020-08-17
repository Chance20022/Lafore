#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int LIMIT = 10;

class safearay {
private:
	int numbers[LIMIT];
public:

	void putnull() {
		for (int i = 0; i < LIMIT; i++) {
			numbers[i] = 0;
		}
	}

	void putel(int nu1, int nu2) {

		if (nu1 < 0) {
			cout << "You enter index < 0!" << endl;
		}
		else if (nu1 > LIMIT-1) {
			cout << "You enter index > " << LIMIT << endl;
		}
		else numbers[nu1] = nu2;
	}

	int getel(int num) {
		if (num < 0) {
			cout << "You enter index < 0!" << endl;
			return false;//Таким образом вызывем ошибку
		}
		else if (num > LIMIT-1) {
			cout << "You enter index > " << LIMIT << "!" << endl;
			return false; //Таким образом вызывем ошибку
		}
		else return numbers[num];
	}

};

int main()
{
	safearay sa1;
	sa1.putnull();
	int temp = 7654;
	sa1.putel(11, temp);
	temp = sa1.getel(11);
	cout << temp;
}