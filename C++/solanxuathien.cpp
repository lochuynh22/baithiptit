#include <iostream>
using namespace std;

int main() {
    int count[1000] = {0}; // Mảng đếm số lần xuất hiện, khởi tạo tất cả bằng 0
    int n;

    cout << " " << endl;

    // Đọc dữ liệu từ người dùng cho đến khi gặp số 0
    while (true) {
        cin >> n;
        if (n == 0) break; // Dừng nhập khi gặp số 0
        if (n >= 1 && n < 1000) { // Chỉ xử lý các số trong khoảng [1, 999]
            count[n]++;
        }
    }

    // Xuất các số khác nhau và số lần xuất hiện theo thứ tự tăng dần
    for (int i = 1; i < 1000; ++i) {
        if (count[i] > 0) {
            cout << i << " " << count[i] << endl;
        }
    }

    return 0;
}
