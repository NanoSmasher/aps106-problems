#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void min_max(int A[], int N, int *min, int*max){
    int i;
    *min = *max = *A;
    for (i=1;i<N;i++) {
            if (*(A+i) > *max) *max = *(A+i);
            if (*(A+i) < *min) *min = *(A+i);
    }
    return;
}

void main(){
    srand((unsigned)time(NULL));
    int array[3], max=0,min=0,i;

    for (i=0;i<3;i++) array[i] = rand()%10;
    for (i=0;i<3;i++) printf("%d ", array[i]);

    min_max(array, 3, &min,&max);
    printf("\nmin: %d \nmax: %d", min,max);
    return;
}
