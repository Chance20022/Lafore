#include <iostream>

using namespace std;

// 1 shillings - 12 pence
// 1 pounds - 20 shillings

int main()
{
	int pounds = 0, shillings = 0, pence = 0;
	int pound2 = 0, shillings2 = 0, pence2 = 0;
	int counter = 2;

	cout << "Enter the first amount: ";
	cin >> pounds >> shillings >> pence;
	cout << "Enter the second amount: ";
	cin >> pound2 >> shillings2 >> pence2;

	pence = pence + pence2;
	shillings = (pence / 12) + shillings + shillings2;
	pounds = (shillings / 20) + pounds + pound2;
	pence = pence % 12;
	shillings = shillings % 20;
	
	cout << "Your amount: " << pounds << "." << shillings << "." << pence;
}
