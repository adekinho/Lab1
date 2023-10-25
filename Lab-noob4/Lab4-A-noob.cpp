#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> array(N);

    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }

    for (int i = 0; i < N; i += 2) {
        std::cout << array[i] << " ";
    }

    return 0;
}
