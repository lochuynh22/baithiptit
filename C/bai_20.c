#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void permute(int arr[], int l, int r) {
    if (l == r) {
        printArray(arr, r + 1);
    } else {
        for (int i = l; i <= r; i++) {
            swap((arr + l), (arr + i));
            permute(arr, l + 1, r);
            swap((arr + l), (arr + i)); // Hoán vị lại để tiếp tục tạo hoán vị khác
        }
    }
}

int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    printf("Cac hoan vi cua 1, 2, ..., %d la:\n", n);
    permute(arr, 0, n - 1);
    
    return 0;
}
