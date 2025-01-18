#include <iostream>
using namespace std;

const int MAX = 100; 
int matrix[MAX][MAX];
int result[MAX * MAX]; 


void rotateMatrixClockwise(int n, int m, int &resultSize) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    resultSize = 0;

    while (top <= bottom && left <= right) {
   
        for (int i = left; i <= right; i++) {
            result[resultSize++] = matrix[top][i];
        }
        top++;


        for (int i = top; i <= bottom; i++) {
            result[resultSize++] = matrix[i][right];
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result[resultSize++] = matrix[bottom][i];
            }
            bottom--;
        }


        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result[resultSize++] = matrix[i][left];
            }
            left++;
        }
    }
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int n, m;
        cin >> n >> m; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }


        int resultSize;
        rotateMatrixClockwise(n, m, resultSize);


        for (int i = 0; i < resultSize; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
