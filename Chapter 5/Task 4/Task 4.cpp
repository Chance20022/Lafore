#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

bool check(Distance d1, Distance d2) {
	if (d1.feet == d2.feet && d1.inches == d2.inches) {
		cout << d1.feet << " " << d1.inches << " = " << d2.feet << "." << d2.inches;
		return true;
	}
	return false;
}

Distance oper(Distance, Distance);

int main()
{
	Distance d1, d2;
	char ch;

	cout << "1) Enter the number of pounds and inches: ";
	cin >> d1.feet >> ch >> d1.inches;
	cout << "2) Enter the number of pounds and inches: ";
	cin >> d2.feet >> ch >> d2.inches;

	if (check(d1, d2) == true)
		return 0;

	d1 = oper(d1, d2);

	cout << "1) Largest numbers: " << d1.feet << "." << d1.inches;

	return 0;
}

Distance oper(Distance x, Distance y) {

	Distance answer = {0 , 0.0};

	if (x.feet > y.feet)
		answer.feet = x.feet;
	else
		answer.feet = y.feet;
	if (x.inches > y.inches)
		answer.inches = x.inches;
	else
		answer.inches = y.inches;
	return answer;
}
