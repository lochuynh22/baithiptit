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

int digitSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int S;
    printf("Nhap tong cua cac chu so (S): ");
    scanf("%d", &S);
    
    printf("Cac so nguyen to co 5 chu so va tong cac chu so bang %d la:\n", S);
    for (int i = 10000; i <= 99999; i++) {
        if (isPrime(i) && digitSum(i) == S) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
