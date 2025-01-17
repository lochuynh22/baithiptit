#include <stdio.h>

void primeFactors(int number) {
    int factor = 2;
    while (number != 1) {
        if (number % factor == 0) {
            printf("%d", factor);
            number /= factor;
            if (number != 1) {
                printf(" x ");
            }
        } else {
            factor++;
        }
    }
    printf("\n");
}

int main() {
    int number;
    printf("Nhap so nguyen: ");
    scanf("%d", &number);
    
    if (number <= 1) {
        printf("Khong the phan tich cac so nho hon hoac bang 1 thanh cac thua so nguyen to.\n");
        return 1;
    }

    printf("Cac thua so nguyen to cua %d la: ", number);
    primeFactors(number);
    
    return 0;
}
