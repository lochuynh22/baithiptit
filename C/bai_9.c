#include <stdio.h>
#include <stdbool.h>

int countWords(char str[]) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = false;
        } else if (inWord == false) {
            inWord = true;
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];
    printf("Nhap xau ky tu: ");
    fgets(str, sizeof(str), stdin);
    
    int wordCount = countWords(str);
    printf("So tu trong xau la: %d\n", wordCount);
    
    return 0;
}
