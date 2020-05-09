#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class date {
private:
	int day;
	int month;
	int year;
public:

	void getdate(int a, int b, int c) {

		day = b;
		month = a;
		year = c;

	}

	void showdate() {
		cout << "Your date: " << month << "/" << day << "/" << year;
	}
};

int main()
{
	int a, b, c;
	char ch;
	date d;

	cout << "Enter your date: ";
	cin >> a >> ch >> b >> ch >> c;

	d.getdate(a, b, c);
	d.showdate();


}
