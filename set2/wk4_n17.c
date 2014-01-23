#include <stdio.h>

int main(){
    /*Imagine that rather than using coins valued at 1, 5, 10, and 25 cents,
    that we use coins valued at 1, 3, 5, and 7 cents.
    Write a program that asks a user for a positive integer,
    and then calculates the number of each coin required to make up that amount.
    For example:

    Total amount: 69

    9 7-cent coins = 63
    1 5-cent coins = 68
    0 3-cent coins = 68
    1 1-cent coins = 69

    Write this using a loop, rather than calculating each of the four numbers separately.
    */

    int total=0,cur=0,coins=0;

    printf("Total amount: ");
    scanf("%d", &total);
    printf("\n");
    int i=7;
    for (i=7; i>0;i-=2){
        coins = (total-cur)/i;
        cur += coins*i;
        printf("%d %d-cent coins = %d\n",coins,i,cur);
    }
    return 0;
}
