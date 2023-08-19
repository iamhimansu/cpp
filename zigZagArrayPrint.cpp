#include <iostream>

int main() {

    /**
     * Note that this will only work for increasing numbers in matrix
     */
    bool reverse = false;
    int n{0};
    std::cout << "ENTER NUMBER FOR mxn MATRIX: " << std::endl;
    std::cin >> n;
    int array[n][n];

    std::cout << "ENTER NUMBER FOR THE MATRIX: " << std::endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int k;
            std::cin >> k;
            array[i][j] = k;
        }
    }
    /**
     *  1 2 3 4   8 7 6 5   9 10 11 12   16 15 14 13
     */

    for (auto &i: array) {
        if (reverse) {
            reverse = false;
            for (int j = n - 1; j >= 0; --j) {
                std::cout << i[j] << " ";
            }
        } else {
            for (int j = 0; j < n; ++j) {
                if ((j + 1) % n == 0) {
                    reverse = true;
                }
                std::cout << i[j] << " ";
            }
        }
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}
