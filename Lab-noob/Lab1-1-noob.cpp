#include <iostream>
#include <cmath>

int main() {
    int a, b;
    
    std::cin >> a >> b;

    double hypotenuse = sqrt(a * a + b * b);

    std::cout << hypotenuse << std::endl;

    return 0;
}
