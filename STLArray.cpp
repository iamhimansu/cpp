#include <iostream>
#include <array>

int main() {

    const int size = 10;

    std::array<int, size> array{}; //array can be initialized via this also

    std::array<int, size> array1{11, 22, 33, 44, 55}; //array can be initialized via this also
    std::array<int, size> array2{1, 2, 3, 4, 5}; //array can be initialized via this also

    //Fill array with default value
    array.fill(10);

    for (int i: array) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    /**
     * .front()
     * gives the first element in the array
     */
    std::cout << "Filling with table of 11" << std::endl;

    for (int i = 0; i < size; ++i) {
        array[i] = (i + 1) * 11;
    }

    std::cout << "Leader is :" << array.front() << std::endl;

    /**
     * .back()
     * Gives the last element in the array
     */
    std::cout << "Follower is :" << array.back() << std::endl;

    /**
     * .at()
     * Gives the element at a specific index
     */
    std::cout << "Element at 8th index is: " << array.at(8) << std::endl;

    /**
     * .swap()
     * Swaps two arrays of same length and same type
     */
    array1.swap(array2);

    std::cout << "Swapping array1 with array2: " << std::endl;
    std::cout << "Array1: " << std::endl;
    for (auto i: array1) {
        std::cout << i;
    }
    std::cout << std::endl;
    std::cout << "Array2: " << std::endl;
    for (auto i: array2) {
        std::cout << i;
    }
}