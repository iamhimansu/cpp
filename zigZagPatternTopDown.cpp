#include <iostream>

int main() {

    bool reverse = false;
    int rows{0}, columns{0};
    std::cout << "ENTER NUMBER OF ROWS: " << std::endl;
    std::cin >> rows;
    std::cout << "ENTER NUMBER OF COLUMNS: " << std::endl;
    std::cin >> columns;
    int array[rows][columns];
    std::cout << "ENTER rows x columns: " << std::endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            int k;
            std::cin >> k;
            array[i][j] = k;
        }
    }
    /**
     * 1 2 3 4
     * 5 6 7 8
     * 9 10 11 12
     * 13 14 15 16
     *
     * 1 5 9 13
     * 14 10 6 2
     * 3 7 11 15
     * 16 12 8 4
     */
    for (int column = 0; column < columns; ++column) {
        if (reverse) {
            for (int row = rows - 1; row >= 0; --row) {
                std::cout << array[row][column] << " ";
            }
            reverse = false;
        } else {
            for (int row = 0; row < rows; ++row) {
                if (row == rows - 1) {
                    reverse = true;
                }
                std::cout << array[row][column] << " ";
            }
        }
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}