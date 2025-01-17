#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void listPrimes(int n) {
    printf("Cac so nguyen to nho hon %d la:\n", n);
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so tu nhien n: ");
    scanf("%d", &n);
    
    listPrimes(n);
    
    return 0;
}
