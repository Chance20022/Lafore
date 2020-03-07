#include <iostream>

int main() {
    double new_funts , x1;
    //скопипастил

    std::cin >> new_funts;

    std::cout
        << "Old Funts: " << static_cast<int>(new_funts) << " Old Sillings: "
        << static_cast<int>(
        (new_funts - static_cast<double>(static_cast<int>(new_funts))) *
            20)
        << " Old Pens: ";
         x1 = static_cast<int>(
        (((new_funts - static_cast<double>(static_cast<int>(new_funts))) *
            20) -
            static_cast<int>((new_funts - static_cast<double>(
                static_cast<int>(new_funts))) *
                20)) *
            12);
         std::cout << x1;

    return 0;
}