#include <iostream>
#include <cmath>

int main() {
    int n, m;

    std::cin >> n >> m;

    int days = (int)std::ceil((double)m / n);

    std::cout << days << std::endl;

    return 0;
}
