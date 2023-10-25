#include <iostream>

int main() {
    int n, k;

    std::cin >> n >> k;

    int remainder = k % n;

    int students_with_less_apples = (remainder == 0) ? 0 : n - remainder;

    std::cout << students_with_less_apples << std::endl;

    return 0;
}
