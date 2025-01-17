#include <stdio.h>

void convertToBase(int number, int base) {
    if (number == 0) {
        return;
    }
    int remainder = number % base;
    convertToBase(number / base, base);
    if (remainder >= 10) {
        // In trường hợp các số lớn hơn hoặc bằng 10, sử dụng các ký tự A, B, C, ..., Z.
        printf("%c", remainder - 10 + 'A');
    } else {
        printf("%d", remainder);
    }
}

int main() {
    int number, base;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &number);
    printf("Nhap co so (2 <= b <= 24): ");
    scanf("%d", &base);
    
    if (base < 2 || base > 24) {
        printf("Co so khong hop le. Hay chon co so trong khoang 2 den 24.\n");
        return 1;
    }

    printf("So %d trong he co so %d la: ", number, base);
    if (number == 0) {
        printf("0");
    } else {
        convertToBase(number, base);
    }
    printf("\n");

    return 0;
}
