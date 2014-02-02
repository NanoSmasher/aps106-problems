#include <stdlib.h>

int round (double a);

int main(){
    /*
    Write a function round that corresponds to the following declaration: int round (double a);
    The argument a can be any floating point number, positive or negative;
    the function rounds that value to the nearest whole number, and returns that value as an int.
    If you then write a main ( ) function to accompany round, you could then have input and output like this:

    enter a number: 12.3
    rounded to the nearest whole number: 12

    or

    enter a number: -14.7
    rounded to the nearest whole number: -15

    */
    double input;
    printf("enter a number: ");
    scanf("%lf", &input);
    printf("rounded to the nearest whole number: %d", round(input));
    return 0;
}

int round (double a){
    if (a>0.0) return (int)(a+0.5);
    else return (int)(a-0.5);
}
