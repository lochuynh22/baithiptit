#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

void fibonacciPrimes(int n) {
    int a = 0, b = 1;
    while (a < n) {
        if (isPrime(a)) {
            printf("%d ", a);
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so tu nhien n: ");
    scanf("%d", &n);
    printf("Cac so Fibonacci nho hon %d la so nguyen to: ", n);
    fibonacciPrimes(n);
    return 0;
}
