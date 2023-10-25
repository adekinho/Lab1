#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int result = 1;
    int power = 0;

    while (power < N) {
        result *= 2;
        power++;
    }

    std::cout << result << std::endl;

    return 0;
}
