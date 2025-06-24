#include <stdio.h>
#include <stdlib.h>
int average(int arr[], int size){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
            count++;
    }
}
   if(count == 0) {
        return -1;
   }
    return sum / count;
}

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
    printf("Trung binh cong cac so chan trong mang la %d", average(arr, n));
    free(arr);
    return 0;
}