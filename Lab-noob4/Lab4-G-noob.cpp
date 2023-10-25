#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> array(N);

    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }

    for (int i = 0; i < N / 2; i++) {
        // Swap elements at positions i and N - i - 1
        int temp = array[i];
        array[i] = array[N - i - 1];
        array[N - i - 1] = temp;
    }

    for (int i = 0; i < N; i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}
