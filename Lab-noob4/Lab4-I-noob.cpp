#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> array(N);

    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }

    // Store the last element to be moved to the beginning
    int lastElement = array[N - 1];

    // Shift elements to the right
    for (int i = N - 1; i >= 1; i--) {
        array[i] = array[i - 1];
    }

    // Place the last element at the beginning
    array[0] = lastElement;

    for (int i = 0; i < N; i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}
