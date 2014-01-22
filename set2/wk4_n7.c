#include <stdio.h>

int main(){
    /*
    Write a program that calculates the number of digits of any positive integer
    */

    int num=0, digit=0, temp=0, done=0;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    if (num<0) printf("ERROR: Out of bounds");
    else{
        temp = num;

        while (!done){
            digit++;
            temp /=10;
            if (temp == 0) done=!done;
        }

        printf("The positive integer %d has %d digit(s).",num,digit);
    }
    return 0;
}
