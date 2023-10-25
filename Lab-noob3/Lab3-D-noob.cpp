#include <iostream>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n, k;
    std::cin >> n >> k;

    int result = factorial(n) / (factorial(k) * factorial(n - k));

    std::cout << result << std::endl;

    return 0;
}
