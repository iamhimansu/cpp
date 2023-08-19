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
     *  1 2 3 4   8 7 6 5   9 10 11 12   16 15 14 13
     */

    for (auto &i: array) {
        if (reverse) {
            for (int j = columns - 1; j >= 0; --j) {
                std::cout << i[j] << " ";
            }
            reverse = false;

        } else {
            for (int j = 0; j < columns; ++j) {
                if (j == columns - 1) {
                    reverse = true;
                }
                std::cout << i[j] << " ";
            }
        }
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}
