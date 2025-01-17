#include <stdio.h>
#include <string.h>

void reverseName(char fullName[]) {
    char firstName[50], middleName[50], lastName[50];
    int i = 0, j = 0;

    // Lấy họ
    while (fullName[i] != ' ' && fullName[i] != '\0') {
        lastName[j++] = fullName[i++];
    }
    lastName[j] = '\0';
    
    // Bỏ các khoảng trắng giữa họ và đệm
    while (fullName[i] == ' ') {
        i++;
    }

    j = 0;
    // Lấy đệm
    while (fullName[i] != ' ' && fullName[i] != '\0') {
        middleName[j++] = fullName[i++];
    }
    middleName[j] = '\0';

    // Bỏ các khoảng trắng giữa đệm và tên
    while (fullName[i] == ' ') {
        i++;
    }

    j = 0;
    // Lấy tên
    while (fullName[i] != '\0') {
        firstName[j++] = fullName[i++];
    }
    firstName[j] = '\0';

    // In ra kết quả
    printf("Xau ky tu theo cau truc ten...ho...dem: %s %s %s\n", firstName, middleName, lastName);
}

int main() {
    char fullName[100];
    printf("Nhap xau ho ten: ");
    fgets(fullName, sizeof(fullName), stdin);
    
    // Loại bỏ ký tự newline cuối chuỗi nếu có
    if (fullName[strlen(fullName) - 1] == '\n') {
        fullName[strlen(fullName) - 1] = '\0';
    }

    reverseName(fullName);
    
    return 0;
}
