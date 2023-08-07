#include <iostream>


void isNumberPowerOf2(int x) {
    if ((x - 1) & 1) {
        std::cout << "Number is power of 2";
    } else {
        std::cout << "Number is not the power of 2";
    }
}

int main() {

    int x{0};

    std::cout << "Please enter a number: ";

    std::cin >> x;

    isNumberPowerOf2(x);

    return EXIT_SUCCESS;
}