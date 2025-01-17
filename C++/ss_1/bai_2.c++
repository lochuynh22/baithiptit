#include <iostream>
using namespace std;

const int MAX = 100; // Giới hạn kích thước ma trận
int matrix[MAX][MAX]; // Ma trận đầu vào
int result[MAX * MAX]; // Mảng để lưu kết quả

// Hàm quay ma trận theo chiều kim đồng hồ
void rotateMatrixClockwise(int n, int m, int &resultSize) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    resultSize = 0;

    while (top <= bottom && left <= right) {
        // Duyệt từ trái sang phải trên hàng top
        for (int i = left; i <= right; i++) {
            result[resultSize++] = matrix[top][i];
        }
        top++;

        // Duyệt từ trên xuống dưới trên cột right
        for (int i = top; i <= bottom; i++) {
            result[resultSize++] = matrix[i][right];
        }
        right--;

        // Duyệt từ phải sang trái trên hàng bottom (nếu còn)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result[resultSize++] = matrix[bottom][i];
            }
            bottom--;
        }

        // Duyệt từ dưới lên trên trên cột left (nếu còn)
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
    cin >> T; // Số bộ test

    while (T--) {
        int n, m;
        cin >> n >> m; // Kích thước ma trận

        // Nhập ma trận
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        // Lưu kết quả quay ma trận
        int resultSize;
        rotateMatrixClockwise(n, m, resultSize);

        // In kết quả
        for (int i = 0; i < resultSize; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
