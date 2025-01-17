#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

void findMaxElement(int n, int m, int A[n][m]) {
    int max = A[0][0], max_i = 0, max_j = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    printf("Phan tu lon nhat cua ma tran la %d o chi so (%d, %d)\n", max, max_i, max_j);
}

void printMatrixWithPrimes(int n, int m, int A[n][m]) {
    printf("Ma tran sau khi thay cac phan tu khong phai so nguyen to bang 0 la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!isPrime(A[i][j])) {
                A[i][j] = 0;
            }
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

void sortColumns(int n, int m, int A[n][m]) {
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (A[i][j] > A[k][j]) {
                    int temp = A[i][j];
                    A[i][j] = A[k][j];
                    A[k][j] = temp;
                }
            }
        }
    }
    printf("Ma tran sau khi sap xep cac cot theo thu tu tang dan la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    
    int A[n][m];
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    findMaxElement(n, m, A);
    printMatrixWithPrimes(n, m, A);
    sortColumns(n, m, A);
    
    return 0;
}
