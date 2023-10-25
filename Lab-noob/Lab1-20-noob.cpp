#include <iostream>

int main() {
    int number;

    std::cin >> number;

    int digit1 = number / 1000;
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;
    int digit4 = number % 10;

    int result = (digit1 == digit4 && digit2 == digit3) ? 1 : 37;

    std::cout << result << std::endl;

    return 0;
}
