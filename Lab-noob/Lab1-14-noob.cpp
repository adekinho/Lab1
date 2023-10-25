#include <iostream>

int main() {
    int lesson_number;

    std::cin >> lesson_number;

    int start_hour = 9;
    int start_minute = 0;

    int lesson_duration = 45;

    int short_break = 5;
    int long_break = 15;

    int total_minutes = start_minute + (lesson_number - 1) * (lesson_duration + short_break);
    total_minutes += (lesson_number - 1) / 2 * (long_break - short_break);
    
    int end_hour = start_hour + total_minutes / 60;
    int end_minute = total_minutes % 60;

    std::cout << end_hour << " " << end_minute << std::endl;

    return 0;
}
