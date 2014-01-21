#include <stdio.h>
#include <stdlib.h>

int main () {
    /* The following is a series representation for pi:
    pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - ...
    Write a program that asks a user to input a (positive) number of terms, and then calculate the
    approximation to pi by evaluating that many terms of the series.
    */

    int terms = 0, i = 0, d = 1;
    float pi = 4;
    printf("Enter number of terms used to approximate pi: ");
    scanf("%d",&terms);
    if (terms > 1000) printf("ERROR: Value too large");
    else if (terms < 0)printf("ERROR: negative value");
    else{
        printf("pi = 4");
        for (i = 1; i < terms; i++){
            d+=2;
            if ((i+1)%2){
                pi += 4.0/d;
                printf(" + 4/%d", d);
            } else {
                pi -= 4.0/d;
                printf(" - 4/%d", d);
            }
        }
        printf("\n=%.21f", pi);
    }
    return 0;
}
