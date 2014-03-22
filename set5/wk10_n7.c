#include <stdio.h>

void reverse(int *A, int N){
    int L = 0, R = N-1, tmp;
    while (R>L){
        tmp = *(A+L);
        *(A+L) = *(A+R);
        *(A+R) = tmp;
        L++; R--;
    }
    return;
}

void main(){
    int array[5] = {1,2,3,5,4},i;
    for (i=0;i<5;i++) printf("%d ", array[i]);
    printf("\n");
    reverse(array, 5);
    for (i=0;i<5;i++) printf("%d ", array[i]);  //see how they are the same array?
    return;
}
