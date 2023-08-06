#include <iostream>

void throwWithinFunction(int x){
    if (x == 0){
        throw std::runtime_error("Division by zero occurred within function!");
    }
}
int main() {

    try {
        std::cout << "Hello" << std::endl;
        const int i = 0;
        if (i == 0) {
            throwWithinFunction(i);
            throw std::runtime_error("Division by zero occurred in try n catch!");
        }
        int x = 5 / i;
    }
    catch (const std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}