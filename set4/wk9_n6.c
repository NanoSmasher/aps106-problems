#include <stdio.h>
#include <time.h>

#define ROWS 2
#define COLS 2

int largest(int array[ROWS][COLS]);

int main(){
    /*
        Write a program that allocates a 2D array of size ROWS x COLS,
        where these two values are constants specified using #define.
        Initialize the array with random numbers between 1 and 100,
        where repeating numbers are fine.
        Then pass this array to a function corresponding to the following prototype:

        int largest (int array[ROWS][COLS]);

        that determines the row or column that sums to the largest number,
        and returns that sum to main ().
    */
    srand((unsigned)time(NULL));

    int array[ROWS][COLS], i,j;
    for (i=0;i<ROWS;i++) for (j=0;j<COLS;j++) array[i][j] = rand()%100+1;
    printf("%d", largest(array));

    return 0;
}

int largest(int array[ROWS][COLS]){
    int max=0, temp,i,j;

    for (i=0;i<ROWS;i++){
        temp = 0;
        for (j=0;j<COLS;j++) temp += array[i][j];
        if (temp>max) max = temp;
    }

    for (j=0;j<COLS;j++){
        temp = 0;
        for (i=0;i<ROWS;i++) temp += array[i][j];
        if (temp>max) max = temp;
    }

    return max;
}
