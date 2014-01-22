#include <stdio.h>

int main(){
    /*Write a program that repeatedly asks a user for integers, UNTIL the user enters a zero.
    Calculate the number of positive and negative integers that were entered. For example:

    Enter an integer: 2
    Enter an integer: 14
    Enter an integer: -3
    Enter an integer: 0

    You entered 2 positive and 1 negative values.
    */

    int pos=0,neg=0,input=0,done=0;

    while(!done){
        printf("Enter an integer: ");
        scanf("%d",&input);
        if (input == 0) done = !done;
        else input > 0 ? pos++ : neg++;
    }

    printf("You entered %d positive and %d negative values.", pos, neg);

    return 0;
}
