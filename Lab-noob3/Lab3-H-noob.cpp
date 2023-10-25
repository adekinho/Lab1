#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int sum = 0;
    int power_of_2 = 1;

    for (int i = 0; i <= N; i++) {
        sum += power_of_2;
        power_of_2 *= 2;
    }

    std::cout << sum << std::endl;

    return 0;
}
