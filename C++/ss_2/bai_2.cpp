#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Cấu trúc lưu trữ thông tin của một sinh viên
struct SinhVien {
    char maSV[100];
    char hoTen[100];
    char lop[100];
    char email[100];
};

// Hàm kiểm tra sinh viên thuộc ngành nào
bool thuocNganh(const SinhVien& sv, const string& nganh) {
    if (nganh == "KE TOAN" && strstr(sv.maSV, "DCKT") != nullptr) {
        return true;
    }
    if (nganh == "CONG NGHE THONG TIN" && strstr(sv.maSV, "DCCN") != nullptr && sv.lop[0] != 'E') {
        return true;
    }
    if (nganh == "AN TOAN THONG TIN" && strstr(sv.maSV, "DCAT") != nullptr && sv.lop[0] == 'E') {
        return true;
    }
    if (nganh == "VIEN THONG" && strstr(sv.maSV, "DCVT") != nullptr) {
        return true;
    }
    if (nganh == "DIEN TU" && strstr(sv.maSV, "DCDT") != nullptr) {
        return true;
    }
    return false;
}

int main() {
    int n; // Số lượng sinh viên
    cin >> n;
    cin.ignore(); // Bỏ qua ký tự xuống dòng sau số lượng

    SinhVien danhSach[1000]; // Mảng tĩnh lưu thông tin sinh viên
    for (int i = 0; i < n; ++i) {
        cin.getline(danhSach[i].maSV, 100);
        cin.getline(danhSach[i].hoTen, 100);
        cin.getline(danhSach[i].lop, 100);
        cin.getline(danhSach[i].email, 100);
    }

    int q; // Số lượng truy vấn ngành
    cin >> q;
    cin.ignore(); // Bỏ qua ký tự xuống dòng

    while (q--) {
        string nganh;
        getline(cin, nganh);
        cout << "DANH SACH SINH VIEN NGANH " << nganh << ":" << endl;
        for (int i = 0; i < n; ++i) {
            if (thuocNganh(danhSach[i], nganh)) {
                cout << danhSach[i].maSV << " " 
                     << danhSach[i].hoTen << " " 
                     << danhSach[i].lop << " " 
                     << danhSach[i].email << endl;
            }
        }
    }

    return 0;
}
