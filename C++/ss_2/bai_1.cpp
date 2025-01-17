#include <iostream>
using namespace std;

// Hàm kiểm tra mảng có đối xứng hay không
bool isSymmetric(int arr[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

// Hàm tính số phép Merge tối thiểu
int minMergeOperations(int arr[], int n) {
    int count = 0;
    int left = 0, right = n - 1;

    while (left < right) {
        if (arr[left] == arr[right]) {
            // Nếu hai phần tử đối xứng nhau, không cần Merge
            ++left;
            --right;
        } else if (arr[left] < arr[right]) {
            // Gộp arr[left] với arr[left + 1]
            arr[left + 1] += arr[left];
            ++left;
            ++count;
        } else {
            // Gộp arr[right] với arr[right - 1]
            arr[right - 1] += arr[right];
            --right;
            ++count;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T; // Số lượng bộ test

    while (T--) {
        int n;
        cin >> n; // Kích thước mảng
        int arr[103]; // Khai báo mảng tĩnh, kích thước tối đa là 103
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << minMergeOperations(arr, n) << endl;
    }

    return 0;
}
