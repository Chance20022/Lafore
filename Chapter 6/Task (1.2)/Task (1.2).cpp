#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Int {
private:
	int inte;
public:

	Int() : inte(0){}

	Int(int x){
		inte = x;
	}

	void sum(Int x1, Int x2) {
		
		inte = x1.inte + x2.inte;

	}

	void cout_data() {
		cout << "Your number: " << inte;
	}

};

int main()
{
	Int int1(10);
	Int int2(14);
	Int int3;

	int3.sum(int1, int2);

	int3.cout_data();
}
