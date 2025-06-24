#include <stdio.h>
#include <stdlib.h>

int main () {
    int m, n;
    do {
        printf("Nhap so phan tu cua mang:");
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu cua mang:");
        scanf("%d", &arr[i]);
    }
    do {
        printf("Nhap so phan tu can them:");
        scanf("%d", &m);
    }while (m <= 0);
    int *temp = (int*)realloc(arr, (n +m) * sizeof(int));
    arr = temp;
    for (int i = n; i < n+m; i++) {
        printf("Nhap phan tu can them:");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n+m; i++) {
        printf("%d\t ", arr[i]);
    }
    free(arr);
    return 0;
}