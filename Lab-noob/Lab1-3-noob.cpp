#include <iostream>

int main() {
    int N, K;
    
    // Ввод количества школьников и яблок
    std::cin >> N >> K;

    // Вычисление количества яблок на каждого школьника
    int apples_per_student = K / N;

    // Вывод результата
    std::cout << apples_per_student << std::endl;

    return 0;
}