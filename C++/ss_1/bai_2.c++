#include <iostream>
#include <vector>
using namespace std;

// Hàm để xoay ma trận theo chiều kim đồng hồ
void rotateMatrix(vector<vector<int>>& matrix, int n, int m) {
    vector<vector<int>> rotated(m, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rotated[j][n - i - 1] = matrix[i][j];
        }
    }
    matrix = rotated;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        rotateMatrix(matrix, n, m);

        for (const auto& row : matrix) {
            for (const auto& elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
