#include <iostream>

int main() {
    int k;
    std::cin >> k;

    for (int n = 1; n <= k; n++) {
        if (k % n == 0) {
            int m = k / n;
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;

    return 0;
}
