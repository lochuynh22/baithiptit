#include <stdio.h>
#include <string.h>

void findLongestWord(char str[]) {
    int maxLen = 0, currLen = 0;
    int maxPos = 0, currPos = 0;
    int i = 0, wordStart = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxPos = wordStart;
            }
            currLen = 0;
            wordStart = i + 1;
        } else {
            if (currLen == 0) {
                wordStart = i;
            }
            currLen++;
        }
        i++;
    }
    // Kiểm tra từ cuối cùng
    if (currLen > maxLen) {
        maxLen = currLen;
        maxPos = wordStart;
    }

    printf("Tu dai nhat trong xau la: ");
    for (int j = maxPos; j < maxPos + maxLen; j++) {
        putchar(str[j]);
    }
    printf("\nTu do xuat hien o vi tri: %d\n", maxPos);
}

int main() {
    char str[100];
    printf("Nhap xau ky tu: ");
    fgets(str, sizeof(str), stdin);
    
    // Loại bỏ ký tự newline cuối chuỗi nếu có
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    findLongestWord(str);
    
    return 0;
}
