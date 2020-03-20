#include <iostream>

using namespace std;

struct point {

	int x1 = 0, y1 = 0;
	int x2 = 0, y2 = 0;
	int x3 = 0, y3 = 0;

};

int main()
{
	point x, y;

	cout << "Enter coor point p1: ";

	cin >> x.x1 >> y.y1;

	cout << "Enter coor point p2: ";
	
	cin >> x.x2 >> y.y2;

	x.x3 = x.x1 + x.x2; y.y3 = y.y1 + y.y2;

	cout << "Coor points p1 + p2 = " << x.x3 << "." << y.y3;
}
