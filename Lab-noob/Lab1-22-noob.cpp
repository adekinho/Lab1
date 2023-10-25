#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    int max_number = a - (a - b) * (a < b);

    std::cout << max_number << std::endl;

    return 0;
}
