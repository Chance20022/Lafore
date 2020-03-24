#include <iostream>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
    etype type;
    char ch;

    cout << "Enter the first letter post (laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> ch;

    switch (ch){
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

    switch (type) {
    case laborer:
        cout << "laborer";
        break;
    case secretary:
        cout << "secretary";
        break;
    case manager:
        cout << "manager";
        break;
    case accountant:
        cout << "accountant";
        break;
    case executive:
        cout << "executive";
        break;
    case researcher:
        cout << "researcher";
        break;
    }
}