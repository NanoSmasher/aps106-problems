#include <stdlib.h>
    /*
    Assume an array of N elements contains a sorted list of positive non-­-repeated integers.
    Write a function that corresponds to the following prototype:
    int binary_search (int array[], int N, int value);
    The function does a binary search, and returns the position in the array where value is stored.
    If value isn’t in the array, the function returns -­-1.

    [ A binary search is a quick way of searching a sorted list of numbers.
    Begin at the middle of the array, and decide if the value you’re looking for is in the first half of the array or the second.
    Then look halfway again, and halfway again, and … ]
    For example, the following main ( ) function, plus the binary_search function that you write:

    int main ( ) {
        int array[100], i, j;

        for (i=0; i<100; i++) array[i] = i*2 + i/2;
        j = binary_search (array, 100, 42)
        printf (“value 42 is stored in array[%2d]\n”, j);
        return 0;
    }

    would yield the following output:

        value 42 is stored in array[17]
    */

binary_search(int array[], int size, int num){
    int pmax=size, pmin=0, point;
    do{
        point = (pmax+pmin)/2;
        if (array[point] == num) return point;
        else if (array[point] > num) pmax = point;
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
