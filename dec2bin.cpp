#include <iostream>

int main() {
    int x{0};

    std::cout << "Please enter a number to convert it to binary: " << std::endl;
    std::cin >> x;

    std::string bin{};

    if (x == 0) {
        bin.append("0");
    }

    while (x) {
        bin = std::to_string(x % 2).append(bin);
        x /= 2;
    }

    std::cout << bin;
}