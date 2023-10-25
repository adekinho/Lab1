#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> array(N);

    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }

    int count = 0;

    for (int i = 1; i < N; i++) {
        if (array[i] > array[i - 1]) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}
