#include <iostream>
#include <string>
#include <iomanip> // Để định dạng xuất dữ liệu
using namespace std;

struct NhanVien {
    string maNV;         // Mã nhân viên
    string hoTen;        // Họ tên
    string gioiTinh;     // Giới tính
    string ngaySinh;     // Ngày sinh
    string diaChi;       // Địa chỉ
    string maSoThue;     // Mã số thuế
    string ngayKyHD;     // Ngày ký hợp đồng
};

int main() {
    int n;
    do {
        cout << "Nhap so luong nhan vien (toi da 40): ";
        cin >> n;
    } while (n <= 0 || n > 40);

    NhanVien danhSach[40];

    // Nhập thông tin nhân viên
    for (int i = 0; i < n; i++) {
        cin.ignore(); // Xóa bộ nhớ đệm
        danhSach[i].maNV = to_string(i + 1); // Mã nhân viên tự động tăng

        cout << "Nhap ho ten nhan vien " << i + 1 << ": ";
        getline(cin, danhSach[i].hoTen);

        cout << "Nhap gioi tinh (Nam/Nu): ";
        getline(cin, danhSach[i].gioiTinh);

        cout << "Nhap ngay sinh (dd/mm/yyyy): ";
        getline(cin, danhSach[i].ngaySinh);

        cout << "Nhap dia chi: ";
        getline(cin, danhSach[i].diaChi);

        cout << "Nhap ma so thue: ";
        getline(cin, danhSach[i].maSoThue);

        cout << "Nhap ngay ky hop dong (dd/mm/yyyy): ";
        getline(cin, danhSach[i].ngayKyHD);

        cout << endl;
    }

    // Xuất danh sách nhân viên
    cout << "Danh sach nhan vien:" << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(5) << setfill('0') << danhSach[i].maNV << " ";
        cout << danhSach[i].hoTen << " ";
        cout << danhSach[i].gioiTinh << " ";
        cout << danhSach[i].ngaySinh << " ";
        cout << danhSach[i].diaChi << " ";
        cout << danhSach[i].maSoThue << " ";
        cout << danhSach[i].ngayKyHD << endl;
    }

    return 0;
}
