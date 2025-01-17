#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

void listNPrimes(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

void listNFibonacci(int n) {
    int a = 0, b = 1;
    printf("0 ");
    for (int i = 1; i < n; i++) {
        printf("%d ", b);
        int temp = b;
        b = a + b;
        a = temp;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    
    printf("Cac so nguyen to dau tien la: ");
    listNPrimes(n);
    
    printf("Cac so Fibonacci dau tien la: ");
    listNFibonacci(n);
    
    return 0;
}
