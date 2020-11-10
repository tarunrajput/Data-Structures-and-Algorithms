#include <iostream>
#include <vector>
using namespace std;

// An Inplace function to rotate a N x N matrix by 90 degrees in clockwise direction
void rotate(vector<vector<int>> &matrix) {
    int N = matrix.size(), temp;

    for (int x = 0; x < N / 2; x++) {
        for (int y = x; y < N - x - 1; y++) {
            temp = matrix[x][y];
            matrix[x][y] = matrix[N - 1 - y][x];
            matrix[N - 1 - y][x] = matrix[N - 1 - x][N - 1 - y];
            matrix[N - 1 - x][N - 1 - y] = matrix[y][N - 1 - x];
            matrix[y][N - 1 - x] = temp;
        }
    }
}

// Function to print the matrix
void displayMatrix(vector<vector<int>> &matrix) {
    int N = matrix.size();
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%2d ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}

/* Driver program to test above functions */
int main() {
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};
    rotate(matrix);
    displayMatrix(matrix);

    return 0;
}
