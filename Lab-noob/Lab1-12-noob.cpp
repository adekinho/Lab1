#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int hours = n / 3600;
    int minutes = (n % 3600) / 60;
    int seconds = n % 60;

    std::cout << hours << ":";

    if (minutes < 10) {
        std::cout << "0";
    }
    std::cout << minutes << ":";

    if (seconds < 10) {
        std::cout << "0";
    }
    std::cout << seconds << std::endl;

    return 0;
}
