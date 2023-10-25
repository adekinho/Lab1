#include <iostream>

int main() {
    int a, b, n;

    // Ввод стоимости одного пирожка в рублях и копейках, а также количества пирожков
    std::cin >> a >> b >> n;

    // Вычисление общей стоимости в копейках
    int total_price_in_kopecks = (a * 100 + b) * n;

    // Вычисление рублей и копеек
    int total_rubles = total_price_in_kopecks / 100;
    int total_kopecks = total_price_in_kopecks % 100;

    // Вывод результата
    std::cout << total_rubles << " " << total_kopecks << std::endl;

    return 0;
}
