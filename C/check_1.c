#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int i, number, sum;

    for (i = 0; i < n; i++) {
        scanf("%d", &number); 
        sum = 0;

        while (number != 0) {
            sum += number % 10; 
            number /= 10;     
        }

        printf("%d ", sum);
    }

    return 0;
}
