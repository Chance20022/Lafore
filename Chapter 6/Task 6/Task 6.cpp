#include <iostream>
#include <istream>

using std::cout;
using std::cin;
using std::endl;

class date {
private:
    int month;
    int day;
    int year;
    char ch;
public:
    date() : month(0), day(0), year(0), ch('/')
    {   /*  */
    }
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class employee {
private:

	int numb;		// Номер сотрудника
	float money;	// Заработок
    date d;         // Дата прнятия на работу
    std::string type;
    char ch;

public:

    void getemploy() {
        cout << "Enter information about the employee (his number, salary, his position and date ofemployment): ";

        cin >> numb >> ch >> money >> ch >> type >> ch >> d.month ;
    }

};

int main()
{
    employee p[3];

    for (int i = 0; i < 3; i++) {
        p[i].getemploy();
    }
}
