#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Employee {
public:
    static int idCounter;
    int id;
    string name, gender, birthDate, address, taxCode, contractDate;

    Employee(string name, string gender, string birthDate, string address, string taxCode, string contractDate) {
        this->id = idCounter++;
        this->name = name;
        this->gender = gender;
        this->birthDate = birthDate;
        this->address = address;
        this->taxCode = taxCode;
        this->contractDate = contractDate;
    }

    friend ostream& operator<<(ostream &out, const Employee &e) {
        out << setw(5) << setfill('0') << e.id << " "
            << e.name << " "
            << e.gender << " "
            << e.birthDate << " "
            << e.address << " "
            << e.taxCode << " "
            << e.contractDate;
        return out;
    }
};

int Employee::idCounter = 1;

int main() {
    int n;
    cout << "";
    cin >> n;
    cin.ignore();
    vector<Employee> employees;

    for (int i = 0; i < n; ++i) {
        string name, gender, birthDate, address, taxCode, contractDate;
        cout << "" << i + 1 << ":\n";
        getline(cin, name);
        getline(cin, gender);
        getline(cin, birthDate);
        getline(cin, address);
        getline(cin, taxCode);
        getline(cin, contractDate);

        employees.emplace_back(name, gender, birthDate, address, taxCode, contractDate);
    }

    cout << "\n";
    for (const auto &e : employees) {
        cout << e << endl;
    }

    return 0;
}
