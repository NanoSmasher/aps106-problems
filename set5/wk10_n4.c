#include <stdio.h>

int max_value(int *A, int N){
    int i, max=0;
    for (i=0;i<N;i++) if (*(A+i) > max) max = *(A+i);
    return max;
}

void main(){
    int array[5] = {-1,2,1,3,0};
    printf("%d ", max_value(array, 5));
    return;
}
