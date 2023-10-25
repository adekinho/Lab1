#include <iostream>

int main() {
    int N = 3, K = 14;

    int remaining_apples = K % N;

    std::cout << remaining_apples << std::endl;

    return 0;
}
