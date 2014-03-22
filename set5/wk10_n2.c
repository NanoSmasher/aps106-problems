#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand((unsigned)time(NULL));
    int array[10],second[10], i,s;
    for (i=0;i<10;i++) array[i] = rand()%10+1;
    printf("the original array: "); for (i=0;i<10;i++) printf("%2d ", array[i]);

    printf("\nshift how many elements? ");
    scanf("%d",&s);
    if (s<0 || s>10) return;

    for (i=10-s;i<10;i++) second[i-(10-s)] = array[i];
    for (i=0;i<10-s;i++) second[i+s] = array[i];

    printf("the shifted array: "); for (i=0;i<10;i++) printf("%2d ", second[i]);

    return;
}
