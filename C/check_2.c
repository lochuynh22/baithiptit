#include <stdio.h>

int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n, m;
    printf("nhap so dong va so cot: ");
    scanf("%d %d", &n, &m);

    int A[n][m];
    int max = 0, maxRow = 0, maxCol = 0;

    printf("nhap phan tu ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
            if (A[i][j] > max) {
                max = A[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("phan tu lon nhat %d tai vi tri [%d][%d]\n", max, maxRow, maxCol);

    printf("cac phan tu hoan hao: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPerfectNumber(A[i][j])) {
                printf("%d ", A[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
