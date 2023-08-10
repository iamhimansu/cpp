#include <iostream>

long long unsigned int dec2Bin(long long int x, long long unsigned int unitPlace = 1) {
    if (x <= 0) {
        return 0;
    }
//    std::cout << (unitPlace) << std::endl;
    return (unitPlace * (x % 2)) + dec2Bin(x / 2, unitPlace * 10);
}


int main() {
    int x{0};
    std::cout << "Please Enter number to find its binary" << std::endl;
    std::cin >> x;
    std::cout << "Binary of " << x << " is: " << dec2Bin(x);
    return EXIT_SUCCESS;
}