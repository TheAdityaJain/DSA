#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    // Input the matrix
    vector<vector<int>> matrix(R, vector<int>(C));
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> matrix[i][j];
        }
    }

    int Q;
    cin >> Q;

    // Process each query
    while (Q--) {
        int X, Y, K;
        cin >> X >> Y >> K;

        // Calculate the maximum possible half-side length of the square
        int maxHalfSide = min({X, Y, R - 1 - X, C - 1 - Y});

        int maxArea = 0;
        int blackCells = 0;

        // Iterate through possible square sizes
        for (int halfSide = 0; halfSide <= maxHalfSide; ++halfSide) {
            // Calculate the bounds of the current square
            int top = X - halfSide;
            int bottom = X + halfSide;
            int left = Y - halfSide;
            int right = Y + halfSide;

            // Count black cells added in the current layer
            for (int i = top; i <= bottom; ++i) {
                blackCells += matrix[i][left]; // Left edge
                if (right != left) {
                    blackCells += matrix[i][right]; // Right edge
                }
            }
            for (int j = left + 1; j < right; ++j) {
                blackCells += matrix[top][j]; // Top edge
                if (bottom != top) {
                    blackCells += matrix[bottom][j]; // Bottom edge
                }
            }

            // Update maxArea if the square is valid
            if (blackCells <= K) {
                maxArea = (2 * halfSide + 1) * (2 * halfSide + 1); 
            } else {
                break; // No need to check larger squares
            }
        }

        cout << maxArea << endl;
    }

    return 0;
}
