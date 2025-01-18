#include <iostream>

using namespace std;

int** createMatrix(int n, int m) {
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }
    return matrix;
}

void deleteMatrix(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int** rotateMatrixClockwise(int** matrix, int n, int m) {
    int** rotatedMatrix = createMatrix(m, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotatedMatrix[j][n - i - 1] = matrix[i][j];
        }
    }
    return rotatedMatrix;
}

int main() {
    int T;
    cout << " ";
    cin >> T;

    while (T--) {
        int n, m;
        cout << "";
        cin >> n >> m;
        int** matrix = createMatrix(n, m);

        cout << "\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int** rotatedMatrix = rotateMatrixClockwise(matrix, n, m);
        cout << "\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << rotatedMatrix[i][j] << " ";
            }
            cout << endl;
        }

        deleteMatrix(matrix, n);
        deleteMatrix(rotatedMatrix, m);
    }

    return 0;
}
