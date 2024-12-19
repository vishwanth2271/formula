#include<stdio.h>
void main(){
    int a[10], i, j;
    int *p;
    printf("enetr");
    for(i=0; i<10; i++){
        scanf("%d", &p[i]);
    }

    for(i=0; i<10; i++){
        for(j=0; j<i; j++){
            if(p[i] > p[j]) {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("2nd Largest: %d", p[1]);
    

}