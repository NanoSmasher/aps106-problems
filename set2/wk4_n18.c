#include <stdio.h>

int main(){
    /*
    From an old midterm (where the question specified that this be written as a separate function).
    Here, write a program with only a main ( ) function.
    Consider a triangle of n rows; for example:

    for n = 2:
     1
    23

    for n = 5:
        1
       23
      345
     4567
    56789

    and for n = 9:
            1
           23
          345
         4567
        56789
       678901
      7890123
     89012345
    901234567

    Write a program that asks a user for a number between 1 and 9,
    and then prints the corresponding triangle to the screen.
    Recognize that you’ll need a pair of nested loops, one for each line of the triangle,
    and one to generate the numbers on a particular line.
    And if it seems hard to write the spaces to the left of the numbers
    begin by writing the output without the leading spaces.
    */

    int rows=0;

    printf("for n = ");
    scanf("%d",&rows);

    if (rows > 1 && rows < 10){


        int i;
        for (i=1;i<(rows+1);i++){
            int space = i;
            int out = 0;
            while(!out){
                if(space<rows) {
                    printf(" ");
                    space++;
                } else out = !out;
            }

            int num = i;
            int j;
            for(j=0;j<i;j++){
                printf("%d",num);
                num == 9 ? num = 0 : num++;
            }
            printf("\n");
        }


    }
    return 0;
}
