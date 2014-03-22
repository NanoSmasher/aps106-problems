#include <stdio.h>

void sum_pairs(int *A, int N, int *B){
    int i;
    for (i=0;i<N/2;i++) *(B+i) = *(A+2*i) + *(A+2*i+1);
    return;
}

void main(){
    int array[4] = {1,2,3,5},i,b[2];
    sum_pairs(array, 5,&b);
    for (i=0;i<2;i++) printf("%d ", b[i]);  //see how they are the same array?
    return;
}
