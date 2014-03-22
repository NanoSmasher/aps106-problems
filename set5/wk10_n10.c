#include <stdio.h>

binary_search(int *array, int size, int num){
    int pmax=size, pmin=0, point;
    do{
        point = (pmax+pmin)/2;
        if (*(array+point) == num) return point;
        else if (*(array+point) > num) pmax = point;
        else pmin = point;
    }while(pmax != pmin);
    return -1;
}

int main(){
    int array[100], i, j;
    for (i=0; i<100; i++) array[i] = i*2 + i/2;
    j = binary_search(array, 100, 42);
    printf("value 42 is stored in array[%2d]\n", j);
    return 0;
}
