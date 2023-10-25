#include <iostream>

int main() {
    int number;

    std::cin >> number;

    int last_digit = number % 10;

    std::cout << last_digit << std::endl;

    return 0;
}
