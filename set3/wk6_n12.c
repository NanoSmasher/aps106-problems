/*
    Write a function num_digits(n) that returns the number of digits in a positive integer n. If n <= 0, the function should return -1.
    The function main ( ) used to call the function would look like this:

    #include <stdio.h>

    int num_digits(int n); /* function declaration * /

    int main( ) {

        int num, digits;

        printf(“enter a positive integer: “);
        scanf(“%d”, &num);

        digits = num_digits(num); /* function call * /

        if (digits == -1)
            printf (“\nsorry; you entered a non-positive number\n\n”);
        else
            printf (“\nthe number of digits in %d is %d\n\n”, num, digits);

        return 0;
    }

    ... this is where you write the function num_digits
*/

#include <stdio.h>

int num_digits(int n); /* function declaration */

int main(){

    int num, digits;

    printf("enter a positive integer: ");
    scanf("%d", &num);

    digits = num_digits(num); /* function call */

    if (digits == -1)
        printf ("\nsorry; you entered a non-positive number\n\n");
    else
        printf ("\nthe number of digits in %d is %d\n\n", num, digits);

    return 0;
}

int num_digits(int n){
    int digits=0;

    if (n<=0) return -1;

    do{
        digits++;
        n /= 10;
    } while (n>0);

    return digits;
}
