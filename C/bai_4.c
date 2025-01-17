#include<stdio.h>
#include<math.h>

int kiemtrasonguyento(int a){
    if(a <= 1) return 0;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0) return 0;
    }
    return 1; 
}

int main(){


    int n;
    printf("Nhap mot so n bat ki: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        if(kiemtrasonguyento(i)){
            printf("%d ", i);  
        }
    }

    return 0;
}
