#include <stdio.h>

void findMaxElements(int n, int A[]) {
    int max1 = A[0], max2 = A[0], max1_index = 0, max2_index = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] > max1) {
            max2 = max1;
            max2_index = max1_index;
            max1 = A[i];
            max1_index = i;
        } else if (A[i] > max2) {
            max2 = A[i];
            max2_index = i;
        }
    }
    printf("Phan tu lon nhat la %d o chi so %d\n", max1, max1_index);
    printf("Phan tu lon thu 2 la %d o chi so %d\n", max2, max2_index);
}

void sortArrayDescending(int n, int A[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] < A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void insertElement(int* n, int A[], int x) {
    int i;
    for (i = *n - 1; (i >= 0 && A[i] < x); i--) {
        A[i + 1] = A[i];
    }
    A[i + 1] = x;
    (*n)++;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int A[n + 1];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    findMaxElements(n, A);
    
    sortArrayDescending(n, A);
    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    int x;
    printf("Nhap so nguyen x can chen: ");
    scanf("%d", &x);
    insertElement(&n, A, x);
    
    printf("Mang sau khi chen %d vao vi tri phu hop:\n", x);
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}
