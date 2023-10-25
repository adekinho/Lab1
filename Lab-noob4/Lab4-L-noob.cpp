#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> heights(N);

    for (int i = 0; i < N; i++) {
        std::cin >> heights[i];
    }

    int PetyaHeight;
    std::cin >> PetyaHeight;

    int position = 1; // Initialize the position to 1

    // Find the position for Petya
    for (int i = 0; i < N; i++) {
        if (PetyaHeight <= heights[i]) {
            position = i + 1;
            break; // Stop when the correct position is found
        }
    }

    std::cout << position << std::endl;

    return 0;
}
