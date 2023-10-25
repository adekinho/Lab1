#include <iostream>

int main() {
    int number;

    std::cin >> number;

    int tens_digit = (number / 10) % 10;

    std::cout << tens_digit << std::endl;

    return 0;
}
