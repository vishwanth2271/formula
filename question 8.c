#include<stdio.h>
void main(){
    int arr[10], n = 10, i, j;
    int *p = arr;
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }
    printf("before swapping:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    for(i = 0; i < n - 1; i += 2){
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        }
    printf("after:\n");

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
                }
                

            
}