#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> array(N);

    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }

    for (int i = 0; i < N - 1; i += 2) {
        // Swap elements at positions i and i + 1
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }

    for (int i = 0; i < N; i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}
