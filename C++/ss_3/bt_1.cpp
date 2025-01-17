#include <iostream>
#include <string>
using namespace std;

// Cấu trúc lưu trữ thông tin nhân viên
struct NhanVien {
    char hoTen[100];
    char gioiTinh[10];
    char ngaySinh[20];
    char diaChi[100];
    char maSoThue[20];
    char ngayKyHopDong[20];
};

// Hàm tạo mã nhân viên với định dạng đủ 5 chữ số
string taoMaNhanVien(int soThuTu) {
    string ma = to_string(soThuTu); // Chuyển số thứ tự sang chuỗi
    while (ma.length() < 5) {      // Thêm '0' vào đầu chuỗi cho đủ 5 ký tự
        ma = "0" + ma;
    }
    return ma;
}

int main() {
    int n; // Số lượng nhân viên
    cin >> n;
    cin.ignore(); // Bỏ qua ký tự xuống dòng sau số lượng

    NhanVien danhSach[40]; // Mảng tĩnh lưu tối đa 40 nhân viên

    // Nhập thông tin các nhân viên
    for (int i = 0; i < n; ++i) {
        cin.getline(danhSach[i].hoTen, 100);
        cin.getline(danhSach[i].gioiTinh, 10);
        cin.getline(danhSach[i].ngaySinh, 20);
        cin.getline(danhSach[i].diaChi, 100);
        cin.getline(danhSach[i].maSoThue, 20);
        cin.getline(danhSach[i].ngayKyHopDong, 20);
    }

    // In thông tin các nhân viên
    for (int i = 0; i < n; ++i) {
        // Tạo mã nhân viên thủ công
        string maNhanVien = taoMaNhanVien(i + 1);
        cout << maNhanVien << " ";
        // In các thông tin còn lại
        cout << danhSach[i].hoTen << " "
             << danhSach[i].gioiTinh << " "
             << danhSach[i].ngaySinh << " "
             << danhSach[i].diaChi << " "
             << danhSach[i].maSoThue << " "
             << danhSach[i].ngayKyHopDong << endl;
    }

    return 0;
}
