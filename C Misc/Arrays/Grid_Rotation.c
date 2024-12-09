#include <stdio.h>
#define rows 4
#define cols 4

void printMat(int row, int col, int mat[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to perform cyclic rotation of a matrix
void roateArr(int m, int n, int mat[rows][cols]) {
    int prev, curr, r = 0, c = 0; // Initialize variables for rotation

    // Loop to traverse each layer of the matrix
    while (r < m && c < n) {
        // If there is only one row or column left, no rotation is needed
        if (r + 1 == m || c + 1 == n) {
            break;
        }

        prev = mat[r + 1][c]; // Store the first element of the next row

        // Move elements of the top row one position to the right
        for (int i = c; i < n; i++) {
            curr = mat[r][i];
            mat[r][i] = prev;
            prev = curr;
        }
        r++; // Move to the next row

        // Move elements of the last column one position down
        for (int i = r; i < m; i++) {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--; // Reduce the column range

        // Move elements of the bottom row one position to the left
        if (r < m) {
            for (int i = n - 1; i >= c; i--) {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
            m--; // Reduce the row range
        }

        // Move elements of the first column one position up
        if (c < n) {
            for (int i = m - 1; i >= r; i--) {
                curr = mat[i][c];
                mat[i][c] = prev;
                prev = curr;
            }
            c++; // Move to the next column
        }
    }
}

int main() {
    // Initialize the matrix with predefined values
    int mat[rows][cols] = {{1, 2, 3, 4},
                           {2, 3, 4, 5},
                           {1, 6, 5, 6},
                           {0, 9, 8, 7}};

    printf("Grid before cyclic rotation: \n");
    printMat(rows, cols, mat); // Print the original matrix

    printf("\nGrid after cyclic rotation: \n");
    roateArr(rows, cols, mat); // Perform the rotation
    printMat(rows, cols, mat); // Print the rotated matrix

    return 0;
}
