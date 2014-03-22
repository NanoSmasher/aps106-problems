#include <stdio.h>

void max_value(int *A, int N, int *max){
    int i;
    for (i=0;i<N;i++) if (*(A+i) > *max) *max = *(A+i);
    return;
}

void main(){
    int array[5] = {-1,2,1,3,0}, max=0;
    max_value(array, 5, &max);
    printf("%d ", max);
    return;
}
