#include <stdio.h>

int main() {
    int n;

    printf("Nhap so luong phan tu cua giai: ");
    scanf("%d", &n);

    float a[n];
    int freq[n];

 
    printf("Nhap phan tu cua day: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        freq[i] = 0; 
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                freq[i]++;
            }
        }
    }

    
    printf("Cac phan tu xuat hien dung mot lan la: ");
    int found = 0; // Biến để kiểm tra có phần tử nào thỏa mãn không
    for (int i = 0; i < n; i++) {
        if (freq[i] == 1) {
            printf("%.2f ", a[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co phan tu xuat hien mot lan.");
    }

    return 0;
}
