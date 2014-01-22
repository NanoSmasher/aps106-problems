#include <stdio.h>

int main(){
    /*
    Write a C program that evaluates arctanh(x) from the series

    arctanh(x) = x + x^3/3 + x^5/5 + x^7/7 + x^9/9 + ...

    where x < 1.0 and x > -1.0. The program should begin by asking a user to enter x,
    and the number of terms to sum, N. If x is not between -1.0 and 1.0 or if N is less than 5,
    the program should repeatedly ask for input until these conditions are met.
    When the input is valid, the program should estimate the value of arctanh(x) by summing the first N terms of the series,
    and then print the value of arctan(x). For example:

    Enter x and the number of terms of series: 0.4 3
    Enter x and the number of terms of series: 1.5 11
    Enter x and the number of terms of series: 0.5 7
    tanh-1(0.500000) = 0.549303531
    */

    int n=0;
    float x=0, arctanh=0;
    int done=0;
    do{
        printf("Enter x and the number of terms of series: ");
        scanf("%f %d",&x,&n);
        if (x<=1.0 && x>=-1.0 && n>5 && n<100) done = !done;
    } while (!done);
    int cnt = 1;
    int i = 0;
    for (i = 0; i < n; i++){
        arctanh+=pow(x,cnt)/(double)(cnt);
        cnt+=2;
    }
    printf("tanh-1(%.6f) = %.9f",x,arctanh);
    return 0;
}
