#include <iostream>+

using namespace std;

class Int {
private:
	int integ;
public:
	Int() : integ(0) {

	}

	void cin_data() {
		cout << "Enter your the integer number: "; cin >> integ;
	}

	void cout_data() {
		cout << "Your number is " << integ << endl;
	}

	void summ(Int, Int);

};
void Int::summ(Int int1, Int int2) {

	integ = int1.integ + int2.integ;

}

int main()
{
	Int int1, int2;

	int1.cin_data();
	int2.cin_data();

	cout << endl;

	int1.cout_data();
	int2.cout_data();

	cout << endl;

	Int int3;
	int3.summ(int1, int2);

	int3.cout_data();
}