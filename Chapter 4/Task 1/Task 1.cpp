#include <iostream>

using namespace std;

struct phone
{
    int CityCode = 0;
    int stationNum = 0;
    int numberAb = 0;

};

int main()
{
    phone phone1 = { {2290}, {9800}, {8371} };
    phone phone2;

    cout << "Enter the city code, station number and subscriber number: " << endl;

    cin >> phone2.CityCode >> phone2.stationNum >> phone2.numberAb;

    cout << "My number (" << phone1.CityCode << ") " << phone1.numberAb << "-" << phone1.numberAb << endl;
    cout << "My number (" << phone2.CityCode << ") " << phone2.numberAb << "-" << phone2.numberAb << endl;

}
