#include <stdio.h>
#include <stdlib.h>
int sumDuongCheoChinh(int **arr, int rows, int cols) {
    int sum = 0;
    int m;
    if (rows < cols) {
        m = rows;
    }else{
        m = cols;
    }
    for (int i = 0; i < m; i++) {
        sum += arr[i][i];
    }
    return sum;
}
int sumDuongCheoPhu(int **arr, int rows, int cols) {
    int sum = 0;
    int m;
    if (rows < cols) {
        m = rows;
    }else {
        m = cols;
    }
    for (int i = 0; i < m; i++) {
        int j = cols -1 -i;
        if (j>=0) {
            sum += arr[i][j];
        }
    }
    return sum;
}
int main() {
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
    int sum1 = sumDuongCheoPhu(arr, rows, cols);
    int sum2 = sumDuongCheoChinh(arr, rows,cols);
    printf("Tong cac phan tu tren duong cheo phu:%d", sum1);
    printf("Tong cac phan tu tren duong cheo chinh:%d", sum2);
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}