#include <stdio.h>
#include <ctype.h>

void trimAndNormalize(char str[]) {
    int i = 0, j = 0;
    int spaceFlag = 0;

    // Loại bỏ các dấu cách thừa
    while (str[i] != '\0') {
        if (isspace(str[i])) {
            if (spaceFlag == 0) {
                str[j++] = ' ';
                spaceFlag = 1;
            }
        } else {
            str[j++] = str[i];
            spaceFlag = 0;
        }
        i++;
    }
    str[j] = '\0';

    // Loại bỏ khoảng trắng ở đầu và cuối
    if (isspace(str[0])) {
        for (i = 0; str[i] != '\0'; i++) {
            str[i] = str[i+1];
        }
    }
    if (j > 0 && isspace(str[j-1])) {
        str[j-1] = '\0';
    }

    // Chuyển ký tự đầu mỗi từ thành chữ hoa, các ký tự khác thành chữ thường
    int capitalize = 1;
    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            capitalize = 1;
        } else if (capitalize) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Nhap xau ky tu: ");
    fgets(str, sizeof(str), stdin);

    // Loại bỏ ký tự newline cuối chuỗi nếu có
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    trimAndNormalize(str);
    printf("Xau ky tu sau khi chuan hoa: %s\n", str);

    return 0;
}
