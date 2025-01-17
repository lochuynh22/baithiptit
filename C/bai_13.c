#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

void listDivisors(int n) {
    int count = 0;
    printf("Cac uoc so cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nSo luong uoc so: %d\n", count);
}

void listPrimeDivisors(int n) {
    printf("Cac uoc so la nguyen to cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    
    listDivisors(n);
    listPrimeDivisors(n);
    
    return 0;
}
