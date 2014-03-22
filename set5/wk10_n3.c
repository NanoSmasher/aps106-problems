#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void main(){
    srand((unsigned)time(NULL));
    int array[N],sum,n,i,j;
    for (i=0;i<N;i++) array[i] = rand()%99+1;
    printf("array values are: "); for (i=0;i<N;i++) printf("%2d ", array[i]);

    printf("\ncalculate averages over how many values?  ");
    scanf("%d",&n);
    if (n<1 || n>N) return;                          //just in case
    printf("\nthe averages are: ");

    for (i=0;i<N-n+1;i++){
        sum=0;
        for(j=i;j<i+n;j++) sum+=array[j];
        printf("%.2f ", (float)(sum)/n);
    }

    return;
}
