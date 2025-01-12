#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

struct Student {
    string id;
    string name;
    string class_name;
    string email;
};

bool isEligible(const Student& student, const string& major) {
    string major_code = student.id.substr(3, 4); // 4 characters from index 3
    if (major_code == major) {
        if (major == "DCCN" || major == "DCAT") {
            if (student.class_name[0] == 'E') return false;
        }
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    
    // Read student details
    for (int i = 0; i < n; ++i) {
        cin >> students[i].id;
        cin.ignore(); // To ignore the newline after the ID
        getline(cin, students[i].name);
        cin >> students[i].class_name;
        cin >> students[i].email;
    }
    
    int q;
    cin >> q;
    cin.ignore(); // To ignore the newline after the number of queries
    
    map<string, string> major_map = {
        {"Ke toan", "DCKT"},
        {"Cong nghe thong tin", "DCCN"},
        {"An toan thong tin", "DCAT"},
        {"Vien thong", "DCVT"},
        {"Dien tu", "DCDT"}
    };
    
    // Handle each query
    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);
        string major_code = major_map[query];
        
        cout << "DANH SACH SINH VIEN NGANH " << query << ":\n";
        for (const auto& student : students) {
            if (isEligible(student, major_code)) {
                cout << student.id << " " << student.name << " " << student.class_name << " " << student.email << "\n";
            }
        }
    }
    
    return 0;
}
