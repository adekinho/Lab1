#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n) {
        sum += i * i;
        i++;
    }

    std::cout << sum << std::endl;

    return 0;
}
