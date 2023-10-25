#include <iostream>

int main() {
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;

    std::cin >> hours1 >> minutes1 >> seconds1;

    std::cin >> hours2 >> minutes2 >> seconds2;

    int time1_in_seconds = hours1 * 3600 + minutes1 * 60 + seconds1;
    int time2_in_seconds = hours2 * 3600 + minutes2 * 60 + seconds2;

    int difference = time2_in_seconds - time1_in_seconds;

    std::cout << difference << std::endl;

    return 0;
}
