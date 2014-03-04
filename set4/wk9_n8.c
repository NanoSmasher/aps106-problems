#include <stdio.h>
#include <time.h>

#define ROWS 5
#define COLS 5

void print(int array[ROWS][COLS]);

int main(){
    /*
        Write a program that randomly assigns the values 1 to 25 to a 5 x 5 array, not repeating any values.
        Then print the array to the screen. For example:

        3 25 12 4 19
        5 17 21 10 6
        1 8 16 2 7
        13 22 24 11 20
        23 14 15 9 18

        Notice that you'll have to keep track of which numbers you've already placed in the array,
        or,
        you can loop from 1 to 25 and randomly select locations in the 5 x 5 array.
        */
    srand((unsigned)time(NULL));

    int array[ROWS][COLS] = {},i,rand1,rand2;

    for (i=1;i<=25;i++){
        while(1){
            rand1 = rand()%5;
            rand2 = rand()%5;
            if (array[rand1][rand2] == 0) {
                array[rand1][rand2] = i;
                break;
            }
        }
    }

    print(array);
    return 0;
}

void print(int array[ROWS][COLS]){
    int i,j;
    for (i=0;i<ROWS;i++){
        for (j=0;j<COLS;j++) printf("%2d ", array[i][j]);
        printf("\n");
    }
    return;
}
