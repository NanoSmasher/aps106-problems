#include <stdio.h>

int main(){
    /*
    Write a program that asks a user for an integer,
    then counts the number of each digit in the integer,
    and displays a list of all digits as follows:

    Enter an integer :: 123232488

    digit how many?
        1 1
        2 3
        3 2
        4 1
        8 2
    */

    int num, digit[10] = {}, i;

    printf("Enter an integer :: ");
    scanf("%d", &num);
    if (num <=0) return -1;

    while(num>0){
        i = num%10;
        digit[i]++;
        num /= 10;
    }

    printf("digit\thow many?");
    for (i = 0; i<10;i++) if (digit[i] != 0) printf("\n%d\t%d",i,digit[i]);

    return 0;
}
