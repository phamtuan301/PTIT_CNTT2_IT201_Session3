#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;

     do {
        printf("Nhap so phan tu cua mang");
        scanf("%d", &n);
    }while (n<=0 || n>1000);
    int* arr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu cho mang");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    free(arr);
    return 0;
}