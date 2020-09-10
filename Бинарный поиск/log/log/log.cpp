#include <iostream>

float log(int num) {

    int counter = 0;
    float count = num;

    for (int i = num; count > 1; i--){
        count = count / 2;
        counter++;
    }

    if (count == 1)
        return counter;
    else {
        return count;
    }
}

int main()
{
    int log1 = 0;

    std::cout << "Your log: ";
    std::cin >> log1;
    std::cout << "Answer: " << log(log1);

    return 0;
}