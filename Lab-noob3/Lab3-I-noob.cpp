#include <iostream>
#include <iomanip>

int main() {
    int N;
    std::cin >> N;

    double sum = 1.0;

    double factorial = 1.0;
    int i = 1;

    while (i <= N) {
        factorial *= i;
        sum += 1.0 / factorial;
        i++;
    }

    std::cout << std::fixed << std::setprecision(5) << sum << std::endl; 

    return 0;
}
