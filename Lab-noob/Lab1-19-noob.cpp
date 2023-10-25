#include <iostream>

int main() {
    int h, a, b;

    std::cin >> h >> a >> b;

    int days_to_reach_top = (h - a + a - b - 1) / (a - b) + 1;

    std::cout << days_to_reach_top << std::endl;

    return 0;
}
