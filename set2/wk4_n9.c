#include <stdio.h>

int main(){
    /*The following is known as the Fibonacci series of numbers:

    0 1 1 2 3 5 8 13 21 34 55 89 ...

    The first Fibonacci number is 0, the second Fibonacci number is 1.
    After the first two, each successive number can be calculated by summing the previous two.
    Write a program that asks a user for a number of terms,
    and then prints that many terms of the series to the screen.
    */

    int terms=0, i=0, num1=1, num2=0;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    if (terms < 0 || terms > 47) printf("ERROR: Out of bounds");
    else {

        for (i = 0; i < terms; i++){
            if (i%2){
                printf("%d ", num1);
                num2 += num1;
            } else {
                printf("%d ", num2);
                num1 += num2;
            }

        }

    }

    return 0;
}
