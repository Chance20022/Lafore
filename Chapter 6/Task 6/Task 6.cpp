#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class date {
private:

	int month;
	int year;
	int day;

public:

	void getdate(int a, int b, int c) {

		day = b;
		month = a;
		year = c;

	}

	void showdate() {
		cout << " The employment date: " << month << "/" << day << "/" << year << endl << endl;
	}
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class employee {
private:

	int numb;
	float money;

public:

	date d;
	etype type;

	void getemploy() {
		cin >> numb >> money;
	}

	void position(char ch) {
		switch (ch) {
		case 'l':
			type = laborer;
			break;
		case 's':
			type = secretary;
			break;
		case 'm':
			type = manager;
			break;
		case 'a':
			type = accountant;
			break;
		case 'e':
			type = executive;
			break;
		case 'r':
			type = researcher;
			break;
		}
	}

	void display() {
		switch (type) {
		case laborer:
			cout << " The number:" << numb << endl <<" The salary: " << money << endl << " The position: laborer " << endl;
			break;
		case secretary:
			cout << " The number:" << numb << endl << " The salary: " << money << endl << " The position: secretary " << endl;
			break;
		case manager:
			cout << " The number:" << numb << endl << " The salary: " << money << endl << " The position: manager " << endl;
			break;
		case accountant:
			cout << " The number:" << numb << endl << " The salary: " << money << endl << " The position: accountant " << endl;
			break;
		case executive:
			cout << " The number:" << numb << endl << " The salary: " << money << endl << " The position: executive " << endl;
			break;
		case researcher:
			cout << " The number:" << numb << endl << " The salary: " << money << endl << " The position: researcher " << endl;
			break;
		}
	}

};

int main()
{
	int m, d, y;
	char ch;
	employee e[3];

	cout << "Enter the information about employes." << endl;

	for (int i = 0; i < 3; i++) {

		cout << "You enter the data of "<< i+1 << " employ." << endl << endl;

		cout << "Enter number and salary of employ: ";
		e[i].getemploy();

		cout << "Enter the position of employ: ";
		cin >> ch;
		e[i].position(ch);

		cout << "Enter employment date: ";
		cin >> m >> ch >> d >> ch >> y;  // Дата
		e[i].d.getdate(m, d, y); 
		cout << endl << endl;

	}

	cout << "You have the next employes: " << endl;

	for (int i = 0; i < 3; i++) {
		cout << "The " << i+1 << " employ" << endl << endl;
		e[i].display();
		e[i].d.showdate();
	}

	return 0;
}
