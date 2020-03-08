#include <iostream>

using namespace std;

int main() {
    double NewPounds, shillings, pence;

    cin >> NewPounds;

    shillings = NewPounds - static_cast<int>(NewPounds); // отсекаю франки, так как они не меняются
    shillings = shillings * 2.4; /*Остаются пенси и я перевожу их в старую денежную систему. 
                 В новой денежной системе 1 фунт равен 100 пенсам, а в старой системе 1 фунт = 20х12 = 240
                 По другому можно понять, что старая денежная реформа в 2.4 меньше, чем новая. В данном случае,
                 я перевожу из новых в старые пенси, значит мне нужно умножить на 2.4*/
    shillings = (shillings / 12) * 100; // как мы знаем из 10 задания, пенси не могут быть бльше 12, потому что дальше по идут шиллинги
                // Поэтому мы должны узнать, сколько шиллингов в пенси. Т.е делить на 12
    pence = shillings - static_cast<int>(shillings);
    pence = 12 * pence;
   
    cout << "Pounds: " << static_cast<int>(NewPounds) << " shillings: " << static_cast<int>(shillings) 
        << " pence " << static_cast<int>(pence);


    return 0;
}