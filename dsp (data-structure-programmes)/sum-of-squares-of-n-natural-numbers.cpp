#include <iostream>

int sumOfSquaresOfNNaturalNumbers(int x) {

    if (x <= 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }

    return x * x + sumOfSquaresOfNNaturalNumbers(x - 1);
}

int main() {
    long long int x{0};
    std::cout << "Please Enter N to find sum of squares till N" << std::endl;
    std::cin >> x;
    std::cout << "Sum of squares till " << x << " is: " << sumOfSquaresOfNNaturalNumbers(x);
    return EXIT_SUCCESS;
}