#include <iostream>
#include <cmath>

int main() {

    long long x{0};
    int i{0}, dec{0};
    std::cout << "Please enter a binary number to get its decimal: " << std::endl;
    std::cin >> x;

    while (x) {
        dec += static_cast<int>(x % 2 * pow(2, i));
        x /= 10;
        i++;
    }
    std::cout << dec;
}