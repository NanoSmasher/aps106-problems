#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int N=0,L,R;
    printf("How many random numbers N?: ");
    scanf("%d", &N);
    if (N <1) return;   //safety first

    do{
        printf("Limiting Values: ");
        scanf("%d %d", &L, &R);
    } while(L>R || (R-L+1)<N || L<1);

    /*Output*/
    srand((unsigned)(time(NULL)));
    int a=0,flag;
    int *d = malloc(N * sizeof (*d));

    printf("The random values are ");

    do{
        flag = 0;
        int r = rand()%(R-L+1)+L;
        int i;
        for (i=0;i<N;i++){
            if (r == d[i]) {
                flag = 1; break;
            }
        }
        if (flag == 0){
            printf("%d ",r);
            d[a++] = r;
        }
    } while(a<N);

    free(d);        //Don't forget me!
    return;
}
