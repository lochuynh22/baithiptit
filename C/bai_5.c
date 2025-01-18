#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int number) {
    int reversed = 0, original = number;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed == original;
}
    
int main() {
    printf("Cac so thuan nghich doc co 6 chu so:\n");
    for (int i = 100000; i <= 999999; i++) {
        if (isPalindrome(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
