#include <iostream>

long long unsigned sumOfDigits(long long int x) {
    long long unsigned int unitPlace{1}, totalDigits{0}, sum{0}, digit{0};

    for (; (x / unitPlace) > 0; unitPlace *= 10, totalDigits++);

    x *= 10;

    for (; unitPlace > 1; unitPlace /= 10) {
        digit = x / unitPlace;
        x = x - (digit * unitPlace);
        sum += digit;
    }

    return sum;
}

int main() {

    long long int x{0};

    std::cout << "Please enter a number to find the length of the digits" << std::endl;

    std::cin >> x;

    std::cout << sumOfDigits(x) << std::endl;
}