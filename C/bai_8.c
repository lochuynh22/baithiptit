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
    
    printf("So lan xuat hien cua cac phan tu trong day la:\n");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i <= j) {
                count++;
            }
        }
        if (count > 0) {
            printf("%f xuat hien %d lan\n", arr[i], count);
        }
    }
    
    return 0;
}
