#include <iostream>
#include <cmath>

int main() {
    int x1, y1, x2, y2;

    std::cin >> x1 >> y1;

    std::cin >> x2 >> y2;

    int dx = std::abs(x1 - x2);
    int dy = std::abs(y1 - y2);
    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
