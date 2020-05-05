#include <iostream>
#include <istream>

using std::cout;
using std::cin;
using std::endl;

class date {
public:            // Сделал публичными потому что по заданию не сказано их скрывать
    int month;
    int day;
    int year;
    char ch;

    date() : month(0), day(0), year(0), ch('9')
    {   /*  */   }
    
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class employee {
private:

	int numb;		// Номер сотрудника
	float money;	// Заработок
    date d;         // Дата прнятия на работу
    char chh;
    etype type;

public:

    void getemploy() { // ввод данных

        cout << "Enter information about the employee (his number, salary, his position and date ofemployment): " << endl << " --- ";
        
        cin >> numb >> money >> chh >> d.month >> d.ch >> d.day >> d.ch >> d.year;

    }

    void transform();

    void putemploy() {

        switch (type) {
        case laborer:
            cout << "Number op employee - " << numb << ", sakary - " << money << ", position - " << "laborer, " << "date - " << d.month << d.ch << d.day << d.ch << d.year << endl;
            break;
        case secretary:
            cout << "Number op employee - " << numb << ", sakary - " << money << ", position - " << "secretary, " << "date - " << d.month << d.ch << d.day << d.ch << d.year << endl;
            break;
        case manager:
            cout << "Number op employee - " << numb << ", sakary - " << money << ", position - " << "manager, " << "date - " << d.month << d.ch << d.day << d.ch << d.year << endl;
            break;
        case accountant:
            cout << "Number op employee - " << numb << ", sakary - " << money << ", position - " << "accountant, " << "date - " << d.month << d.ch << d.day << d.ch << d.year << endl;
            break;
        case executive:
            cout << "Number op employee - " << numb << ", sakary - " << money << ", position - " << "executive, " << "date - " << d.month << d.ch << d.day << d.ch << d.year << endl;
            break;
        case researcher:
            cout << "Number op employee - " << numb << ", sakary - " << money << ", position - " << "researcher, " << "date - " << d.month << d.ch << d.day << d.ch << d.year << endl;
            break;
        }

    }

};

int main()
{
    employee p[3];

    for (int i = 0; i < 3; i++) {
        p[i].getemploy();
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        p[i].transform();
    }

    for (int i = 0; i < 3; i++) {
        p[i].putemploy();
    }
}

void employee::transform() {

    switch (chh) {
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