#include <stdio.h>
#include <stdlib.h>
int sum (int **arr, int cols, int k) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum+=arr[k-1][j];
    }
    return sum;
}
int main () {
    int rows, cols;
    do {
        printf("Nhap so hang:");
        scanf("%d", &rows);
        printf("Nhap so cot:");
        scanf("%d", &cols);
    }while(cols <= 0 || rows <= 0 || rows >=1000 || cols>=1000);
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu cua ma tran");
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    do {
        printf("Nhan hang can tinh tong:");
        scanf("%d", &k);
    }while(k <= 0 || k >rows);
    int result = sum(arr, cols, k);
    printf("sum=%d", result);
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}