#include <iostream>
#include <iomanip>
#include <string>

struct Employee {
    std::string name;
    std::string gender;
    std::string dob;
    std::string address;
    std::string taxCode;
    std::string contractDate;
};

int main() {
    int N;
    std::cout << "Enter number of employees: ";
    std::cin >> N;

    Employee employees[40];
    std::string temp;
    std::getline(std::cin, temp); // to consume the newline character after the number input

    for (int i = 0; i < N; ++i) {
        std::getline(std::cin, employees[i].name);
        std::getline(std::cin, employees[i].gender);
        std::getline(std::cin, employees[i].dob);
        std::getline(std::cin, employees[i].address);
        std::getline(std::cin, employees[i].taxCode);
        std::getline(std::cin, employees[i].contractDate);
    }

    for (int i = 0; i < N; ++i) {
        std::cout << std::setw(5) << std::setfill('0') << i + 1 << " "
                  << employees[i].name << " "
                  << employees[i].gender << " "
                  << employees[i].dob << " "
                  << employees[i].address << " "
                  << employees[i].taxCode << " "
                  << employees[i].contractDate << std::endl;
    }

    return 0;
}
