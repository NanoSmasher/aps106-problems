#include <stdio.h>

int find_index (int num, int j[]);

int main(){
    /*
     Write a program with two functions: main ( ) and

        int find_index (int num, int j[]);

     In main(), allocate an array int j[100],
     and then fill each element of the array with a random number between 1 and 100,
     where repeating numbers are fine.

     Then ask a user for a number num between 1 and 100,
     and then call find_index, which should search the array,
     and return the first position (or index, or offset) in the array where num is stored.
     That returned value will range from 0 to 99 if in fact num is stored in the array;
     if find_index can’t find an instance of num, then the function should return -­-1.
     */

    srand((unsigned)time(NULL));
    int j[100], i, num;

    for (i = 0; i < 100; i++) j[i] = rand()%100+1;

    printf("Enter a number(1-100): ");
    scanf("%d", &num);

    if (num <0 || num >100) return -1;
    printf("%d", find_index(i, j));

    return 0;
}

int find_index (int num, int j[]){
    int i;
    for (i = 0; i < 100; i++) if (num == j[i]) return i;
    return -1;
}
