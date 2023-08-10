#include <iostream>
/**
 * Sum of N natural numbers using recursion
 * @param x
 * @return
 */
long long int sumOfNNaturalNumbers(long long int x) {
    if (x < 0){
        return '\0';
    }
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    return x + sumOfNNaturalNumbers(x - 1);
}

int main() {
    long long int x{0};
    std::cout << "Please Enter N to find sum till N" << std::endl;
    std::cin >> x;
    std::cout << "Sum till " << x << " is: " << sumOfNNaturalNumbers(x);
    return EXIT_SUCCESS;
}