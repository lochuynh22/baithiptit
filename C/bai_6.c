#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    
    float arr[n];
    printf("Nhap cac phan tu cua day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    
    printf("Cac phan tu xuat hien duy nhat trong day la:\n");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%f\n", arr[i]);
        }
    }
    
    return 0;
}
