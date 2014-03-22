#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand((unsigned)time(NULL));
    int array[10],second[10], i,j=0;
    for (i=0;i<10;i++) array[i] = rand()%99+1;      //initialize
    for (i=0;i<10;i++) printf("%2d ", array[i]);    //print
    printf("\n");

    for (i=0;i<10;i++){                             //sort even
        if (!(array[i]%2)){
                second[j] = array[i];
                j++;
        }
    }

    for (i=0;i<10;i++){                             //sort odd
        if (array[i]%2){
                second[j] = array[i];
                j++;
        }
    }
    for (i=0;i<10;i++) printf("%2d ", second[i]);    //print

    return;
}
