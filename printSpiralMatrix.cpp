#include <iostream>
#include <vector>

using namespace std;

void printSpiralMatrix(vector<vector<int>>& matrix, int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Print rightmost column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Print bottom row (if it exists)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Print leftmost column (if it exists)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Spiral Matrix: ";
    printSpiralMatrix(matrix, rows, cols);
    cout << endl;

    return 0;
}
