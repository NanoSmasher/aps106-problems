#include <stdio.h>
#include <time.h>

#define ROWS 5
#define COLS 5

void print(int array[ROWS][COLS]);
int border(int array[ROWS][COLS]);

int main(){
    /*
        Write a program that randomly assigns values between 0 and 9 to a 5 x 5 array.
        Print the array to the screen, and then calculate the sum of values around the "outside" (border) of the array.
        For example, if the random array is:

        8 7 2 0 4
        8 4 0 2 5
        1 9 4 6 5
        0 2 6 9 3
        1 7 3 9 5

        then the sum around the outside is 68
    */

    srand((unsigned)time(NULL));
    int array[ROWS][COLS] ,i,j;
    for (i=0;i<ROWS;i++) for (j=0;j<COLS;j++) array[i][j] = rand()%10;
    print(array);
    printf("Sum of border: %d", border(array));
    return 0;
}

void print(int array[ROWS][COLS]){
    int i,j;
    for (i=0;i<ROWS;i++){
        for (j=0;j<COLS;j++) printf("%d ", array[i][j]);
        printf("\n");
    }

    return;
}

int border(int array[ROWS][COLS]){
    int i,sum=0;
    for (i=0;i<COLS;i++) sum+=array[0][i]+array[ROWS-1][i]; //top and bottom
    for (i=1;i<ROWS-1;i++) sum+=array[i][0]+array[i][COLS-1]; //sides
    return sum;
}
