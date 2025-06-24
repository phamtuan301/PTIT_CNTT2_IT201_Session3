#include <stdio.h>
#include <stdlib.h>
int findMax (int **arr, int rows, int cols) {
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int findMin (int **arr, int rows, int cols) {
    int min = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main (){
    int rows, cols;
    do {
        printf("NHap so hang");
        scanf("%d", &rows);
        printf("NHat so cot");
        scanf("%d", &cols);
    }while (rows <= 0 || cols <= 0 || cols >= 1000 || cols >= 1000) ;
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu cua mang");
            scanf("%d", &arr[i][j]);
        }
    }
    int max = findMax(arr, rows, cols);
    int min = findMin(arr, rows, cols);
    printf("max=%d\n", max);
    printf("min=%d", min);
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    return 0;
}
